#pragma once
#include <iostream>
class University
{
	std::string name;
	std::string address;
	std::string faculty;
public:
	University() = default;
	University(std::string, std::string, std::string);
	void input();
	void print();
};

