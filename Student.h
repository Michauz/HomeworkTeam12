#ifndef _Student_h
#define _Student_h
#include "Person.h"

class Student :public Person {
		int Average;
		char Institute[11];
	public:
		Student();
		Student(int avg, char* insti, char* n, long id, int age);
		virtual print()const;
		int getavg()const { return Average; };
		char* getinsti() { return Institute; };

};

#endif 