#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>

class Student : public Person {
private:
    string studentId;
    string course;

public:
    Student(string name, string birthday, int gender, string studentId, string course);
    string getStudentId() const;
    void setStudentId(std::string studentId);
    string getCourse() const;
    void setCourse(std::string course);
    void display() const;
};

#endif
