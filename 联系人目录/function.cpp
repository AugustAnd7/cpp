#include "statement.h"
#include<iostream>
using namespace std;
#include <string>
#include <Windows.h>


void showMenu()
{	//��װmenu�������
	cout << "************************" << endl;
	cout << "***** 1.�����ϵ�� *****" << endl;
	cout << "***** 2.��ʾ��ϵ�� *****" << endl;
	cout << "***** 3.ɾ����ϵ�� *****" << endl;
	cout << "***** 4.������ϵ�� *****" << endl;
	cout << "***** 5.�޸���ϵ�� *****" << endl;
	cout << "***** 6.�����ϵ�� *****" << endl;
	cout << "***** 0.�˳�ͨѶ¼ *****" << endl;
	cout << "************************" << endl;
	cout << endl;
}

//�����ϵ��
void Addperson(List* List)
{
	//�ж�ͨѶ¼�Ƿ�����
	if (List->Size == MAX)
	{
		cout << "ͨѶ¼����,�޷������" << endl;
		return;
	}
	else
	{
		//��Ӿ�����ϵ��
		Person newPerson;
		//����
		cout << "��������ϵ�˵�����" << endl;
		cin >> newPerson.Name;
		List->pArr[List->Size].Name = newPerson.Name;
		cout << endl;

		//�Ա�
		cout << "��������ϵ�˵��Ա�" << endl;
		cout << "����1Ϊ������2ΪŮ" << endl;
		cin >> newPerson.Sex;
		cin.clear();
		while (cin.get() != '\n');

		if (newPerson.Sex != 1 && newPerson.Sex != 2)
		{
			newPerson.Sex = 0;
			cout << "�Ѿ��Զ�������Ա�����Ϊ�ֶ��깺���" << endl;
		}
		else if (newPerson.Sex == 1) {
			cout << "��" << endl;
		}
		else
		{
			cout << "Ů" << endl;
		}
		List->pArr[List->Size].Sex = newPerson.Sex;
		cout << endl;

		//����
		cout << "��������ϵ�˵�����" << endl;
		cin >> newPerson.Age;
		List->pArr[List->Size].Age = newPerson.Age;
		cout << endl;

		//�绰����
		cout << "��������ϵ�˵ĵ绰����" << endl;
		cin >> newPerson.Phonenumber;
		List->pArr[List->Size].Phonenumber = newPerson.Phonenumber;
		cout << endl;

		//��ַ
		cout << "��������ϵ�˵ĵ�ַ" << endl;
		cin >> newPerson.Location;
		List->pArr[List->Size].Location = newPerson.Location;
		cout << endl;

		List->Size++;
		cout << "������ӳɹ�" << endl;

		system("pause");//�밴�����
		system("cls");//��������

	}
}

//��ʾ��ϵ��
void ShowList(List* List)
{
	//���ж���û����
	if (List->Size == 0)
	{
		cout << "ͨѶ¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < List->Size; i++)
		{
			//�������
			cout << "����: " << List->pArr[i].Name << "\t";

			//����Ա�
			cout << "�Ա�: ";
			if (List->pArr[i].Sex == 1)
			{
				cout << "��\t";
			}
			else if (List->pArr[i].Sex == 2)
			{
				cout << "Ů\t";
			}
			else
			{
				cout << "�ֶ��깺���\t";
			}

			//�������
			cout << "����: " << List->pArr[i].Age << "��" << endl;

			//����绰����
			cout << "����: " << List->pArr[i].Phonenumber << endl;

			//�����ַ
			cout << "��ַ: " << List->pArr[i].Location << endl;


		}
	}

}
int Search(List* List, string name)//���ҳ���  ��1ͨѶ¼������� ��2�����������
{
	for (int i = 0; i < List->Size; i++)
	{
		if (List->pArr[i].Name == name)
		{
			return i;//������
		}
		else
		{
			return -1;//������
		}
	}
}

void DeletePerson(int ret, List* List)//��װɾ��
{
	for (int i = ret; i < List->Size; i++)
	{
		List->pArr[i] = List->pArr[i + 1];//˳���ƶ�
	}
}