//This is the first main file
//homework will be done here
//Dan is doing the person and the student class
//Alex is doing Employee class
//Michael is doing WorkingStudent class
//Shahar is doing the main class
//Dont forget to add comments and documentation
//Dont forget to add easter eggs (;
#include <iostream>
#include "Employee.h"
#include "Person.h"
#include "Student.h"
#include "WorkingStudent.h"
//Including all relevant types we created
using namespace std;
int main() {
	int size = SizeInput(); //ask user for size of array




	system("pause");
	return 0;
}

int SizeInput()
{
	int size;
	cout << "Please enter the amount of people: ";
	cin >> size; // asking for the size of the array
	return size;
}

