/*Cameron Grondin
* Lab 3a
* 
* variables used:
*		largest largest number
*		smallest smallest number
*		average average calculation
*		count amount of numbers read
*		numbers number read
*		total all numbers read added up
*		fIn file
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main () {
	std::cout << std::fixed << std::setprecision(2);

	float largest, smallest, average, count, numbers, total;
	
	
	count = 0;
	largest = 0;
	smallest = 10000000;
	numbers = 0;
	total = 0;

	std::ifstream fIn;
	fIn.open("C:\\Users\\008021438\\Desktop\\CGrondin_IGP\\CGrondin_Lab3A\\CGrondin_Lab3A\\numbers.txt");

	while (!fIn.eof()) {
		fIn >> numbers;
		total += numbers;
		if (numbers > largest) {
			largest = numbers;
		}
		else if (numbers < smallest) {
			smallest = numbers;
		}
		count++;
	}
	fIn.close();
	average = total / count;
	std::cout << "Largest Number = " << largest << "\n" << "Smallest Number = " << smallest << "\n" << "Average = " << average << "\n" << "Numbers Processed = " << count << std::endl;
	system("pause");
	return 0;
}
