#include<map>


template <typename T1, typename T2, typename T3>
T1 AverageCandies(std::map<T2, T3>NewMap) {

	double sum = 0;
	for (int i = 1; i < NewMap.size(); i++) {
		
		auto it = NewMap.find(i);
		it->second;
		sum += it->second;
		
	}

	return sum / 366;
}