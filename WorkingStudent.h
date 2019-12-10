#include "Person.h"
#include "Employee.h"
#include "Student.h"
#include <string.h>
class workingStudent :public Student,public Employee{
    public:
    
    bool same_institute(char *inst){
        if (strcmp(getinsti(),inst)==0)
            return true;
        return false;
    }


};