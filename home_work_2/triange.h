#pragma once
#include "figure.h"

class triange : public figure {
protected:
	int a = 0;
	int b = 0;
	int c = 0;

	int A = 0;
	int B = 0;
	int C = 0;
	int g = 0;

	int sides = 0;

	std::string name = " ";
	triange(int s, int a, int b, int c, int A, int B, int C, std::string name);
public:
	triange();
	
	void  get_print() override;

};
