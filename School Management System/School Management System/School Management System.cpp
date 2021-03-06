// School Management System.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class Person
{
protected:
	string firstname, lastname, gender, phone;
	int age;
public:
	void setFirstName(string fn)
	{
		firstname = fn;
	}
	void setLasttName(string ln)
	{
		lastname = ln;
	}
	void setGender(string g)
	{
		gender = g;
	}
	void setPhone(string p)
	{
		phone = p;
	}
	void setAge(int a)
	{
		age = a;
	}
	void display()
	{
		cout << "Full Name: " << firstname << " " << lastname << endl;
		cout << "Age:" << age << endl;
		cout << "Gender:" << gender << endl;
		cout << "Phone:" << phone << endl;
	}
};

class Teacher : public Person
{
protected:
	string department;
	int salary;
public:
	void setDepartment(string d)
	{
		department = d;
	}
	void setSalary(int s)
	{
		salary = s;
	}
	void display()
	{
		Person::display();
		cout << "Department: " << department << endl;
		cout << "Salary:" << salary << endl;
	}
};

class Student : public Person
{
protected:
	string gradeLevel, emergencyPhone;
public:
	void setGradeLevel(string gl)
	{
		gradeLevel = gl;
	}
	void setSalary(int ep)
	{
		emergencyPhone = ep;
	}
	void display()
	{
		Person::display();
		cout << "Grade Level: " << gradeLevel << endl;
		cout << "Emergency Contact:" << emergencyPhone << endl;
	}
};
int main()
{
	Teacher firstTeacher;
	firstTeacher.setFirstName("Joshua");
	firstTeacher.setLasttName("Parisaca");
	firstTeacher.setGender("Male");
	firstTeacher.setAge(24);
	firstTeacher.setPhone("7863527960");
	firstTeacher.setDepartment("Science");
	firstTeacher.setSalary(25000);
	firstTeacher.display();
	return 0;
}

