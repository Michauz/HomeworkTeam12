#pragma once
#include "Person.h"

class Employee :virtual public Person {
	float salary;
public:
	inline Employee() :Person() { salary = 0; };
	inline Employee(float salary, char* n, long id, int age) :Person(n, id, age) { this->salary = salary; };
	void virtual Print()const;
	inline int getsalary()const { return salary; };
	};
