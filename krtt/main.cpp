#include<map>
#include<iostream>
#include"f.h"
#include"FirstDigitAfterDot.h"
#include"GenerateCandyPerDay.h"
#include<fstream>
#include"functions.h"
#include<vector>


int main() {
	std::map<int, int>	Mp;
	Mp = GenerateCandyPerDay(1,366);
	// (входит:вызов функции синуса и заполнение map значениями)
	//генерация таблеток на каждый день

	std::string nameOfFile;
	std::cout << "Enter the name of file"<<std::endl;
	std::cin >> nameOfFile;
	// создается имя для файла

	char delimiter;
	// разделитель
	std::cout << "Enter delimiter";
	std::cin.ignore();
	delimiter=std::cin.get();
	// получение следующего символа
	// (warn! может забрать enter из предыдущего ввода)

	FileWrite(nameOfFile,Mp,delimiter,std::ios_base::app);
	// запись в файл
	// передается имя файла тип открытия map и разделитель
	//  и заполняется в  файл 

	std::map<int, int>	NewMap;
	//создание нового map
	NewMap=FileEnter(nameOfFile);
	// читаем из файла и вписываем в map :

	for (int i = 1; i < 367; i++) {
	
		std::cout<<NewMap[i]<<" ";
	}

	std::cout << std::endl;

	std::vector<int> DaysOfMaxCandies;
	
	//поиск элементов по мапе и выписывание в вектор
	DaysOfMaxCandies = DaysOfMaCandies(MaxNumberOfCandies<int, int, int>(NewMap),NewMap);

	for (int i = 0; i < DaysOfMaxCandies.size(); i++) {
	
		std::cout << DaysOfMaxCandies[i]<<" ";
	
	}

	//среднее количество сумма всех деленая на число
	double AverageCandy = 0;
	AverageCandy = AverageCandies<double,int,int>(NewMap);
	std::cout << AverageCandy << std::endl;

	// поиск серий через взятие секонда из и и и-1
	int SeriesNumb=0;
	SeriesNumb =  SeriesNumber< int , int, int >(NewMap);
	std::cout << SeriesNumb;

}