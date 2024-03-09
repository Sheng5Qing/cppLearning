#include"function.hpp"
#include <iostream>
using namespace std;

void assign() 
{
	// C++ 11��ʼ����ֵ
	// ��ֵд��С���Ż������У��Ⱥſ���ʡ��
	int a(5);
	int b{ 10 };
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

void ternaryOperator()
{
	// ��Ŀ�����
	int a(10);
	int b(20);
	//Cȡa,b������ֵ
	int c = (a > b) ? a : b;
	cout << "c = " << c << endl;
}

void switchStatement()
{
	// case����������������ַ��������ǽ��Ϊ�������ַ��ı��ʽ��������ʹ�ñ�����
	// default���Ǳ���ģ���û��defaultʱ�����ȫ����caseƥ��ʧ�ܣ���ô��ʲô����ִ�С�
	// ÿ����֧��Ҫ©дbreak;��䡣
	int num;
	cout << "������һ�����֣�" << endl;
	cin >> num;
	switch (num)
	{case 1:
		cout << "���������1" << endl;
		break;
	case 2:
		cout << "���������2" << endl;
		break;
	case 3:
		cout << "���������3" << endl;
		break;
	default:
		cout << "������Ĳ���1,2,3" << endl;
		break;
	}
}

void jump()
{
	// break��continue������
	// break������ֹ����ѭ����continue������������ѭ��
	// breakֻ����ѭ�����ں�switch�������ʹ��
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			cout << "break��������ѭ��" << endl;
			break;
		}
		cout << i << endl;
	}
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			cout << "��������ѭ������ʣ����δִ�е���䣬����������һ�ε�ѭ�������ж�" << endl;
			continue;
		}
		cout << i << endl;
	}
}

void circulation()
{
	// do whileѭ��
	int i(0);
	do {
		cout << "i = " << i++ << endl;
	} while (i <= 5);
	cout << "----------------" << endl;
	i = 1;
	// goto���
	// goto������������ת�Ƶ������еı�Ŵ������ǲ�����ʹ��
	// һ������£�������ʹ��goto��䣬��Ϊ����ʹ����Ŀ�������û��ң�ʹ�����������͵���
	// ������ĳЩ��������£�goto����Ǳ���ģ������ڶ���ѭ���У���������ѭ��
	// ����ʹ��break��continue���������goto���
	while (1)
	{
		cout << "��while(1)��" << endl;
		while (i++)
		{
			cout << "i = " << i << endl;
			if(i > 3)
				goto label;
		}
	}
label:
	cout << "�������" << endl;
}

void localAndGlobal(int i)
{
	// �ֲ�������ȫ�ֱ���
	cout << "ȫ�ֱ���i = " << i << endl;
	while (i <5)
	{
		cout << "i = " << i++ << endl;
	}
}

void escapeCharacter()
{
	//\tˮƽ�Ʊ�����
	//���"��Ҫת��
	cout<<"1\t\"Hello World!\""<<endl;
	cout<<"01\t\"Hello World!\""<<endl;
	cout<<"001\t\"Hello World!\""<<endl;
}

void rawString() {
	//ʹ��ת�巽��
	string path = "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community";
	cout << "path is: " << path << endl;	

	//ʹ��C++ԭʼ������
	string path1 = R"(C:\Program Files\Microsoft Visual Studio\2022\Community)";
	cout << "path1 is: " << path1 << endl;
	
	//Ϊ����߿ɶ��ԣ�ԭʼ������ǰ��ɼӱ�ǩ
	string path2 = R"explain(C:\Program Files\Microsoft Visual Studio\2022\Community)explain";
	cout << "path2 is: " << path2 << endl;
	//ԭʼ��������������ַ���
	string str = R"(
        <no>0001</no>
        <name>��ʩ</name>
        <sc>��������</sc>
        <yz>����</yz>
        <age>23</age>
        <weight>48.5</weight>
        <height>170</height>)";
	cout << str << endl;
}

