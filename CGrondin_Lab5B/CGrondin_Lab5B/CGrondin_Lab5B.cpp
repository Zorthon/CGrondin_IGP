#include <iostream>
#include <fstream>
#include <iomanip>

int main() {

	int num = 0, grade[6] = { 0 };

	std::ifstream fin;
	fin.open("C:\\Users\\008021438\\Desktop\\CGrondin_IGP\\CGrondinLab5A\\CGrondinLab5A\\Lab 5B.txt");

	while (!fin.eof()) {
		
		fin >> num;
		grade[num]++;
	}
	
	for (int i = 0; i < 6; i++) {
		std::cout << grade[i] << " grade(s) of " << i << std::endl;
	}
	
	return 0;
}