#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================

Person::Person() {
	name = "Unknown";
	id = 0;
}
Person::Person(string name, int id) {
	this->name = name;
	this->id = id;
}
void Person::display() {
	cout << "Name: " << name << ", ID: " << id << endl;
}






// ==================== Student Class Implementation ====================

Student::Student() : Person() {
	
}

Student::Student(int year, string major, string name, int id) : Person(name, id) {
	this->yearLevel = year;
	this->major = major;
}
void Student::display() {
	Person::display();
	cout << "Year Level: " << yearLevel << ", Major: " << major << endl;
}




// ==================== Instructor Class Implementation ====================
Instructor::Instructor() : Person() {
	department = "Unknown";
}
Instructor::Instructor(string dept,int experienceYears ,string name, int id) : Person(name, id) {
	department = dept;
	this->experienceYears = experienceYears;
}

void Instructor::display() {
	Person::display();
	cout << "Department: " << department << ", Experience Years: " << experienceYears << endl;
}





// ==================== Course Class Implementation ====================


Course::Course(string code, string name, int max) {
	coursecode = code;
	coursename = name;
	maxStudents = max;
	currentStudents = 0;
	enrolledStudents = new Student[maxStudents];
}

void addStudent(Student s) {
	if (currentStudents < maxStudents) {
		enrolledStudents[currentStudents++] = s;
	}
	else {
		cout << "Course is full" << endl;
	}
}
void Course::displayCourseInfo() {
	cout << "Course Code: " << coursecode << ", Course Name: " << coursename << endl;
	cout << "Enrolled Students (" << currentStudents  "):" << endl;
	for (int i = 0; i < currentStudents; i++) {
		enrolledStudents[i].display();
	}
}





// ==================== Main Function ====================
int main() {
	Person p = person("Omar Nabil", 2202);
	Course c = Course("CS101", "Introduction to programming",3);
	Instructor i = Instructor("Computer Science", 5, "Dr.Lina Khaled", 9596);
Student s = Student(2,"informatics","Omar Nabil",1010);
c.displayCourseInfo();
i.display();
s.display();
return 0;
}
