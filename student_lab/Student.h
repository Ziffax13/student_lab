#pragma once
#include "Human.h"
#include "University.h"

class Student : public Human, public University
{
	int gradesSize = 0;
	std::string group;
	int* grades;
public:
	Student() = default;
	Student(std::string h_n, int age, std::string u_n, std::string adr, std::string fclt, std::string grp, std::initializer_list<int> grd);
	~Student();

	void input();
	void print();
};

