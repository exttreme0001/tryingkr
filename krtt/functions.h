#pragma once
#include<fstream>
#include<map>
#include<vector>
#include"Series.cpp"
#include"MaxNumberOfCandiescpp.cpp"
#include"AverageCandies.cpp"

void FileWrite(const std::string& file_path,std::map<int,int>,char, std::ios_base::openmode);

std::map<int,int > FileEnter(const std::string& file_path);

std::vector <int> DaysOfMaCandies(int,std::map<int, int>);

template <typename T1, typename T2, typename T3>
T1 MaxNumberOfCandies(std::map<T2, T3>);

template <typename T1, typename T2, typename T3>
T1 AverageCandies(std::map<T2, T3>);

template <typename T1, typename T2,typename T3>
T1 SeriesNumber(std::map<T2, T3>NewMap);
