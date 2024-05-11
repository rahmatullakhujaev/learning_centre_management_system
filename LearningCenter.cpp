
#include "LearningCenter.h"
#include <iostream>
using namespace std;

LearningCenter::~LearningCenter() {
    for (auto& student : students) {
        delete student;
    }
    for (auto& teacher : teachers) {
        delete teacher;
    }
    for (auto& course : courses) {
        delete course;
    }
}

void LearningCenter::registerStudent() {
    string name, birthday, studentId, course;
    int gender;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter student birthday (YYYY-MM-DD): ";
    cin >> birthday;
    cout << "Enter student gender (1 for male, 2 for female): ";
    cin >> gender;
    cout << "Enter student ID: ";
    cin >> studentId;
    cout << "Enter course: ";
    cin >> course;
    Student* student = new Student(name, birthday, gender, studentId, course);
    students.push_back(student);
}

void LearningCenter::registerTeacher() {
    string name, birthday, startDate;
    int gender;
    cout << "Enter teacher name: ";
    cin >> name;
    cout << "Enter teacher birthday (YYYY-MM-DD): ";
    cin >> birthday;
    cout << "Enter teacher gender (1 for male, 2 for female): ";
    cin >> gender;
    cout << "Enter teacher start date (YYYY-MM-DD): ";
    cin >> startDate;
    Teacher* teacher = new Teacher(name, birthday, gender, startDate);
    teachers.push_back(teacher);
}

void LearningCenter::createCourse() {
    string name, description;
    cout << "Choose a teacher for the course:" << endl;
    displayTeachers(); // Display list of teachers first
    int choice;
    cin >> choice;
    cin.ignore(); // Clear the input buffer
    Teacher* teacher = teachers[choice - 1]; // Get the chosen teacher
    cout << "Enter course name: ";
    getline(cin, name); // Now, get the course name
    cout << "Enter course description: ";
    getline(cin, description);
    Course* course = new Course(name, description, teacher);
    courses.push_back(course);
}

void LearningCenter::enrollStudentInCourse() {
    cout << "Choose a student to enroll:" << endl;
    displayStudents();
    int studentChoice;
    cin >> studentChoice;
    Student* student = students[studentChoice - 1];

    cout << "Choose a course to enroll the student in:" << endl;
    displayCourses();
    int courseChoice;
    cin >> courseChoice;
    Course* course = courses[courseChoice - 1];

    course->addStudent(student);
}

void LearningCenter::deleteStudent(int index) {
    if (index >= 0 && index < students.size()) {
        delete students[index];
        students.erase(students.begin() + index);
    }
    else {
        cout << "Invalid student index." << endl;
    }
}

void LearningCenter::deleteTeacher(int index) {
    if (index >= 0 && index < teachers.size()) {
        delete teachers[index];
        teachers.erase(teachers.begin() + index);
    }
    else {
        cout << "Invalid teacher index." << endl;
    }
}

void LearningCenter::deleteCourse(int index) {
    if (index >= 0 && index < courses.size()) {
        delete courses[index];
        courses.erase(courses.begin() + index);
    }
    else {
        cout << "Invalid course index." << endl;
    }
}

void LearningCenter::displayStudents() const {
    cout << "List of Students:" << endl;
    for (int i = 0; i < students.size(); ++i) {
        cout << i + 1 << ". " << students[i]->getName() << endl;
    }
}

void LearningCenter::displayTeachers() const {
    cout << "List of Teachers:" << endl;
    for (int i = 0; i < teachers.size(); ++i) {
        cout << i + 1 << ". " << teachers[i]->getName() << endl;
    }
}

void LearningCenter::displayCourses() const {
    cout << "List of Courses:" << endl;
    for (int i = 0; i < courses.size(); ++i) {
        cout << i + 1 << ". " << courses[i]->getCourseName() << endl;
    }
}
void LearningCenter::displayDetailedStudent(int index) const {
    if (index >= 0 && index < students.size()) {
        cout << "Student Name: " << students[index]->getName() << endl;
        cout << "Student Birthday: " << students[index]->getBirthday() << endl;
        cout << "Student Gender: " << (students[index]->getGender() == 1 ? "Male" : "Female") << endl;
    }
    else {
        cout << "Invalid student index." << endl;
    }
}

void LearningCenter::displayDetailedTeacher(int index) const {
    if (index >= 0 && index < teachers.size()) {
        cout << "Teacher Name: " << teachers[index]->getName() << endl;
        cout << "Teacher Birthday: " << teachers[index]->getBirthday() << endl;
        cout << "Teacher Gender: " << (teachers[index]->getGender() == 1 ? "Male" : "Female") << endl;
    }
    else {
        cout << "Invalid teacher index." << endl;
    }
}

void LearningCenter::displayDetailedCourse(int index) const {
    if (index >= 0 && index < courses.size()) {
        courses[index]->displayDetailed();
    }
    else {
        cout << "Invalid course index." << endl;
    }
}

