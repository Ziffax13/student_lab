#include "Human.h"

Human::Human(std::string n, int a) : name(n), age(a)
{}

void Human::input()
{
	std::cout << "Input human name: ";
	std::cin >> name;
	std::cout << "Input age: ";
	std::cin >> age;
}

void Human::print()
{
	std::cout << "Human name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
}
