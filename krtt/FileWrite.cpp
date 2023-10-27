#include<fstream>
#include<ios>
#include<map>
void FileWrite(const std::string& file_path, std::map<int, int> mp, char delimiter,std::ios_base::openmode io) {
	
	std::ofstream file;
	
	//очистка файла после прошлых тестов
	file.open( file_path,std::ios::out | std::ios::trunc);//cleaning
	file.close();

	// открытие файла
	file.open(file_path,io);

	// цикл для заполнения файла поиском из map
	for (int i = 1; i < 367; i++) {
		
		// поиск в Map, если нет то ошибка 
		auto it = mp.find(i);
		file << it->first <<delimiter << it->second<<std::endl;
	}
	file.close();
}