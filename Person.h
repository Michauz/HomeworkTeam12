#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

class Person {
		string name[10];
		long ID;
		int Age;

	public:
		Person(string n = "bobbyboten", long id = 11235813, int age = 120);
		void Print();
		string* getname() { return name; };
		long getid() { return ID; };
		int getage() { return Age; };

};

