#include"f.h"
#include <cmath>

int FirstDigitAfterDot(double value) {

	double numberOfCandies = 0;
	 numberOfCandies = value * 10;

	return (int)std::abs(numberOfCandies);
}