#pragma once
#include "parallelogram.h"
#include "error.h"
parallelogram ::parallelogram(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) {
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;

	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;

	this->name = name;
}

parallelogram::parallelogram() : parallelogram(10, 10, 10, 10, 70, 110, 70, 110, "��������������") {  };



void parallelogram::get_print() {
	std::cout << name << ": " << std::endl;

	std::cout << "�������: (" << a << ", " << b << ", " << c << ", " << d << ") ";
	std::cout << "����: (" << A << ", " << B << ", " << C << ", " << D << ")" << std::endl;


	if (name == "�������������") {
		if ((a != c) || (b != d)) throw Error("��������������� ������� �� �����.");
		if ( (A!= 90) || (B != 90) || (C != 90) || (D != 90))throw Error("��� ���� �� ����� 90.");

	}
		 if (name == "����") {
			if ((a != b) || (b != c) || (c != d)) throw Error("��� ������� �� �����.");
			if ((A != C) || (B != D)) throw Error("��������������� ���� �� �����.");

		}
		 if (name == "�������") {
			if ((A != 90) || (B != 90) || (C != 90) || (D != 90)) throw Error("��� ���� �� ����� 90.");
			if ((a != b) || (b != c) || (c != d)) throw Error("��� ������� �� �����.");

		}
		 if (name == "��������������") {
			if ((a != c) || (b != d)) throw Error("������� �� ����� �������");
			if ((A != C) || (B != D)) throw Error("���� �� ����� �������");

		}
	
};