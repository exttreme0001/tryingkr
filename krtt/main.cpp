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
	// (������:����� ������� ������ � ���������� map ����������)
	//��������� �������� �� ������ ����

	std::string nameOfFile;
	std::cout << "Enter the name of file"<<std::endl;
	std::cin >> nameOfFile;
	// ��������� ��� ��� �����

	char delimiter;
	// �����������
	std::cout << "Enter delimiter";
	std::cin.ignore();
	delimiter=std::cin.get();
	// ��������� ���������� �������
	// (warn! ����� ������� enter �� ����������� �����)

	FileWrite(nameOfFile,Mp,delimiter,std::ios_base::app);
	// ������ � ����
	// ���������� ��� ����� ��� �������� map � �����������
	//  � ����������� �  ���� 

	std::map<int, int>	NewMap;
	//�������� ������ map
	NewMap=FileEnter(nameOfFile);
	// ������ �� ����� � ��������� � map :

	for (int i = 1; i < 367; i++) {
	
		std::cout<<NewMap[i]<<" ";
	}

	std::cout << std::endl;

	std::vector<int> DaysOfMaxCandies;
	
	//����� ��������� �� ���� � ����������� � ������
	DaysOfMaxCandies = DaysOfMaCandies(MaxNumberOfCandies<int, int, int>(NewMap),NewMap);

	for (int i = 0; i < DaysOfMaxCandies.size(); i++) {
	
		std::cout << DaysOfMaxCandies[i]<<" ";
	
	}

	//������� ���������� ����� ���� ������� �� �����
	double AverageCandy = 0;
	AverageCandy = AverageCandies<double,int,int>(NewMap);
	std::cout << AverageCandy << std::endl;

	// ����� ����� ����� ������ ������� �� � � �-1
	int SeriesNumb=0;
	SeriesNumb =  SeriesNumber< int , int, int >(NewMap);
	std::cout << SeriesNumb;

}