#pragma once
#include <string>
#include<iostream>
using namespace std;
//学生拥有名字和分数
struct Student
{
	string name;
	int score;
};

//教师拥有名字和3学生
struct Teacher
{
	string name;
	Student sArr[5];

};