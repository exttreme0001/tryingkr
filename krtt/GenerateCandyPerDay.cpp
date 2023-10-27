#include<map>
#include"f.h"
#include"FirstDigitAfterDot.h"

std::map<int, int> GenerateCandyPerDay(int start, int end) {

	std::map <int, int> mp;

	for (; start <= end; start++) {
		double functionResult = 0;
		functionResult = f(start);

		int numberOfCandies=0;
		numberOfCandies= FirstDigitAfterDot(functionResult);
		mp.emplace(start, numberOfCandies);

	}

	return mp;
}