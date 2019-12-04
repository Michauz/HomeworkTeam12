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






