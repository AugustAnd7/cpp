#pragma once
#define MAX 1000
#include<iostream>
using namespace std;
#include <string>
#include <Windows.h>
struct Person
{
	string Name;
	int Sex;
	int Age;
	string Phonenumber;
	string Location;
};

struct List
{
	Person pArr[MAX];
	int Size;
};
void showMenu();
void Addperson(List* List);
int Search(List* List, string name);
void DeletePerson(int ret, List* List);
void ShowList(List* List);