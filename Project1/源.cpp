#include<iostream>
using namespace std;
#include "swap.h"
int main() {
	
	int a1 = 0;
	int b1 = 1;

	cout << "初始a " << a1 << endl;
	cout << "初始b " << b1 << endl;

	swap1(a1, b1);//值传递不改变实参 在内部执行打印命令时才看得出来交换
	
	cout << "此时的a的值为 " << a1 << endl;
	cout << "此时的b的值为 " << b1 << endl;

	int a2 = 0;
	int b2 = 1;

	cout << "初始a " << a2 << endl;
	cout << "初始b " << b2 << endl;

	swap2(&a2, &b2);//地址传递改变实参

	cout << "此时的a的值为 " << a2 << endl;
	cout << "此时的b的值为 " << b2 << endl;

	system("pause");
	
	return 0;
}