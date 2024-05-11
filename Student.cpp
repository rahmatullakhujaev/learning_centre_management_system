#include "Student.h"
#include <iostream>
using namespace std;
Student::Student(string name, string birthday, int gender, string studentId, string course)
    : Person(name, birthday, gender), studentId(studentId), course(course) {}

string Student::getStudentId() const {
    return studentId;
}

void Student::setStudentId(string studentId) {
    this->studentId = studentId;
}

string Student::getCourse() const {
    return course;
}

void Student::setCourse(string course) {
    this->course = course;
}

void Student::display() const {
    cout << "Name: " << getName() << endl;
    cout << "Birthday: " << getBirthday() << endl;
    cout << "Gender: " << (getGender() == 1 ? "Male" : "Female") << endl;
    cout << "Student ID: " << studentId << endl;
    cout << "Course: " << course << endl;
}
