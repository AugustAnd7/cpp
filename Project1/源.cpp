#include<iostream>
using namespace std;
#include "swap.h"
int main() {
	
	int a1 = 0;
	int b1 = 1;

	cout << "��ʼa " << a1 << endl;
	cout << "��ʼb " << b1 << endl;

	swap1(a1, b1);//ֵ���ݲ��ı�ʵ�� ���ڲ�ִ�д�ӡ����ʱ�ſ��ó�������
	
	cout << "��ʱ��a��ֵΪ " << a1 << endl;
	cout << "��ʱ��b��ֵΪ " << b1 << endl;

	int a2 = 0;
	int b2 = 1;

	cout << "��ʼa " << a2 << endl;
	cout << "��ʼb " << b2 << endl;

	swap2(&a2, &b2);//��ַ���ݸı�ʵ��

	cout << "��ʱ��a��ֵΪ " << a2 << endl;
	cout << "��ʱ��b��ֵΪ " << b2 << endl;

	system("pause");
	
	return 0;
}