#include <iostream>
#include <stdio.h>

void menu(int& c);
void seatmap(char seats[][27]);
void displaySeats(char seats[][27]);
void chooseSeats(char seats[][27]);

int main() {
	const int row = 16, col = 27;
	char seats[16][27];
	seatmap(seats);
	int choice, ticketSales = 0;
	do {
		
		menu(choice);
		switch (choice) {
		case 1:
			system("cls");
			std::cout << "Seeting Cleared" << std::endl;
			seatmap(seats);
			break;
		case 2:
			system("cls");
			displaySeats(seats);
			break;
		case 3:
			system("cls");
			displaySeats(seats);
			chooseSeats(seats);
			ticketSales++;
			break;
		case 4:
			std::cout << "Ticket Sales:" << ticketSales << std::endl;
			break;
		default:
			std::cout << "Invalid input" << std::endl;
			break;
		}
		system("pause");
		system("cls");
	} while (choice != 5);
	return 0;
}

void menu(int& c) {
	std::cout << "1 - Clear seating" << std::endl;
	std::cout << "2 - Display seats" << std::endl;
	std::cout << "3 - Choose seats" << std::endl;
	std::cout << "4 - Ticket sales" << std::endl;
	std::cout << "5 - Exit" << std::endl;
	std::cin >> c;
}

void seatmap(char seats[][27]) {
	int row = 16;
	int col = 27;
	for (int r = 1; r < row; r++) {
		for (int c = 1; c < col; c++) {
			seats[r][c] = '*';
		}
	}
}

void displaySeats(char seats[][27]) {
	int row = 16;
	int col = 27;
	std::cout << "  ";
	for (int i = 65; i <= 90; i++) {
		std::cout << (char)i << " ";
	}
	std::cout << std::endl;
	for (int r = 1; r < row; r++) {
		for (int c = 1; c < col; c++) {
			seats[r][c] = '*';
		}
	}

	for (int r = 1; r < row; r++) {
		printf("%*d", 2 , r);
		for (int c = 1; c < col; c++) {
			std::cout << seats[r][c] << " ";
		}
		std::cout << std::endl;
	}
}

void chooseSeats(char seats[][27]) {
	int userRow;
	char userCol;

	std::cout << "Row: ";
	std::cin >> userRow;
	std::cout << "Colum: ";
	std::cin >> userCol;
	int colum = (int)userCol - 64;
	seats[userRow][colum] = '#';
}
