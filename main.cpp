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

int SizeInput();
void ArrayMenu(const int& size, Person** arr);
void PrintClassesNames(const int& size, Person** arr);
//funcitons declerations

int main() {
	int size = SizeInput(); //ask user for size of array

	cout << "----------------------------\n";

	Person **arr = new Person*[size]; // RTTI array

	ArrayMenu(size,arr);// call for menu and inititate array
	PrintClassesNames(size, arr);//print all types of objects in array
	   
	cout << endl;
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
void ArrayMenu(const int& size, Person** arr) 
{
	int typeInput;
	for (int i = 0; i < size; i++)
	{//initate array
		cout << "Please choose what type of person you'd like to add:\n1 - Person\n2 - Student\n3 - Employee\n4 - Working Student\n";
		cin >> typeInput;  // input from user
		if (typeInput < 1 || typeInput>4)
		{//check input
			cout << "Wrong input, please try again: ";
			i--;
			break;
		}
		
		char name[11];
		long id;
		int age; // person data

		cout << "\nPlease enter the name of the person (10 letters max): ";
		cin >> name;
		cout << "\nPlease enter the id of the person: ";
		cin >> id;
		cout << "\nPlease enter the age of the person: ";
		cin >> age;
		//input abous person

		if (typeInput == 1) // if the user wants to add a person
			arr[i] = new Person(name, id, age); // new person
		else if (typeInput == 2)//if the user wants to add a student
		{
			int average;
			char institute[11];

			cout << "\nPlease enter the average of the student: ";
			cin >> average;
			cout << "\nPlease enter the institute of the student (10 letters max): ";
			cin >> institute;
			//input from user about student

			arr[i] = new Student(average, institute, name, id, age); // new student
		}
		else if (typeInput == 3) // if the user wants to add an employee
		{
			float salary;
			cout << "\nPlease enter the salary of the employee: ";
			cin >> salary;
			//input from user about employee
			arr[i] = new Employee(salary, name, id, age);//new employee
		}
		else // if the user wants to add a working student
		{
			int average;
			char institute[11];

			cout << "\nPlease enter the average of the student: ";
			cin >> average;
			cout << "\nPlease enter the institute of the student (10 letters max): ";
			cin >> institute;
			//input from user about student

			float salary;
			cout << "\nPlease enter the salary of the employee: ";
			cin >> salary;
			//input from user about employee

			arr[i] = new WorkingStudent(name,id,age,average,institute,salary); // new working student
		}

		if (i != size - 1)
			cout << "\n-----------------Next Person-----------------\n\n";
	}


}
void PrintClassesNames(const int& size,Person** arr)
{
	cout << "Printing all types of persons in the array:\n";
	for (int i = 0; i < size; i++)
		cout << typeid(*arr[i]).name()<<endl;
}