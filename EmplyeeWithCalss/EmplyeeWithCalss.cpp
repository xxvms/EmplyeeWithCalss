// EmplyeeWithCalss.cpp : Defines the entry point for the console application.
//
/*
 Models employee database using inheritance

*/
#include "stdafx.h"
#include <iostream>
#include <string>
//const int LEN = 80; //brrr

class Employee			// class employee
{
private:
	std::string name;		// employee name
	unsigned long number;	// employee number
public:
	void getData()
	{
		std::cout << "\nEnter last name: "; std::cin >> name;
		std::cout << "Enter number: "; std::cin >> number;
	}
	void putData() const
	{
		std::cout << "\nName: " << name;
		std::cout << "\nNumber: " << number;
	}
};

class Manager : public Employee // managemen class
{
private:
	std::string title;		//"vice-president" etc
	double dues;			// golf club dues
public:
	void getData()
	{
		Employee::getData();
		std::cout << "Enter title: "; std::cin >> title;
		std::cout << "\nEnter gold club dues: "; std::cin >> dues;
	}
	void putData()
	{
		Employee::putData();
		std::cout << "Title: " << title << std::endl;
		std::cout << "Golf club dues: " << dues << std::endl;
	}
};

class Scientist : public Employee // scientist class 
{
private:
	int publication;				// number of publications
public:
	void getData()
	{
		Employee::getData();
		std::cout << "\nEnter number of publication: "; std::cin >> publication;
	}
	void putData() const
	{
		Employee::putData();
		std::cout << "\nNumber of publications: " << publication << std::endl;
	}
};

class Laborer : public Employee			//labourer class
{

};


int main()
{
	Manager manager1, manager2;
	Scientist scientist1;
	Laborer laborer1;

	// get data for all emploeey groups:
	std::cout << "Enter data for manager 1: ";
	manager1.getData();
	std::cout << std::endl; 

	std::cout << "Enter data for manager 2: ";
	manager2.getData();
	std::cout << std::endl;

	std::cout << "Enter data for scientist 1: ";
	scientist1.getData();
	std::cout << std::endl;

	std::cout << "Enter data for labourer 1: ";
	laborer1.getData();
	std::cout << std::endl;

	system("cls");

	// display data for all emploeey groups:
	std::cout << "\nData on manager 1: ";
	manager1.putData();

	std::cout << "\nData on manager 2: ";
	manager2.putData();

	std::cout << "\nData on scientist 1: ";
	scientist1.putData();

	std::cout << "\nData on labourer 1: ";
	laborer1.putData();

	system("pause");
    return 0;
}

