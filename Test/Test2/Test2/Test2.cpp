/* Cameron Grondin
*  Lab #2
*
*  variables used:
*		gamesPlayed tracks games played
*		die1 first roll
*		die2 second roll
*		total combined value of die1 and die2
*		wins amount f wins
*		losses amount of losses
*		point the point roll
*		result is the random number between 1 and 6
*		prob holds the probability of winning
*/




#include <iostream>
#include <random>

int roll();

int main() {
	float gamesPlayed, die1, die2, total, wins, losses, point;
	float prob;

	gamesPlayed = 0;
	point = 0;
	wins = 0;
	losses = 0;

	while (gamesPlayed < 10000) {
		gamesPlayed++;
		die1 = roll();
		die2 = roll();
		total = die1 + die2;

		if (total == 7 || total == 11) {
			wins++;
		}
		else if (total == 2 || total == 3 || total == 12) {
			losses++;
		}
		else {
			point = total;
			die1 = roll();
			die2 = roll();
			total = die1 + die2;
			while (total != point && total != 7) {
				die1 = roll();
				die2 = roll();
				total = die1 + die2;
			}
			if (total == point) {
				wins++;
			}
			else if (total == 7) {
				losses++;
			}
		}
	}
	prob = wins / gamesPlayed;
	std::cout << "Wins: " << wins << std::endl;
	std::cout << "Losses: " << losses << std::endl;
	std::cout << "Probability to win: " << prob * 100 << "%" << std::endl;

	system("exit");
}




int roll() {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dist(1, 6);
	int result = dist(gen);

	return result;
}
