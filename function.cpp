#include"function.hpp"
#include <iostream>
using namespace std;

void assign() 
{
	// C++ 11初始化赋值
	// 将值写在小括号或花括号中，等号可以省略
	int a(5);
	int b{ 10 };
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

void ternaryOperator()
{
	// 三目运算符
	int a(10);
	int b(20);
	//C取a,b间的最大值
	int c = (a > b) ? a : b;
	cout << "c = " << c << endl;
}

void switchStatement()
{
	// case后面必须是整数和字符，或者是结果为整数和字符的表达式，但不能使用变量。
	// default不是必须的，当没有default时，如果全部的case匹配失败，那么就什么都不执行。
	// 每个分支不要漏写break;语句。
	int num;
	cout << "请输入一个数字：" << endl;
	cin >> num;
	switch (num)
	{case 1:
		cout << "你输入的是1" << endl;
		break;
	case 2:
		cout << "你输入的是2" << endl;
		break;
	case 3:
		cout << "你输入的是3" << endl;
		break;
	default:
		cout << "你输入的不是1,2,3" << endl;
		break;
	}
}

void jump()
{
	// break和continue的区别
	// break用于终止整个循环，continue用于跳过本次循环
	// break只能在循环体内和switch语句体内使用
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			cout << "break跳出整个循环" << endl;
			break;
		}
		cout << i << endl;
	}
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			cout << "跳过本次循环体中剩下尚未执行的语句，立即进行下一次的循环条件判定" << endl;
			continue;
		}
		cout << i << endl;
	}
}

void circulation()
{
	// do while循环
	int i(0);
	do {
		cout << "i = " << i++ << endl;
	} while (i <= 5);
	cout << "----------------" << endl;
	i = 1;
	// goto语句
	// goto语句可以无条件转移到程序中的标号处，但是不建议使用
	// 一般情况下，不建议使用goto语句，因为它会使程序的控制流变得混乱，使程序难以理解和调试
	// 但是在某些特殊情况下，goto语句是必须的，比如在多重循环中，跳出多重循环
	// 可以使用break和continue语句来代替goto语句
	while (1)
	{
		cout << "在while(1)中" << endl;
		while (i++)
		{
			cout << "i = " << i << endl;
			if(i > 3)
				goto label;
		}
	}
label:
	cout << "程序结束" << endl;
}

void localAndGlobal(int i)
{
	// 局部变量和全局变量
	cout << "全局变量i = " << i << endl;
	while (i <5)
	{
		cout << "i = " << i++ << endl;
	}
}

void escapeCharacter()
{
	//\t水平制表，对齐
	//输出"需要转义
	cout<<"1\t\"Hello World!\""<<endl;
	cout<<"01\t\"Hello World!\""<<endl;
	cout<<"001\t\"Hello World!\""<<endl;
}

void rawString() {
	//使用转义方法
	string path = "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community";
	cout << "path is: " << path << endl;	

	//使用C++原始字面量
	string path1 = R"(C:\Program Files\Microsoft Visual Studio\2022\Community)";
	cout << "path1 is: " << path1 << endl;
	
	//为了提高可读性，原始字面量前后可加标签
	string path2 = R"explain(C:\Program Files\Microsoft Visual Studio\2022\Community)explain";
	cout << "path2 is: " << path2 << endl;
	//原始字面量处理多行字符串
	string str = R"(
        <no>0001</no>
        <name>西施</name>
        <sc>火树银花</sc>
        <yz>沉鱼</yz>
        <age>23</age>
        <weight>48.5</weight>
        <height>170</height>)";
	cout << str << endl;
}

void typedefAlias()
{
	//typedef 原数据类型名 别名;
	typedef short int16_t;
	//C++11中，可以用using 别名=原数据类型名;
	using int32_t = int;

	cout << "int16_t: " << sizeof(int16_t) << endl;
	cout << "int32_t: " << sizeof(int32_t) << endl;
}

void pointer()
{
	int a;
	char b;
	bool c;
	string d;
	//对指针赋值
	int* ptr_a = &a;
	char* ptr_b = &b;
	bool* ptr_c = &c;
	string* ptr_d = &d;

	cout << "指针地址:" << endl;
	//cout取地址输出字符串,有些可能输出“烫烫烫烫...
	cout << "a的地址是：" << &a << endl;
	cout << "b的地址是：" << &b << endl;
	cout << "c的地址是：" << &c << endl;
	cout << "d的地址是：" << &d << endl;
	//以十六进制输出
	cout << "a的地址是：" << (void*)&a << endl;
	cout << "b的地址是：" << (void*)&b << endl;
    cout << "c的地址是：" << (void*)&c << endl;
	cout << "d的地址是：" << (void*)&d << endl;
	//以十进制输出,类型转换为long long，因为int型地址可能超出范围
	cout << "a的地址是：" << (long long)&a << endl;
	cout << "b的地址是：" << (long long)&b << endl;
	cout << "c的地址是：" << (long long)&c << endl;
	cout << "d的地址是：" << (long long)&d << endl;

	//输出指针内容，为各个变量的地址
	cout << "指针内容:" << endl;
	cout << "ptr_a的内容是：" << (long long)ptr_a << endl;
	cout << "ptr_b的内容是：" << (long long)ptr_b << endl;
	cout << "ptr_c的内容是：" << (long long)ptr_c << endl;
	cout << "ptr_d的内容是：" << (long long)ptr_d << endl;


	//回顾一下各类型的大小
	cout << "int: " << sizeof(int) << endl;
	cout << "char: " << sizeof(char) << endl;
	cout << "bool: " << sizeof(bool) << endl;
	cout << "string: " << sizeof(string) << endl;
	//指针也是变量，占用内存空间都是8个字节
	cout << "int*指针占用空间: " << sizeof(ptr_a) << endl;
	cout << "char*指针占用空间: " << sizeof(ptr_b) << endl;
	cout << "bool*指针占用空间: " << sizeof(ptr_c) << endl;
	cout << "string*指针占用空间: " << sizeof(ptr_d) << endl;

	//解引用运算符
	int x = 10;
	int* ptr_x = &x;
	cout << "x的值是：" << x << endl;
	cout << "*ptr_x的值是：" << *ptr_x << endl;

	pointer(ptr_x);
	cout << "现在x的值是：" << x << endl;
	pointer(&x);
	cout << "现在x的值是：" << x << endl;
}

void pointer(int* a)
{
	*a += 1;
}

void constPointer()
{	
	//指针常量
	//语法：const 数据类型 *指针名;
	//不能通过解引用的方法修改内存地址中的值，但用原始的变量名是可以修改
	//指向的变量（对象）可以改变
	//一般用于修饰函数的形参，表示不希望在函数里修改内存地址中的值
	//如果用于形参，虽然指向的对象可以改变，但这么做没有任何意义
	//如果形参的值不需要改变，建议加上const修饰，程序可读性更好。

	//常量指针
	//语法：数据类型 *const 指针名;
	//指向的变量（对象）不可改变
	//在定义的同时必须初始化，否则没有意义。
	//可以通过解引用的方法修改内存地址中的值。
	//C++编译器把指针常量做了一些特别的处理，改头换面之后，有一个新的名字，叫引用。

	//常指针常量
	//语法：const 数据类型 *const 指针名;
	//指向的变量（对象）不可改变，不能通过解引用的方法修改内存地址中的值
	//
	
}