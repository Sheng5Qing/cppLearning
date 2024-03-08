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