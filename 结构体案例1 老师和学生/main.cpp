#include <string>
#include<iostream>
using namespace std;
#include "state.h"
//˼������Ҫʲô
//�ȶ��������ṹ�� T S
//����ʵ��
//��Ҫ����ʦ��ѧ�����ָ�ֵ
//��Ҫ��ѧ���������
//��Ҫ�ѽ�ʦ��ѧ���Ĺ�ϵ��ӡ����
int main() 
{	
	Teacher tArr[3];
	for (int i = 0; i < 3; i++)
	{
		char c = 'A' + i;
		tArr[i].name = "Teacher_" + string(1,c);
		cout << tArr[i].name << endl;
		Student sArr[5];
		for (int i = 0; i < 5; i++)
		{
			char c = 'A' + i;
			sArr[i].name = "Studet_" + string(1, c);
			sArr[i].score = rand() % 40 + 60;
			cout << "\tѧ������" << sArr[i].name << "  ѧ�����Գɼ�" << sArr[i].score << endl;
		}
	}
	system("pause");
	return 0;
}
