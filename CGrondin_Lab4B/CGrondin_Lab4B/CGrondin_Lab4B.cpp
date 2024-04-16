/*Cameron Grondin
* Lab 4B
* 
* Variables used:
*	d1 used to get the first digit, thousands
*	d2 used to get the second digit, hundreds
*	d3 used to get the third digit, tens
*	d4 used to get the fourth digit, ones
*	number used to hold the number input from file
*	newNumber used to hold the new 5 digit number
*	sum used to hold the sum of d1+d2+d3+d4
*	fin variable for file
*/
#include <iostream>
#include <fstream>


void main() {

	int d1, d2, d3, d4, number, newNumber, sum;

	std::ifstream fin;
	fin.open("C:\\Users\\008021438\\Desktop\\CGrondin_IGP\\CGrondin_Lab4B\\CGrondin_Lab4B\\Lab1B.txt");

	sum = 0;

	while (!fin.eof()) {
		fin >> number;
		newNumber = number;
		std::cout << "Original Number: " << number<< std::endl; 
		
		d1 = number / 1000;
		number = number % 1000;
		d2 = number / 100;
		number = number % 100;
		d3 = number / 10;
		number = number % 10;
		d4 = number;

		sum = d1 + d2 + d3 + d4;

		if (sum % 2 == 0) {
			newNumber *= 10;
		}
		else {
			newNumber *= 10;
			newNumber += 1;
		}
		std::cout << "Check digit number: " << sum % 2 << std::endl;
		std::cout << "New Number: " << newNumber << std::endl;
		std::cout << std::endl;
	}
	system("exit");
}
