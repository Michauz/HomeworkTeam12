#include "Employee.h"
#include "Student.h"
#include <string.h>
class WorkingStudent :public Student, public Employee
{
public:
	WorkingStudent(char* name, long id, int age, int avg, char* inst, float salary) :Student(avg, inst, name, id, age), Employee(salary, name, id, age) {}

	bool same_institute(char* inst) {
		if (strcmp(getinsti(), inst) == 0)
			return true;
		return false;
	}
	void Print() const
	{
		Student::Print();
		Employee::Print();
	}
};