#include"Course.h"
#include<iostream>
using namespace std;


void Course::setCourseName(string cname) {
	courseName = cname;
}
string Course::getCourseName() {
	return courseName;
}
void Course::setCourceDescription(string cvalue) {
	courceDescription = cvalue;
}
string Course::getCourceDescription() {
	return courceDescription;
}
void Course::setTeacher(Teacher* teacher) {
	teacher = teacher;
}
Teacher* Course::getTeacher()  {
	return teacher ;
}

void Course::addStudent(Student* student) {
	students.push_back(student);
}
void Course::display() const {
    cout << "Course Name: " << courseName << endl;
    cout << "Description: " << courceDescription << endl;
    cout << "Teacher: " << teacher->getName() << endl;
    cout << "Students Enrolled:" << endl;
    for (const auto& student : students) {
        cout << "- " << student->getName() << endl;
    }
}

void Course::displayDetailed() const {
    cout << "Course Name: " << courseName << endl;
    cout << "Description: " << courceDescription << endl;
    cout << "Teacher: " << teacher->getName() << endl;
}
