#pragma once
#include <string>
#include<iostream>
using namespace std;
//ѧ��ӵ�����ֺͷ���
struct Student
{
	string name;
	int score;
};

//��ʦӵ�����ֺ�3ѧ��
struct Teacher
{
	string name;
	Student sArr[5];

};