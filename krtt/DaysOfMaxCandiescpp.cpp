#include<vector>
#include<map>
#include<iostream>
#include"functions.h"
std::vector<int> DaysOfMaCandies(int max, std::map<int, int>NewMap) {

	//создаем новый вектор
	std::vector<int> DaysOfMaCandies;

	//идём от 1 до размера мапы
	for (int i = 1; i <= NewMap.size(); i++) {

		//ищем элементы
		auto it = NewMap.find(i);
		// ищем макс
		if (max == it->second) {
			//вписываем в вектор
			DaysOfMaCandies.push_back(it->first);
		}

	}

	return DaysOfMaCandies;
}