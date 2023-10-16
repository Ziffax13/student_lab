#include "University.h"

University::University(std::string n, std::string a, std::string f) : name(n), address(a), faculty(f)
{}

void University::input()
{
	std::cout << "Input university name: ";
	std::cin >> name;
	std::cout << "Input address: ";
	std::cin >> address;
	std::cout << "Input faculty: ";
	std::cin >> faculty;
}

void University::print()
{
	std::cout << "University name: " << name << std::endl;
	std::cout << "Address: " << address << std::endl;
	std::cout << "Faculty: " << faculty << std::endl;
}
