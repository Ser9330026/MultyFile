#include "Structures.h"
#include <iostream>
//#include "Data.h"//������, �.� ����������� ���������� ����������

extern int _A;//����������� ���������� ����������, 
//����������� �� ��, ��� ��� ��� ��������� � �����-�� ������ �����

void print_person(const person& P)
{
	std::cout << "���: " << P.name << std::endl;
	std::cout << "��������: " << P.age << std::endl;
	std::cout << "������: " << P.job << std::endl;
	std::cout << "�����: " << P.salary << std::endl;
	std::cout << "A = " << _A << std::endl;
}
