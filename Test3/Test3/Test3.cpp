#include <iostream>
#include <time.h>
#include <stdlib.h>


int roll();

int main() {
	int wins = 0;
	int loss = 0;
	int point = 0;
	int gamesPlayed = 0;
	while(gamesPlayed<10000) {
		gamesPlayed++;
		int roll1 = roll();
		int roll2 = roll();
		int sum = roll1 + roll2;
		if (sum == 7 || sum == 11) {
			wins++;
		}
		else if (sum == 2 || sum == 3 || sum == 12) {
			loss++;
		}
		else if (sum == 4 || sum == 5 || sum == 6 || sum == 8 || sum == 9 || sum == 10) {
			point = sum;
			int roll1 = roll();
			int roll2 = roll();
			int sum = roll1 + roll2;
			while (sum != point || sum != 7) {
				int roll1 = roll();
				int roll2 = roll();
				int sum = roll1 + roll2;
			}
			if (sum == point) {
				wins++;
			}
			else if (sum == 7) {
				loss++;
			}
		}
	}
	int average = wins / 10000;
	std::cout << wins << std::endl;
	std::cout << loss << std::endl;
	std::cout << average << std::endl;

}


int roll() {
	srand(time(NULL));
	int roll = rand()% 5+1;

	return roll;
}

