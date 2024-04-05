#include "newClass.h"
#include <memory>
#include <string>

void sharePtrFuc() {
	// 更推荐使用make_shared而非new，make_shared效率也更高
	shared_ptr<Ball> p1 = make_shared<Ball>();
	cout <<"p1' use count is " << p1.use_count() << endl;
	shared_ptr<Ball> p2 = p1;
	cout << "p1' use count is " << p1.use_count() << endl;
	cout << "p2' use count is " << p2.use_count() << endl;
	shared_ptr<Ball> p3 = p1;
	cout << "p1' use count is " << p1.use_count() << endl;
	cout << "p2' use count is " << p2.use_count() << endl;
	cout << "p3' use count is " << p3.use_count() << endl;
	p1.reset();
	cout << "after p1 reset..." << endl;
	cout << "p1' use count is " << p1.use_count() << endl;
	cout << "p2' use count is " << p2.use_count() << endl;
	cout << "p3' use count is " << p3.use_count() << endl;
	p2.reset();
	cout << "after p2 reset..." << endl;
	cout << "p1' use count is " << p1.use_count() << endl;
	cout << "p2' use count is " << p2.use_count() << endl;
	cout << "p3' use count is " << p3.use_count() << endl;
	// p3的reset可以接受一个新的Ball，那么p3不再指向旧的Ball，旧的Ball引用参数-1，然后p3指向新的Ball
	p3.reset(new Ball);
	/*cout << "after p3 reset..." << endl;
	cout << "p1' use count is " << p1.use_count() << endl;
	cout << "p2' use count is " << p2.use_count() << endl;
	cout << "p3' use count is " << p3.use_count() << endl;*/
}

/*
* 默认情况下,shared_ptr使用delete来删除资源
* 但是也可以自定义删除函数，比如关闭文件和断开网络连接， 而不是直接delete物体
*/

void close_file(FILE* fp) {
	if (fp == nullptr) return;
	fclose(fp);
	cout << "File closed." << endl;
}

void fileFuc() {
	FILE* fp = fopen("data.txt", "w");
	// 第二个参数就是自定义的删除函数
	shared_ptr<FILE> sfp{ fp, close_file };
	if (sfp == nullptr) {
		cerr << "Error opening file." << endl;
	}
	else {
		cout << "File opened" << endl;
	}
}

// 别名 Aliasing
struct Bar { int i = 123; };
struct Foo { Bar bar; };

void aliasing() {
	shared_ptr<Foo> f = make_shared<Foo>();
	cout << f.use_count() << endl;	//prints 1

	// 创建一个新的 shared_ptr<Bar>，它与 f 共享所有权，但指向 f 所指向的对象的 bar 成员，
	// 这里的b实际上访问的是一个Bar实例，而非Foo实例
	// f 和 b 都会增加引用计数，当 f 和 b 都被销毁或重置时，Foo 对象才会被删除
	shared_ptr<Bar> b(f, &(f->bar));
	cout << f.use_count() << endl;	//prints 2

	cout << b->i << endl;	//prints 123
}

// Undefined Behavior
// 尽量避免手动delete

// shared_ptr需要额外的维护一个引用计数，所以需要一些额外的内存和性能开销