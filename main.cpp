#include <iostream>
#include <cmath>
#include <vector>
#include "functions.h"
int main()
{
	int n;
	std::cin >> n;
	std::vector<complex_number> v(n);
	for (int i = 0; i < v.size(); ++i)
	{
		std::cin >> v[i].a >> v[i].b;
	}
	//add function
	v[0] = add(v[0], v[1]);
	std::cout << "add = " << v[0].a << "+" << v[0].b << "i\n\n";

	//subtract function
	v[0] = subtract(v[0], v[1]);
	std::cout << "subtract = " << v[0].a << "+" << v[0].b << "i\n\n";

	//multiply_by_const function
	v[0] = multiply_by_const(1, v[0]);
	std::cout << "multiply_by_const function = " << v[0].a << "+" << v[0].b << "i\n\n";

	//absolute_value function
	double x = v[0].absolute_value();
	std::cout << "absolute_value function = " << x << "\n\n";

	//sorting function
	sorting(v);
	std::cout << "sorted vector:\n";
	for (int i = 0; i < v.size(); ++i)
	{
		std::cout << v[i].a << "+" << v[i].b << "i\n";
	}
}
