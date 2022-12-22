#pragma once
#include "quadrilateral.h"
#include "error.h"
quadrilateral::quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) {
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;

	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;

	this->name = name;
};
quadrilateral::quadrilateral() : quadrilateral(10, 20, 30, 40, 50, 60, 70, 80, "���������������") { };


	
void quadrilateral :: get_print() {
	std::cout << name << ": " << std::endl;

	std::cout << "�������: (" << a << ", " << b << ", " << c << ", " << d << ") ";
	std::cout << "����: (" << A << ", " << B << ", " << C << ", " << D << ")" << std::endl;

	if (name == "���������������") {
		if (sides != 4) throw Error("����������� ������ �� ����� 4.");
		if ((A + B + C + D != 360)) throw Error("����� ����� �� ����� 360.");

	}
	

}
