#include<iostream>
using namespace std;

int main() {
	
	int a = 0;
	int* p;
	p = &a;

	//����ֱ������
	/*int* p = &a;*/

	//�鿴&a�ĵ�ַ��p�Ĺ�ϵ
	cout << &a << " " << p;

	//���Խ�����
	cout << endl << *p << " " << a;
	
	//ͨ����ַ����ֵ
	*p = 1;
	cout << endl << *p << " " << a;
	
	//�鿴ָ��ռ���ڴ�
	cout << endl;
	cout << sizeof(p) << " " << sizeof(&a);
	
	system("pause");
	
	return 0;
}