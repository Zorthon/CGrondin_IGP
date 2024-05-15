#include <iostream>

void seatMap();

int main() {
	
	seatMap();
	
	return 0;
}
int menu(int& c) {
	std::cout << "1 - Clear seating" << std::endl;
	std::cout << "2 - Display seats" << std::endl;
	std::cout << "3 - Choose seats" << std::endl;
	std::cout << "4 - Ticket sales" << std::endl;
	std::cin >> c;
}
void seatMap() {
	const int row = 16;
	const int col = 26;
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
