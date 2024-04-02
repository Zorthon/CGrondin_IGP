#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main () {
	std::cout << std::fixed << std::setprecision(2) << std::endl;

	float largest, smallest, average, count, numbers;
	
	count = 0;
	largest = 0;
	smallest = 0;

	std::ifstream fIn;
	fIn.open("C:\\Users\\008021438\Desktop\\CGrondin_IGP\\CGrondin_Lab3A\\numbers.txt");

	while (!fIn.eof()) {
		fIn >> numbers;
		largest = numbers;
		smallest = numbers;
		if (numbers > largest) {
			largest = numbers;
		}
		else if (numbers < smallest) {
			smallest = numbers;
		}
		count++;
	}
	fIn.close();
	std::cout << "Largest Number = " << largest << "\n" << "Smallest Number = " << smallest << std::endl;
	system("pause");
}
