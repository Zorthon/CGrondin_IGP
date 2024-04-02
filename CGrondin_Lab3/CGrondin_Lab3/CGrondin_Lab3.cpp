#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

void main() {

	std::cout << std::fixed << std::setprecision << std::endl;

	std::string dob, fName, lName;
	float average, salary, sum;
	int count;

	sum = 0;
	count = 0;

	std::ifstream fIn;
	fIn.open("C:\\Users\\008021438\\Desktop\\CGrondin_IGP\\CGrondin_Lab3\\example.txt");

	while (!fIn.eof()) {
		fIn >> fName >> lName >> dob >> salary;
		std::cout << fName << lName << dob << salary;
		sum += salary;
		count++;
	}
	fIn.close();
	average = sum / count;
	
	std::cout << "The average is " << average << std::endl;

	system("pause");
	system("exit");
}
