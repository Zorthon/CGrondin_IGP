#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <Windows.h>

void goto_xy(int c, int r);

int main() {

	int min, max, count, over, amountOver, col, row;
	std::string room;

	col = 0;
	row = 0;
	min = 0;
	max = 0;
	count = 0;
	over = 0;
	amountOver = 0;

	std::ifstream fIn;
	fIn.open("C:\\Users\\008021438\\Desktop\\CGrondin_IGP\\CGrondin_Lab3B\\CGrondin_Lab3B\\Lab3b.txt");

	goto_xy(col, row); std::cout << "Room" << std::endl;
	goto_xy(col+15, row); std::cout << "Max" << std::endl;
	goto_xy(col+25, row); std::cout << "Min" << std::endl;
	goto_xy(col+35, row); std::cout << "Over" << std::endl;
	
	while (!fIn.eof()) {
		fIn >> room >> max >> min;

		if (min > max) {
			amountOver++;
			over = min - max;
			row++;
			goto_xy(col, row); std::cout << room << std::endl;
			goto_xy(col + 15, row); std::cout << max << std::endl;
			goto_xy(col + 25, row); std::cout << min << std::endl;
			goto_xy(col + 35, row); std::cout << over << std::endl;
			over = 0;
		}
		else {
			row++;
			goto_xy(col, row); std::cout << room << std::endl;
			goto_xy(col + 15, row); std::cout << max << std::endl;
			goto_xy(col + 25, row); std::cout << min << std::endl;
			goto_xy(col + 35, row); std::cout << over << std::endl;
			
		}
		count++;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Processed " << count << " records." << std::endl;
	std::cout << "There are " << amountOver << " rooms over the limit." << std::endl;
	return 0;

}

void goto_xy(int c, int r) {
	COORD coord;
	coord.X = c;
	coord.Y = r;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

	return;
}
