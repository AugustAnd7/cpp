#include <string>
#include<iostream>
using namespace std;
#include "state.h"
//思考我需要什么
//先定义两个结构体 T S
//创建实例
//需要给教师和学生名字赋值
//需要给学生赋予分数
//需要把教师和学生的关系打印出来
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
			cout << "\t学生姓名" << sArr[i].name << "  学生考试成绩" << sArr[i].score << endl;
		}
	}
	system("pause");
	return 0;
}
