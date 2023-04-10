#pragma once

#include <iostream>

struct person {
	std::string name = "noname";
	int age = 0;
	std::string job = "empty";
	int salary = 0;
};

void print_person(const person& P);