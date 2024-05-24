/*Cameron Grondin final
* 
* variables used:
* lockers[1000] is the array for lockers. 1 = open 2 = closed
* student[1000] is an array for the numbers of students
* closed to count how many lockers are closed
* open to cout how many lockers are open
*/

#include <iostream>

int main() {
	int lockers[1000], student[1000], closed = 0, open = 0;
	//1 = open 2 = closed
	for (int i = 1; i < 999; i++) {
		student[i] = i;
		lockers[i] = 1;
	}

	for (int i = 1; i < 999; i++) {
		for (int s = 1; s < 999; s++) {
			if (student[i] % s == 0) {
				if (lockers[i] == 1) {
					lockers[i] = 2;
				}
				else if (lockers[i] == 2) {
					lockers[i] = 1;
				}
			}
		}
	}

	for (int i = 1; i < 999; i++) {
		if (lockers[i] == 2) {
			closed++;
		}
		else {
			open++;
		}
	}

	std::cout << "1000 locker problem answer." << std::endl;
	std::cout << "Closed Lockers: " << closed << std::endl;
	std::cout << "Open Lockers: " << open << std::endl;
	
	return 0;
}