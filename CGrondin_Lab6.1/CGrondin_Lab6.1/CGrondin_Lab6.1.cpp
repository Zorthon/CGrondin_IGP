#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

void bubbleSort(std::string list1[], std::string list2[], std::string list3[], std::string list4[], int max);
void mainMenu(int& c);
void search(std::string list1[], std::string list2[], std::string list3[], std::string list4[], int max, std::string& d);

int main() {

	std::string fName[50], lName[50], date[50], id[50], input;
	int count;

	std::ifstream fin;
	fin.open("C:\\Users\\008021438\\Desktop\\CGrondin_IGP\\CGrondin_Lab6.1\\Lab6File.txt");

	count = 0;
	while (!fin.eof()) {
		fin >> id[count] >> fName[count] >> lName[count] >> date[count];
		count++;
	}
	fin.close();

	int choice;
	mainMenu(choice);

	do {
		switch (choice) {
		case 1:
			system("cls");
			bubbleSort(lName, fName, id, date, count);
			std::cout << "Enter last name: ";
			search(lName, fName, id, date, count, input);
			system("pause");
			break;
		case 2:
			system("cls");
			bubbleSort(id, lName, fName, date, count);
			std::cout << "Enter ID number: ";
			search(id, lName, fName, date, count, input);
			system("pause");
			break;
		case 3:
			system("cls");
			bubbleSort(date, lName, fName, id, count);
			std::cout << "Enter date of hire: ";
			search(date, lName, fName, id, count, input);
			system("pause");
			break;
		default:
			system("cls");
			std::cout << "Invalid Entry" << std::endl;
			system("pause");
			break;
		}
		system("cls");
		mainMenu(choice);
	} while (choice != 4);

	return 0;
}

void mainMenu(int& c) {
	std::cout << "1 - Search by last name" << std::endl;
	std::cout << "2 - Search by ID number" << std::endl;
	std::cout << "3 - Search by date of hire" << std::endl;
	std::cout << "4 - Exit" << std::endl;
	std::cout << "Make selection: ";
	std::cin >> c;
}

void bubbleSort(std::string list1[], std::string list2[], std::string list3[], std::string list4[], int max) {
	for (int i = 0; i < max - 1; i++) {
		for (int j = 0; j < max - i - 1; j++) {
			if (list1[j] > list1[j + 1]) {
				std::swap(list1[j], list1[j + 1]);
				std::swap(list2[j], list2[j + 1]);
				std::swap(list3[j], list3[j + 1]);
				std::swap(list4[j], list4[j + 1]);
			}
		}
	}
}

void search(std::string list1[], std::string list2[], std::string list3[], std::string list4[], int max, std::string &d) {
	std::string input;
	int min, guess;
	bool found = false;

	while (found == false) {
		std::cin >> d;

		min = 0;
		max;
		guess = (min + max) / 2;

		while (d != list1[guess] && min < max) {
			if (d < list1[guess]) {
				max = guess - 1;
			}
			else {
				min = guess + 1;
			}
			guess = (min + max) / 2;
		}
		std::cout << std::endl;
		if (d == list1[guess]) {
			std::cout << list1[guess] << " " << list2[guess] << " " << list3[guess] << " " << list4[guess] << std::endl;
			found = true;
		}
		else {
			std::cout << "User " << d << " was not found." << std::endl;
			system("pause");
			system("cls");
			
			if (d == "1") {
				std::cout << "Enter last name: ";
			}
			else if (d == "2") {
				std::cout << "Enter ID number: ";
			}
			else {
				std::cout << "Enter date of hire: ";
			}
		}

	}
}
