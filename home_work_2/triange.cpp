#pragma once
#include "triange.h"
#include "error.h"
triange :: triange (int s,  int a, int b, int c, int A, int B, int C, std::string name) {
	this->a = a;
	this->b = b;
	this->c = c;

	sides = s;

	this->A = A;
	this->B = B;
	this->C = C;

	this->name = name;
}

	triange :: triange () : triange(3, 10, 20, 30, 50, 60, 70, "Треугольник"){
	
	};
	
	
void triange::get_print() {
	std::cout << name << ": " << std::endl;

	std::cout << "Стороны: (" << a << ", " << b << ", " << c << ") " ;
	std::cout << "Углы: (" << A << ", " << B << ", " << C << ")" << std::endl;
	if (name == "Прямоугольный треугольник") {
		if (C != 90) throw Error("Угол С не равен 90");
		
	}
	else if (name == "Равносторонний треугольник") {
		if ((a != c) && (a != b))  throw Error("Стороны не равны");
		if ((A != C) && (A != B))  throw Error("Углы не равны");
	
		
	}
	else if (name == "Равнобедренный треугольник") {
		if (a != c)  throw Error("Стороны а и с не равны");
		if (A != C)  throw Error("Углы  A и C не равны");
		
	}
	else if (name == "Треугольник") {
			if (sides != 3)  throw Error("Колличество сторон не равно 3");
			if ((A + B + C) != 180) throw Error(" Сумма углов не равна 180");
		
		
	}
	

}
