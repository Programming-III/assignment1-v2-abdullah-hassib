#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here

class Student {
private:
	int yearLevel;
	string major;

public:
	Student(int year, string major);
		display();
	Student();
~Student();
};











#endif
