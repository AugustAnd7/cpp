#include<iostream>
using namespace std;
#include <string>
#include <Windows.h>
#include "statement.h"

int main() {
	//����ͨѶ¼�ṹ�����
	List List1;
	List1.Size = 0;

	
	int slect = 0;
	while (true)
	{
		showMenu();
		cin >> slect;
		switch (slect)
		{
		case 1:
			cout << endl;
			cout << "***** 1.�����ϵ�� *****" << endl;
			cout << endl;
			Addperson(&List1);//���õ�ַ����
			break;

		case 2:
			cout << endl;
			cout << "***** 2.��ʾ��ϵ�� *****" << endl;
			cout << endl;
			ShowList(&List1);//ֱ��һ�������
			break;

		case 3:
			{cout << endl;
			cout << "***** 3.ɾ����ϵ�� *****" << endl;
			cout << "������Ҫɾ���Ķ�������" << endl;
			string name;
			cin >> name;
			if (Search(&List1, name) == -1)//��װ����
			{
				cout << "���޴���" << endl;
			}
			else
			{
				int ret = Search(&List1, name);
				DeletePerson(ret, &List1);//��װɾ��(�����)
				List1.Size--;
				cout << " ɾ���ɹ� " << endl;
			}
			cout << endl;
			system("pause");//�밴�����
			system("cls");//��������

			}
			break;

		case 4:
			{cout << endl;
			cout << "***** 4.������ϵ�� *****" << endl;
			cout << "������Ҫ���ҵĶ�������" << endl;
			string name;
			cin >> name;
			if (Search(&List1, name) == -1)//��װ���Һ�����һ��
			{
				cout << "���޴���" << endl;
			}
			else
			{
				int i = Search(&List1, name);
				cout << "����: " << List1.pArr[i].Name << "\t";

				//����Ա�
				cout << "�Ա�: ";
				if (List1.pArr[i].Sex == 1)
				{
					cout << "��\t";
				}
				else if (List1.pArr[i].Sex == 2)
				{
					cout << "Ů\t";
				}
				else
				{
					cout << "�ֶ��깺���\t";
				}

				//�������
				cout << "����: " << List1.pArr[i].Age << "��" << endl;

				//����绰����
				cout << "����: " << List1.pArr[i].Phonenumber << endl;

				//�����ַ
				cout << "��ַ: " << List1.pArr[i].Location << endl;

			}
			cout << endl;
			system("pause");//�밴�����
			system("cls");//��������

			}
			break;

		case 5:
			{cout << endl;
			cout << "***** 5.�޸���ϵ�� *****" << endl;
			cout << "������Ҫ�޸ĵĶ�������" << endl;
			string name;
			cin >> name;
			if (Search(&List1, name) == -1)//��װ����
			{
				cout << "���޴���" << endl;
			}
			else
			{
				int place = Search(&List1, name);
				//��Ӿ�����ϵ�� (����)
				Person newPerson;
				//����
				cout << "��������ϵ�˵�����" << endl;
				cin >> newPerson.Name;
				List1.pArr[place].Name = newPerson.Name;
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
				List1.pArr[place].Sex = newPerson.Sex;
				cout << endl;

				//����
				cout << "��������ϵ�˵�����" << endl;
				cin >> newPerson.Age;
				List1.pArr[place].Age = newPerson.Age;
				cout << endl;

				//�绰����
				cout << "��������ϵ�˵ĵ绰����" << endl;
				cin >> newPerson.Phonenumber;
				List1.pArr[place].Phonenumber = newPerson.Phonenumber;
				cout << endl;

				//��ַ
				cout << "��������ϵ�˵ĵ�ַ" << endl;
				cin >> newPerson.Location;
				List1.pArr[place].Location = newPerson.Location;
				cout << endl;

				cout << "�޸ĳɹ�" << endl;

				system("pause");//�밴�����
				system("cls");//��������

			}

			cout << endl;
			}
			break;

		case 6:
			{cout << endl;
			cout << "***** 6.�����ϵ�� *****" << endl;
			cout << "ȷ��Ҫ�����?" << endl;
			cout << "1--ȷ�� 0--�˳�" << endl;
			int a = 0;
			cin >> a;
			if (a == 1)
			{
				List1.Size = 0;
				cout << "ͨѶ¼�����,��л���ʹ��" << endl;
				system("pause");//�밴�����
				system("cls");//��������
			}
			else
			{
				break;
			}

			cout << endl;
			}
			break;

		case 0:
			cout << endl;
			cout << "***** 0.�˳�ͨѶ¼ *****" << endl;
			cout << "��ӭ���´�ʹ��" << endl;
			system("pause");
			return 0;
		
		default:
			cout << "�������˴����ѡ��!" << endl;
		

		}
	}

}