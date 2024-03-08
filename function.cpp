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