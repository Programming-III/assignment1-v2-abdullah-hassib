#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here


class Course{ 
private:
	string coursecode
		string coursename;
	int maxStudents;
	Student* enrolledStudents;
	int currentStudents;

public:
	Course(string code, string name, int max);
	Course();
	displayCourseInfo();


};












#endif
