#pragma once
#include "figure.h"
class quadrilateral : public figure {
private:
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;

	int sides = 4;
	std::string name = " ";
protected:
	quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, std::string name);
public:
	quadrilateral();
	void get_print() override;
	


};