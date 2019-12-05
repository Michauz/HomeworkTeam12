#include "Student.h"

Student::Student() :Person() {								//default ctor
	Average = 42;
	strcpy(Institute, "Harvard");
}

Student::Student(int avg, char* insti, char* n, long id, int age) : Person(n,id,age) {	//ctor
	Average = avg;
	strcpy(Institute, insti);
}

void Student::Print()const {								//Printing fucntion
	int i=0;
	this->Person::Print();
	cout << "Institute: ";
	while (i != '\0')
		cout << this->Institute[i];
	cout << endl << "Avarage: " << Average << endl;
}



