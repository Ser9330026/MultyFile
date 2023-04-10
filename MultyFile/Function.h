#pragma once
#include <iostream>



double sum(double A, double B);
void hi();

template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << '\t';
	std::cout << "\b\b]\n";
}

