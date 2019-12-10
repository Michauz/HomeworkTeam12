#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

class Person {
	char name[11];
	long ID;
	int Age;

public:
	Person();
	Person(char* n, long id, int age);
	virtual void Print()const;
	char* getname() { return name; };
	long getid()const { return ID; };
	int getage()const { return Age; };

};

