#pragma once
#include <iostream>
class Human
{
	std::string name;
	int age;
public:
	Human() = default;
	Human(std::string, int);
	void input();
	void print();
};

