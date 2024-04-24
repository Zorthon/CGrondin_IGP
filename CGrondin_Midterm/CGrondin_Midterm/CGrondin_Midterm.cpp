#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

int main() {

	int num = 0, highestScore = 0, lowestScore = 1000, amount = 0;
	int test1[4] = { 0 }, test2[4] = { 0 };
	std::string highName, lowName, names[4] = { "" };

	std::ifstream fin;
	fin.open("C:\\Users\\008021438\\Desktop\\CGrondin_IGP\\CGrondin_Midterm\\Midterm1.txt");

	while (!fin.eof()) {
		fin >> names[num] >> test1[num] >> test2[num];
		num++;
		amount++;
	}
	fin.close();

	for (int i = 0; i < amount; i++) {
		if (test1[i] > highestScore) {
			highestScore = test1[i];
			highName = names[i];
		}
		else if (test1[i] < lowestScore) {
			lowestScore = test1[i];
			lowName = names[i];
		}
	}

	std::cout << "Test 1:" << std::endl;
	std::cout << "    " << "Highest Score: " << highName << " with a " << highestScore << std::endl;
	std::cout << "    " << "Lowest Score: " << lowName << " with a " << lowestScore << std::endl;
	std::cout << std::endl;
	highestScore = 0;
	lowestScore = 1000;

	for (int i = 0; i < amount; i++) {
		if (test2[i] > highestScore) {
			highestScore = test2[i];
			highName = names[i];
		}
		else if (test2[i] < lowestScore) {
			lowestScore = test2[i];
			lowName = names[i];
		}
	}
	
	std::cout << "Test 2:" << std::endl;
	std::cout << "    " << "Highest Score: " << highName << " with a " << highestScore << std::endl;
	std::cout << "    " << "Lowest Score: " << lowName << " with a " << lowestScore << std::endl;

	return 0;
}
