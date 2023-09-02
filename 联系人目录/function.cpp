#include "statement.h"
#include<iostream>
using namespace std;
#include <string>
#include <Windows.h>


void showMenu()
{	//封装menu多次运用
	cout << "************************" << endl;
	cout << "***** 1.添加联系人 *****" << endl;
	cout << "***** 2.显示联系人 *****" << endl;
	cout << "***** 3.删除联系人 *****" << endl;
	cout << "***** 4.查找联系人 *****" << endl;
	cout << "***** 5.修改联系人 *****" << endl;
	cout << "***** 6.清空联系人 *****" << endl;
	cout << "***** 0.退出通讯录 *****" << endl;
	cout << "************************" << endl;
	cout << endl;
}

//添加联系人
void Addperson(List* List)
{
	//判断通讯录是否满了
	if (List->Size == MAX)
	{
		cout << "通讯录已满,无法再添加" << endl;
		return;
	}
	else
	{
		//添加具体联系人
		Person newPerson;
		//名称
		cout << "请输入联系人的姓名" << endl;
		cin >> newPerson.Name;
		List->pArr[List->Size].Name = newPerson.Name;
		cout << endl;

		//性别
		cout << "请输入联系人的性别" << endl;
		cout << "输入1为男输入2为女" << endl;
		cin >> newPerson.Sex;
		cin.clear();
		while (cin.get() != '\n');

		if (newPerson.Sex != 1 && newPerson.Sex != 2)
		{
			newPerson.Sex = 0;
			cout << "已经自动把你的性别设置为沃尔玛购物袋" << endl;
		}
		else if (newPerson.Sex == 1) {
			cout << "男" << endl;
		}
		else
		{
			cout << "女" << endl;
		}
		List->pArr[List->Size].Sex = newPerson.Sex;
		cout << endl;

		//年龄
		cout << "请输入联系人的年龄" << endl;
		cin >> newPerson.Age;
		List->pArr[List->Size].Age = newPerson.Age;
		cout << endl;

		//电话号码
		cout << "请输入联系人的电话号码" << endl;
		cin >> newPerson.Phonenumber;
		List->pArr[List->Size].Phonenumber = newPerson.Phonenumber;
		cout << endl;

		//地址
		cout << "请输入联系人的地址" << endl;
		cin >> newPerson.Location;
		List->pArr[List->Size].Location = newPerson.Location;
		cout << endl;

		List->Size++;
		cout << "人数添加成功" << endl;

		system("pause");//请按任意键
		system("cls");//清屏操作

	}
}

//显示联系人
void ShowList(List* List)
{
	//先判断有没有人
	if (List->Size == 0)
	{
		cout << "通讯录为空" << endl;
	}
	else
	{
		for (int i = 0; i < List->Size; i++)
		{
			//输出姓名
			cout << "姓名: " << List->pArr[i].Name << "\t";

			//输出性别
			cout << "性别: ";
			if (List->pArr[i].Sex == 1)
			{
				cout << "男\t";
			}
			else if (List->pArr[i].Sex == 2)
			{
				cout << "女\t";
			}
			else
			{
				cout << "沃尔玛购物袋\t";
			}

			//输出年龄
			cout << "年龄: " << List->pArr[i].Age << "岁" << endl;

			//输出电话号码
			cout << "号码: " << List->pArr[i].Phonenumber << endl;

			//输出地址
			cout << "地址: " << List->pArr[i].Location << endl;


		}
	}

}
int Search(List* List, string name)//查找程序  参1通讯录里的名字 参2你输入的名字
{
	for (int i = 0; i < List->Size; i++)
	{
		if (List->pArr[i].Name == name)
		{
			return i;//找着了
		}
		else
		{
			return -1;//妹找着
		}
	}
}

void DeletePerson(int ret, List* List)//封装删除
{
	for (int i = ret; i < List->Size; i++)
	{
		List->pArr[i] = List->pArr[i + 1];//顺序移动
	}
}