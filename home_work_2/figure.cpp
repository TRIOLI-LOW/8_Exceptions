#include<iostream>
#pragma once
#include "figure.h"
#include "error.h"

figure::figure(int s){
	sides = s;

		
	}

figure::figure() : figure(5) {

		
	};

 bool figure::chek() {
	if (sides == 0) {
		return true;
	}
	else return false;
};
 void figure::get_print() {
	
	std::cout << name << ": " << std::endl;
	std::cout << "Колличество сторон: " << sides << std::endl;
	
	if (sides != 0) throw Error("Не был создан. Причина: колличество сторон не равно 0");
	else std::cerr << "Создан" << std::endl << std::endl;
	
	
}