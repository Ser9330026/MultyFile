#include "Structures.h"
#include <iostream>
//#include "Data.h"//ОШИБКА, т.к дублируется объявление переменных

extern int _A;//модификатор объявления переменной, 
//указавающий на то, что она уже объявлена в каком-то другом файле

void print_person(const person& P)
{
	std::cout << "Имя: " << P.name << std::endl;
	std::cout << "Возвраст: " << P.age << std::endl;
	std::cout << "Работа: " << P.job << std::endl;
	std::cout << "Доход: " << P.salary << std::endl;
	std::cout << "A = " << _A << std::endl;
}
