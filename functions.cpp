#include <iostream>
#include <cmath>
#include "functions.h"
double complex_number::absolute_value()
{
	double x = a * a + b * b;
	x = sqrt(x);
	return x;
}
complex_number multiply_by_const(int x, complex_number number)
{
	number.a *= x;
	number.b *= x;
	return number;
}
complex_number add(const complex_number& x, const complex_number& y)
{
	complex_number answer;
	answer.a = x.a + y.a;
	answer.b = x.b + y.b;
	return answer;
}
complex_number subtract(const complex_number& x, const complex_number& y)
{
	complex_number answer;
	answer.a = x.a - y.a;
	answer.b = x.b - y.b;
	return answer;
}
void sorting(std::vector<complex_number>& v)
{
	for (int i = 0; i < v.size() - 1; ++i)
	{
		for (int j = 0; j < v.size() - i - 1; j++)
		{
			if (v[j].absolute_value() > v[j + 1].absolute_value())
			{
				std::swap(v[j], v[j + 1]);
			}
		}
	}
}
