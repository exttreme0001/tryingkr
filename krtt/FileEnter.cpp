#include<fstream>
#include<iostream>
#include<ios>
#include <sstream>
#include<map>

std::map<int, int> FileEnter(const std::string& file_path) {
	
	// �������� � ������ ������
		// �������� map
		// �������� ������
	std::ifstream file;
	std::map<int, int> Mp;
	std::string line;

	file.open(file_path,std::ios::in);

	// ���� �������� ������
	while (std::getline(file, line)) {
		
		// ������� ����������� �����
		std::istringstream iss(line);

		// �������� � �����������
		int firstNumber;
		char delimiter;
		int secondNumber;

		// ������ ��������
		iss >> firstNumber;
		iss >> delimiter;
		iss >> secondNumber;

		// ���� ���� 
		Mp.emplace(firstNumber, secondNumber);
	}

	return Mp;

}