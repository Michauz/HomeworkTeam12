#pragma once
#include "Person.h"

class Student :virtual public Person {
		int Average;
		char Institute[11];

	public:
		Student();
		Student(int avg, char* insti, char* n, long id, int age);
		virtual void Print()const;
		int getavg()const { return Average; };
		char* getinsti() { return Institute; };
};
