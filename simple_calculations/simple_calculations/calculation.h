#pragma once
#include <cmath>;
double calculation(long long x, long long y) {
	double result = (cos(x * x * x) * cos(x * x * x) * cos(x * x * x) + y * y * y) / sqrt(x + y);
	return result;
}
