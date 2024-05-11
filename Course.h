#ifndef COURSE_H
#define COURSE_H
#include<iostream>
#include<string>
#include<vector>
#include"Teacher.h"
#include"Student.h"
using namespace std;
class Course
{
private:
	
	string courseName;
	string courceDescription;
	vector<Student*> students;
	Teacher* teacher;

public:

	
	void setCourseName(string);
	string getCourseName();
	void setCourceDescription(string);
	string getCourceDescription();
	Teacher* getTeacher();
	void setTeacher(Teacher* teacher);
	Course(string cname,string cdesc, Teacher* teacher )
	{
		
		courseName = cname;
		courceDescription = cdesc;
		teacher = teacher;
	}

	void displayCourse() {
		
		//cout << "Cource number: " << teacher.getName() << endl;
		cout << "Cource Name: " << courseName << endl;
		cout << "Cource Description: " << courceDescription << endl;
		
	}
	void addStudent(Student* student);
	void display() const;
	void displayDetailed() const;



};




#endif







