#include <iostream>
#include <vector>

void seatMap();
void menu(int& c);

int main() {
	int choice;
	menu(choice);
	std::cout << "  ";
	for (int i = 65; i <= 90; i++) {
		std::cout << (char)i << " ";
	}
	std::cout << std::endl;
	seatMap();
	return 0;
}
void menu(int& c) {
	std::cout << "1 - Clear seating" << std::endl;
	std::cout << "2 - Display seats" << std::endl;
	std::cout << "3 - Choose seats" << std::endl;
	std::cout << "4 - Ticket sales" << std::endl;
	std::cin >> c;
}
void seatMap() {
	const int row = 16;
	const int col = 27;
	char seats[row][col];

	for (int r = 1; r < row; r++) {
		for (int c = 1; c < col; c++) {
			seats[r][c] = '*';
		}
	}

	for (int r = 1; r < row; r++) {
		std::cout << r << " ";
		for (int c = 1; c < col; c++) {
			std::cout << seats[r][c]<< " ";
		}
		std::cout << std::endl;
	}
}
