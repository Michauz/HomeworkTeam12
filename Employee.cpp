#include "Employee.h"

void Employee::Print() const
{
	Person::Print();
	cout << endl << "Salary: " << salary << endl;
}
