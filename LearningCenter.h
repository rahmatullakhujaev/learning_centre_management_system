#ifndef LEARNINGCENTER_H
#define LEARNINGCENTER_H

#include "Student.h"
#include "Teacher.h"
#include "Course.h"
#include <vector>
#include <iostream> // Include iostream for cout usage

class LearningCenter {
private:
    vector<Student*> students;
    vector<Teacher*> teachers;
    vector<Course*> courses;

public:
    ~LearningCenter();

    void registerStudent();
    void registerTeacher();
    void createCourse();
    void enrollStudentInCourse();
    void deleteStudent(int index);
    void deleteTeacher(int index);
    void deleteCourse(int index);
    void displayStudents() const;
    void displayTeachers() const;
    void displayCourses() const;
    void displayDetailedStudent(int index) const;
    void displayDetailedTeacher(int index) const;
    void displayDetailedCourse(int index) const;
};

#endif // LEARNINGCENTER_H
