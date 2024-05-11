#include"Student.h"
#include"Teacher.h"
#include"Course.h"
#include"LearningCenter.h"
/*
#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;


int main() {
    LearningCenter center;
    ofstream outfile("example.txt");
    if (outfile.is_open()) {
        outfile << "Hello, this is a test file.";
        outfile.close();
    }

    int choice;
    do {
        cout << "Learning Center Management System" << endl;
        cout << "1. Register Student" << endl;
        cout << "2. Register Teacher" << endl;
        cout << "3. Create Course" << endl;
        cout << "4. Enroll Student in Course" << endl;
        cout << "5. Display Students" << endl;
        cout << "6. Display Teachers" << endl;
        cout << "7. Display Courses" << endl;
        cout << "8. Detailed View of Student" << endl;
        cout << "9. Detailed View of Teacher" << endl;
        cout << "10. Detailed View of Course" << endl;
        cout << "11. Delete Student" << endl;
        cout << "12. Delete Teacher" << endl;
        cout << "13. Delete Course" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            center.registerStudent();
            break;
        case 2:
            center.registerTeacher();
            break;
        case 3:
            center.createCourse();
            break;
        case 4:
            center.enrollStudentInCourse();
            break;
        case 5:
            center.displayStudents();
            break;
        case 6:
            center.displayTeachers();
            break;
        case 7:
            center.displayCourses();
            break;
        case 8:
            center.displayStudents();
            int studentIndex;
            cout << "Enter student number for detailed view: ";
            cin >> studentIndex;
            center.displayDetailedStudent(studentIndex - 1);
            break;
        case 9:
            center.displayTeachers();
            int teacherIndex;
            cout << "Enter teacher number for detailed view: ";
            cin >> teacherIndex;
            center.displayDetailedTeacher(teacherIndex - 1);
            break;
        case 10:
            center.displayCourses();
            int courseIndex;
            cout << "Enter course number for detailed view: ";
            cin >> courseIndex;
            center.displayDetailedCourse(courseIndex - 1);
            break;
        case 11:
            int delStudentIndex;
            cout << "Enter student number to delete: ";
            cin >> delStudentIndex;
            center.deleteStudent(delStudentIndex - 1);
            break;
        case 12:
            int delTeacherIndex;
            cout << "Enter teacher number to delete: ";
            cin >> delTeacherIndex;
            center.deleteTeacher(delTeacherIndex - 1);
            break;
        case 13:
            int delCourseIndex;
            cout << "Enter course number to delete: ";
            cin >> delCourseIndex;
            center.deleteCourse(delCourseIndex - 1);
            break;
        case 0:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}
*/


#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <chrono>
#include <ctime>

using namespace std;


void logEvent(const string& event) {

    ofstream logFile("log.txt", ios::app);

    logFile << event << endl;

    logFile.close();
   
}


int main() {
    LearningCenter center;

    int choice;
    do {
        cout << "Learning Center Management System" << endl;
        cout << "1. Register Student" << endl;
        cout << "2. Register Teacher" << endl;
        cout << "3. Create Course" << endl;
        cout << "4. Enroll Student in Course" << endl;
        cout << "5. Display Students" << endl;
        cout << "6. Display Teachers" << endl;
        cout << "7. Display Courses" << endl;
        cout << "8. Detailed View of Student" << endl;
        cout << "9. Detailed View of Teacher" << endl;
        cout << "10. Detailed View of Course" << endl;
        cout << "11. Delete Student" << endl;
        cout << "12. Delete Teacher" << endl;
        cout << "13. Delete Course" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        string eventDescription;
        switch (choice) {
        case 1:
            center.registerStudent();
            eventDescription = "Student registered.";
            break;
        case 2:
            center.registerTeacher();
            eventDescription = "Teacher registered.";
            break;
        case 3:
            center.createCourse();
            eventDescription = "Course created.";
            break;
        case 4:
            center.enrollStudentInCourse();
            eventDescription = "Student enrolled in course.";
            break;
        case 5:
            center.displayStudents();
            eventDescription = "Students displayed.";
            break;
        case 6:
            center.displayTeachers();
            eventDescription = "Teachers displayed.";
            break;
        case 7:
            center.displayCourses();
            eventDescription = "Courses displayed.";
            break;
        case 8:
            int studentIndex;
            cout << "Enter student number for detailed view: ";
            cin >> studentIndex;
            center.displayDetailedStudent(studentIndex - 1);
            eventDescription = "Detailed view of student displayed.";
            break;
        case 9:
            int teacherIndex;
            cout << "Enter teacher number for detailed view: ";
            cin >> teacherIndex;
            center.displayDetailedTeacher(teacherIndex - 1);
            eventDescription = "Detailed view of teacher displayed.";
            break;
        case 10:
            int courseIndex;
            cout << "Enter course number for detailed view: ";
            cin >> courseIndex;
            center.displayDetailedCourse(courseIndex - 1);
            eventDescription = "Detailed view of course displayed.";
            break;
        case 11:
            int delStudentIndex;
            cout << "Enter student number to delete: ";
            cin >> delStudentIndex;
            center.deleteStudent(delStudentIndex - 1);
            eventDescription = "Student deleted.";
            break;
        case 12:
            int delTeacherIndex;
            cout << "Enter teacher number to delete: ";
            cin >> delTeacherIndex;
            center.deleteTeacher(delTeacherIndex - 1);
            eventDescription = "Teacher deleted.";
            break;
        case 13:
            int delCourseIndex;
            cout << "Enter course number to delete: ";
            cin >> delCourseIndex;
            center.deleteCourse(delCourseIndex - 1);
            eventDescription = "Course deleted.";
            break;
        case 0:
            eventDescription = "Program exited.";
            cout << "Exiting program." << endl;
            break;
        default:
            eventDescription = "Invalid choice.";
            cout << "Invalid choice. Please try again." << endl;
        }
        logEvent(eventDescription);
    } while (choice != 0);

    return 0;
}


