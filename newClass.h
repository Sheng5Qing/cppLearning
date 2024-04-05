#pragma once
#include<iostream>

using namespace std;

// 用于智能指针示例
class Ball {
public:
	Ball() {
		cout << "A ball appears." << endl;
	}
	~Ball() {
		cout << "A ball disappears." << endl;
	}
	void Bounce() {
		cout << "A ball jumps." << endl;
	}
};

void sharePtrFuc();