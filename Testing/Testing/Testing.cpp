#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

void main() {
	std::ifstream fin;
	fin.open("C:\\Users\\008021438\\Desktop\\CGrondin_IGP\\Testing\\Testing\\string.txt");
	std::string line;

	while (!fin.eof()) {
		getline(fin, line);
		std::cout << line << std::endl;
	}
	fin.close();
}
