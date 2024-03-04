#include"function.hpp"
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