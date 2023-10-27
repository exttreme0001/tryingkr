#include<map>
#include<iostream>

template <typename T1, typename T2, typename T3>
T1 MaxNumberOfCandies(std::map<T2, T3>NewMap) {

	int Max = 0;
	for (int i = 1; i <= NewMap.size(); i++) {
	
		auto it = NewMap.find(i);
		if (Max < it->second) {
			Max = it->second;
		}
	}
	return Max;
}