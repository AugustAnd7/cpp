#include<iostream>
#include "swap.h"
using namespace std;

void swap1(int a, int b)
{
	int temp = a ;
	a = b ;
	b = temp ;
	cout << "�ڲ�a= " << a << endl;
	cout << "�ڲ�b= " << b << endl;
}

void swap2(int * p1, int * p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	cout << "�ڲ�a= " << *p1 << endl;
	cout << "�ڲ�b= " << *p2 << endl;
}