#include "Student.h"

//Student::Student(std::string h_n, int age, std::string u_n, std::string adr, std::string fclt, std::string grp, std::initializer_list<int> grd)
//: Human(h_n, age), University(u_n, adr, fclt), group(grp)
//{
//	gradesSize = grd.size();
//	grades = new int[gradesSize];
//	for (const int* i = grd.begin(); i != grd.end(); i++)
//	{
//		*grades = *i;
//		grades++;
//	}
//	grades -= gradesSize;
//}

Student::~Student()
{
	delete[] grades;
}

void Student::input()
{
	Human::input();
	University::input();
	std::cout << "Input group: ";
	std::cin >> group;
	std::cout << "Input amount of grades: ";
	int size;
	std::cin >> size;
	delete[]grades;
	grades = new int[size];
	std::cout << "Input grades: ";
	for (int i = 0; i < size; i++)
	{
		std::cin >> grades[i];
		gradesSize++;
	}
}

void Student::print()
{
	Human::print();
	University::print();
	std::cout << "Group: " << group << std::endl;
	std::cout << "Grades: ";
	int i = 0;
	for (int i = 0; i < gradesSize; i++)
	{
		std::cout << grades[i] << " ";
	}
	std::cout << std::endl;
}

