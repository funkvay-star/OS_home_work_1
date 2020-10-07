#pragma once
#include <vector>
class complex_number
{
public:
	int a;
	int b;
	double absolute_value();
};
complex_number multiply_by_const(int x, complex_number number);
complex_number add(const complex_number& x, const complex_number& y);
complex_number subtract(const complex_number& x, const complex_number& y);
void sorting(std::vector<complex_number>& v);
