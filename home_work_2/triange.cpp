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

	triange :: triange () : triange(3, 10, 20, 30, 50, 60, 70, "�����������"){
	
	};
	
	
void triange::get_print() {
	std::cout << name << ": " << std::endl;

	std::cout << "�������: (" << a << ", " << b << ", " << c << ") " ;
	std::cout << "����: (" << A << ", " << B << ", " << C << ")" << std::endl;
	if (name == "������������� �����������") {
		if (C != 90) throw Error("���� � �� ����� 90");
		
	}
	else if (name == "�������������� �����������") {
		if ((a != c) && (a != b))  throw Error("������� �� �����");
		if ((A != C) && (A != B))  throw Error("���� �� �����");
	
		
	}
	else if (name == "�������������� �����������") {
		if (a != c)  throw Error("������� � � � �� �����");
		if (A != C)  throw Error("����  A � C �� �����");
		
	}
	else if (name == "�����������") {
			if (sides != 3)  throw Error("����������� ������ �� ����� 3");
			if ((A + B + C) != 180) throw Error(" ����� ����� �� ����� 180");
		
		
	}
	

}
