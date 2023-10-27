#include<vector>
#include<map>
#include<iostream>
#include"functions.h"
std::vector<int> DaysOfMaCandies(int max, std::map<int, int>NewMap) {

	//������� ����� ������
	std::vector<int> DaysOfMaCandies;

	//��� �� 1 �� ������� ����
	for (int i = 1; i <= NewMap.size(); i++) {

		//���� ��������
		auto it = NewMap.find(i);
		// ���� ����
		if (max == it->second) {
			//��������� � ������
			DaysOfMaCandies.push_back(it->first);
		}

	}

	return DaysOfMaCandies;
}