void typedefAlias()
{
	//typedef ԭ���������� ����;
	typedef short int16_t;
	//C++11�У�������using ����=ԭ����������;
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
	//��ָ�븳ֵ
	int* ptr_a = &a;
	char* ptr_b = &b;
	bool* ptr_c = &c;
	string* ptr_d = &d;

	cout << "ָ���ַ:" << endl;
	//coutȡ��ַ����ַ���,��Щ�����������������...
	cout << "a�ĵ�ַ�ǣ�" << &a << endl;
	cout << "b�ĵ�ַ�ǣ�" << &b << endl;
	cout << "c�ĵ�ַ�ǣ�" << &c << endl;
	cout << "d�ĵ�ַ�ǣ�" << &d << endl;
	//��ʮ���������
	cout << "a�ĵ�ַ�ǣ�" << (void*)&a << endl;
	cout << "b�ĵ�ַ�ǣ�" << (void*)&b << endl;
    cout << "c�ĵ�ַ�ǣ�" << (void*)&c << endl;
	cout << "d�ĵ�ַ�ǣ�" << (void*)&d << endl;
	//��ʮ�������,����ת��Ϊlong long����Ϊint�͵�ַ���ܳ�����Χ
	cout << "a�ĵ�ַ�ǣ�" << (long long)&a << endl;
	cout << "b�ĵ�ַ�ǣ�" << (long long)&b << endl;
	cout << "c�ĵ�ַ�ǣ�" << (long long)&c << endl;
	cout << "d�ĵ�ַ�ǣ�" << (long long)&d << endl;

	//���ָ�����ݣ�Ϊ���������ĵ�ַ
	cout << "ָ������:" << endl;
	cout << "ptr_a�������ǣ�" << (long long)ptr_a << endl;
	cout << "ptr_b�������ǣ�" << (long long)ptr_b << endl;
	cout << "ptr_c�������ǣ�" << (long long)ptr_c << endl;
	cout << "ptr_d�������ǣ�" << (long long)ptr_d << endl;


	//�ع�һ�¸����͵Ĵ�С
	cout << "int: " << sizeof(int) << endl;
	cout << "char: " << sizeof(char) << endl;
	cout << "bool: " << sizeof(bool) << endl;
	cout << "string: " << sizeof(string) << endl;
	//ָ��Ҳ�Ǳ�����ռ���ڴ�ռ䶼��8���ֽ�
	cout << "int*ָ��ռ�ÿռ�: " << sizeof(ptr_a) << endl;
	cout << "char*ָ��ռ�ÿռ�: " << sizeof(ptr_b) << endl;
	cout << "bool*ָ��ռ�ÿռ�: " << sizeof(ptr_c) << endl;
	cout << "string*ָ��ռ�ÿռ�: " << sizeof(ptr_d) << endl;

	//�����������
	int x = 10;
	int* ptr_x = &x;
	cout << "x��ֵ�ǣ�" << x << endl;
	cout << "*ptr_x��ֵ�ǣ�" << *ptr_x << endl;

	pointer(ptr_x);
	cout << "����x��ֵ�ǣ�" << x << endl;
	pointer(&x);
	cout << "����x��ֵ�ǣ�" << x << endl;
}

void pointer(int* a)
{
	*a += 1;
}

void constPointer()
{	
	//ָ�볣��
	//�﷨��const �������� *ָ����;
	//����ͨ�������õķ����޸��ڴ��ַ�е�ֵ������ԭʼ�ı������ǿ����޸�
	//ָ��ı��������󣩿��Ըı�
	//һ���������κ������βΣ���ʾ��ϣ���ں������޸��ڴ��ַ�е�ֵ
	//��������βΣ���Ȼָ��Ķ�����Ըı䣬����ô��û���κ�����
	//����βε�ֵ����Ҫ�ı䣬�������const���Σ�����ɶ��Ը��á�

	//����ָ��
	//�﷨���������� *const ָ����;
	//ָ��ı��������󣩲��ɸı�
	//�ڶ����ͬʱ�����ʼ��������û�����塣
	//����ͨ�������õķ����޸��ڴ��ַ�е�ֵ��
	//C++��������ָ�볣������һЩ�ر�Ĵ�����ͷ����֮����һ���µ����֣������á�

	//��ָ�볣��
	//�﷨��const �������� *const ָ����;
	//ָ��ı��������󣩲��ɸı䣬����ͨ�������õķ����޸��ڴ��ַ�е�ֵ
	//
	
}