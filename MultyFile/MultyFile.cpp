// MultyFile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>//<> встроенные библиотеки
#include "Function.h"
#include "Structures.h"
#include "Data.h"


int main()
{
    setlocale(LC_ALL, "rus");
    double n, m;
    

    std::cout << "Введите два числа: ";
    std::cin >> n >> m;
    std::cout << n << " + " << m << " = "<< sum(n, m) << std::endl;
    hi();

    const int size = 10;
    int arr[size]{ 1, 2 };
    print_arr(arr, size);
    person p1{
        "Tom",
        26,
        "programer",
        80000
    };

    _A = 5;

    print_person(p1);

    _A = 10;
    std::cout <<"A = "<< _A << std::endl;
    std::cout << "Pi = " << _PI << std::endl;
    std::cout << "E = " << _E << std::endl;

}

//Области применения многофайловых проектов:
// 1. Ускорение сборки;
// 2. Разделение кода на разделы для удобства работы с проектом;
// 3. Создание собственных библиотек.

