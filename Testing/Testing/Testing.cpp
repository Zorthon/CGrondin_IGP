#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

void main() {
	std::string line;
	int count = 0;
	char letters[50];
	
	std::ifstream fin;
	fin.open("C:\\Users\\008021438\\Desktop\\CGrondin_IGP\\Testing\\Testing\\string.txt");
	

	while (!fin.eof()) {
		getline(fin, line);
		std::cout << line << std::endl;
	}
	fin.close();

	int test = 0;
	for (int i = 0; i < line.length(); i++) {
		if (line[i] != ' ' && line[i] != '.') {
			letters[test] = line[i];
			test++;
			count++;
		}
	}

	for (int i = 0; i < count; i++) {
		std::cout << letters[i] << std::endl;
	}

	system("pause");

}
