#ifndef _Employee_h
#define _Employee_h
#include "Person.h"

class Employee :public Person {
	float salary;
public:
	Employee() :Person() { salary = 0; };
	Employee(float salary, char* n, long id, int age);
	void virtual Print()const;
	int getavg()const;
	};
#endif 