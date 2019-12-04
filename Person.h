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
		void Print();
		char* getname() { return name; };
		long getid() { return ID; };
		int getage() { return Age; };

};

