#include<fstream>
#include<iostream>
#include<ios>
#include <sstream>
#include<map>

std::map<int, int> FileEnter(const std::string& file_path) {
	
	// открытие в режиме чтения
		// создание map
		// создание строки
	std::ifstream file;
	std::map<int, int> Mp;
	std::string line;

	file.open(file_path,std::ios::in);

	// пока читаются строки
	while (std::getline(file, line)) {
		
		// создаем обработчика строк
		std::istringstream iss(line);

		// значения в обработчике
		int firstNumber;
		char delimiter;
		int secondNumber;

		// подбор значений
		iss >> firstNumber;
		iss >> delimiter;
		iss >> secondNumber;

		// ввод пары 
		Mp.emplace(firstNumber, secondNumber);
	}

	return Mp;

}