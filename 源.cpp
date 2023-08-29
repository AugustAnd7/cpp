#include<iostream>
using namespace std;

int main() {
	
	int a = 0;
	int* p;
	p = &a;

	//或者直接这样
	/*int* p = &a;*/

	//查看&a的地址和p的关系
	cout << &a << " " << p;

	//尝试解引用
	cout << endl << *p << " " << a;
	
	//通过地址反向赋值
	*p = 1;
	cout << endl << *p << " " << a;
	
	//查看指针占用内存
	cout << endl;
	cout << sizeof(p) << " " << sizeof(&a);
	
	system("pause");
	
	return 0;
}