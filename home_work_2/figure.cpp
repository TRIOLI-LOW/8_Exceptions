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
	std::cout << "����������� ������: " << sides << std::endl;
	
	if (sides != 0) throw Error("�� ��� ������. �������: ����������� ������ �� ����� 0");
	else std::cerr << "������" << std::endl << std::endl;
	
	
}