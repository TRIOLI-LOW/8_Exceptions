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

parallelogram::parallelogram() : parallelogram(10, 10, 10, 10, 70, 110, 70, 110, "Параллелограмм") {  };



void parallelogram::get_print() {
	std::cout << name << ": " << std::endl;

	std::cout << "Стороны: (" << a << ", " << b << ", " << c << ", " << d << ") ";
	std::cout << "Углы: (" << A << ", " << B << ", " << C << ", " << D << ")" << std::endl;


	if (name == "Прямоугольник") {
		if ((a != c) || (b != d)) throw Error("Противоположные стороны не равны.");
		if ( (A!= 90) || (B != 90) || (C != 90) || (D != 90))throw Error("Все углы не равны 90.");

	}
		 if (name == "Ромб") {
			if ((a != b) || (b != c) || (c != d)) throw Error("Все стороны не равны.");
			if ((A != C) || (B != D)) throw Error("Противоположные углы не равны.");

		}
		 if (name == "Квадрат") {
			if ((A != 90) || (B != 90) || (C != 90) || (D != 90)) throw Error("Все углы не равны 90.");
			if ((a != b) || (b != c) || (c != d)) throw Error("Все стороны не равны.");

		}
		 if (name == "Параллелограмм") {
			if ((a != c) || (b != d)) throw Error("Стороны не равны попарно");
			if ((A != C) || (B != D)) throw Error("Углы не равны попарно");

		}
	
};