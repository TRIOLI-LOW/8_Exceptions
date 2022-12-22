#pragma once
#include "quadrilateral.h"
class parallelogram : public quadrilateral {
private:
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;

	std::string name = " ";
protected:
	parallelogram(int a, int b, int c, int d, int A, int B, int C, int D, std::string name);

public:
	parallelogram();
	void get_print() override;
};