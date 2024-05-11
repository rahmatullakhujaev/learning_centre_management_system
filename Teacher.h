#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"
#include <string>
using namespace std;
class Teacher : public Person {
private:
    string startDate;

public:
    Teacher(string name,string birthday, int gender, string startDate);
    string getStartDate() const;
    void setStartDate(string startDate);
    void display() const;
};

#endif
