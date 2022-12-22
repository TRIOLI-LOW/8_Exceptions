#include<iostream>
#include<Windows.h>
#pragma once

#include "error.h"
#include <exception> 

#include "figure.h"
#include "triange.h"
#include "rt_triange.h"
#include "rvst_triange.h"
#include "rbd_triange.h"

#include "quadrilateral.h"
#include "parallelogram.h"
#include "romb.h"
#include "quadr.h"
#include "prm_quadre.h"
#include "print_info.h"







int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	figure* f = new figure;

	try {
		print_info(f);

	}
	catch (Error& err) {

		std::cerr << err.what() << std::endl << std::endl;
		delete f;
	}
	figure* t = new triange;
	try {
		print_info(t);
		std::cout << "Создан" << std::endl << std::endl;
	}
	catch (Error& err) {
		std::cerr << "Не был создан.";
		std::cerr << err.what() << std::endl << std::endl;
		delete t;
	}
	figure* r_t = new rt_triange;

	try {
		print_info(r_t);
		std::cout << "Создан" << std::endl << std::endl;
	}
	catch (Error& err) {
		std::cerr << "Не был создан.";
		std::cerr << err.what() << std::endl << std::endl;
		delete r_t;
	}
	figure* rvb_t = new rbd_triange;
	
	try {
		print_info(rvb_t);
		std::cout << "Создан" << std::endl << std::endl;
	}
	catch (Error& err) {
		std::cerr << "Не был создан.";
		std::cerr << err.what() << std::endl << std::endl;
		delete rvb_t;
	}
	figure* rvst_ = new rvst_triange;

	try {
		print_info(rvst_);
		std::cout << "Создан" << std::endl << std::endl;
	}
	catch (Error& err) {
		std::cerr << "Не был создан.";
		std::cerr << err.what() << std::endl << std::endl;
		delete rvst_;
	}

	
	figure* q = new quadrilateral;

	try {
		print_info(q);
		std::cout << "Создан" << std::endl << std::endl;
	}
	catch (Error& err) {
		std::cerr << "Не был создан.";
		std::cerr << err.what() << std::endl << std::endl;
		delete q;
	}
	figure* q_pr = new prm_quadre;

	try {
		print_info(q_pr);
		std::cout << "Создан" << std::endl << std::endl;
	}
	catch (Error& err) {
		std::cerr << "Не был создан.";
		std::cerr << err.what() << std::endl << std::endl;
		delete q_pr;
	}
	figure* q_kv = new quadr;
	
	try {
		print_info(q_kv);
		std::cout << "Создан" << std::endl << std::endl;
	}
	catch (Error& err) {
		std::cerr << "Не был создан.";
		std::cerr << err.what() << std::endl << std::endl;
		delete q_kv;
	}
	figure* q_r = new romb;

	try {
		print_info(q_r);
		std::cout << "Создан" << std::endl << std::endl;
	}
	catch (Error& err) {
		std::cerr << "Не был создан.";
		std::cerr << err.what() << std::endl << std::endl;
		delete q_r;
	}
	figure* q_pa = new parallelogram;
	
	try {
		print_info(q_pa);
		std::cout << "Создан" << std::endl << std::endl;
	}
	catch (Error& err) {
		std::cerr << "Не был создан.";
		std::cerr << err.what() << std::endl << std::endl;
		delete q_pa;
	}


	delete f;
	delete t;
	delete r_t;
	delete rvb_t;
	delete rvst_;
	delete q;
	delete q_pr;
	delete q_kv;
	delete q_r;
	delete q_pa;
	return 0;
}
