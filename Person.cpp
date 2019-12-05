#include "Person.h"

Person::Person() {								//default ctor
	strcpy(name,"bobbyboten");
	ID = 11235813;
	Age = 120;

}

Person::Person(char* n,long id,int age) {		//ctor
	strcpy(name,n);
	ID = id;
	Age = age;

}

void Person::Print()const {
	int i = 0;
	while (this->name[i] != '\0')
		cout << this->name[i];
	cout << "  " << ID << endl << "Age: " << Age << endl;
}





