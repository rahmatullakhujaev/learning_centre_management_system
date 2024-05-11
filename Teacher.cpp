#include "Teacher.h"
#include <iostream>

Teacher::Teacher(string name, string birthday, int gender, string startDate)
    : Person(name, birthday, gender), startDate(startDate) {}

string Teacher::getStartDate() const {
    return startDate;
}

void Teacher::setStartDate(string startDate) {
    this->startDate = startDate;
}

void Teacher::display() const {
    cout << "Name: " << getName() << endl;
    cout << "Birthday: " << getBirthday() << endl;
    cout << "Gender: " << (getGender() == 1 ? "Male" : "Female") << endl;
    cout << "Start Date: " << startDate << endl;
}
