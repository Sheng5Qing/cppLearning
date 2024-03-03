#include"function.hpp"
using namespace std;

void assign() {
	// C++ 11初始化赋值
	// 将值写在小括号或花括号中，等号可以省略
	int a(5);
	int b{ 10 };
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}