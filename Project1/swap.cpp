#include<iostream>
#include "swap.h"
using namespace std;

void swap1(int a, int b)
{
	int temp = a ;
	a = b ;
	b = temp ;
	cout << "内部a= " << a << endl;
	cout << "内部b= " << b << endl;
}

void swap2(int * p1, int * p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	cout << "内部a= " << *p1 << endl;
	cout << "内部b= " << *p2 << endl;
}