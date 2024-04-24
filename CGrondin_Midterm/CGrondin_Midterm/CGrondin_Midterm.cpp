#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

int main() {

	int num = 0, test1 = 0, test2 = 0;
	int testScores[6] = { 0 };
	std::string name, names[6] = { "" };

	std::ifstream fin;
	fin.open("C:\\Users\\008021438\\Desktop\\CGrondin_IGP\\CGrondin_Midterm\\Midterm1.txt");

	while (!fin.eof()) {
		fin >> name >> test1 >> test2;
		names[num] = name;
		std::cout << name << " " << test1 << " " << test2 << std::endl;
	}
	fin.close();

}
