/*Cameron Grondin
* Lab #1
* 
* variables used:
*	card1 players first card
*	card2 players second card
*	card3 players third card
*	dealer1 dealers first card
*	dealer2 dealers second card
*	dealer3 dealers third card
*	anyKey for pausing the game
*	gamesPlayed for counting games played
* 
*/

#include <iostream>
#include <random>
#include <Windows.h>
#include <conio.h>

void goto_xy(int c, int r);
int random();

int main() {
	char anyKey;
	int col, row;
	col = 30;
	row = 10;
	int card1, card2, card3, dealer1, dealer2, dealer3, gamesPlayed, playerTotal, dealerTotal;
	gamesPlayed = 0;
	
	while (gamesPlayed < 5) {
		system("cls");
		gamesPlayed++;
		card1 = random();
		card2 = random();
		dealer1 = random();
		dealer2 = random();

		goto_xy(col, row - 2); std::cout << "Player" << std::endl;
		goto_xy(col, row - 1); std::cout << "======" << std::endl;
		goto_xy(col + 30, row - 2); std::cout << "Dealer" << std::endl;
		goto_xy(col + 30, row - 1); std::cout << "======" << std::endl;
		goto_xy(col, row); std::cout << "Player First Card: " << card1 << std::endl;
		goto_xy(col+30, row); std::cout << "Dealer First Card: " << dealer1 << std::endl;
		goto_xy(col, row+1); std::cout << "Player Second Card: " << card2 << std::endl;
		goto_xy(col + 30, row + 1); std::cout << "Dealer Second Card: ** " << std::endl;
		playerTotal = card1 + card2;
		goto_xy(col, row + 4); std::cout << "Player total: " << playerTotal << std::endl;
		goto_xy(col, row + 5); std::cout << "1-Hit or 2-Pass: ";
		
		int decision;
		std::cin >> decision;

		if (decision == 1) {
			card3 = random();
			dealerTotal = dealer1 + dealer2;
			goto_xy(col + 30, row + 1); std::cout << "                       " << std::endl;
			goto_xy(col + 30, row+1); std::cout << "Dealer Second Card: " << dealer2 << std::endl;
			goto_xy(col, row + 2); std::cout << "Player Third Card: " << card3  << std::endl;
			playerTotal = card1 + card2 + card3;
			goto_xy(col, row + 4); std::cout << "Player total: " << playerTotal << std::endl;
			goto_xy(col+30, row + 4); std::cout << "Dealer total: " << dealerTotal << std::endl;
		
			goto_xy(col, row + 5); std::cout << "Press any key to continue...";
			anyKey = _getch();

			if (playerTotal > 21) {
				system("cls");
				goto_xy(col, row); std::cout << "Dealer Wins ";
				goto_xy(col, row + 5); std::cout << "Press any key to continue...";
				anyKey = _getch();

			}
			else if (playerTotal == 21) {
				system("cls");
				goto_xy(col, row); std::cout << "Player Wins ";
				goto_xy(col, row + 5); std::cout << "Press any key to continue...";
				anyKey = _getch();
			}
			else if (dealerTotal <= 16) {
				dealer3 = random();
				goto_xy(col + 30, row + 2); std::cout << "Dealer Third Card: " << card3 << std::endl;
				playerTotal = card1 + card2 + card3;
				goto_xy(col, row + 4); std::cout << "Player total: " << playerTotal << std::endl;
				dealerTotal = dealer1 + dealer2 + dealer3;
				goto_xy(col + 30, row + 4); std::cout << "Dealer total: " << dealerTotal << std::endl;
			
				goto_xy(col, row + 5); std::cout << "Press any key to continue...";
				anyKey = _getch();
			}
			if (dealerTotal > 21) {
				system("cls");
				goto_xy(col, row); std::cout << "Player Wins ";
				goto_xy(col, row + 5); std::cout << "Press any key to continue...";
				anyKey = _getch();
			}
			else if (playerTotal > dealerTotal) {
				system("cls");
				goto_xy(col, row); std::cout << "Player Wins ";
				goto_xy(col, row + 5); std::cout << "Press any key to continue...";
				anyKey = _getch();
			}
			else {
				system("cls");
				goto_xy(col, row); std::cout << "Dealer Wins ";
				goto_xy(col, row + 5); std::cout << "Press any key to continue...";
				anyKey = _getch();
			}
		
		}
		else {
			goto_xy(col + 30, row + 1); std::cout << "Dealer Second Card: " << dealer2 << std::endl;
			playerTotal = card1 + card2;
			dealerTotal = dealer1 + dealer2;
			goto_xy(col, row + 4); std::cout << "Player total: " << playerTotal << std::endl;
			goto_xy(col + 30, row + 4); std::cout << "Dealer total: " << dealerTotal << std::endl;
			if (dealerTotal <= 16) {
				dealer3 = random();
				goto_xy(col + 30, row + 2); std::cout << "Dealer Third Card: " << dealer3 << std::endl;
				playerTotal = card1 + card2;
				dealerTotal = dealer1 + dealer2 + dealer3;
				goto_xy(col, row + 4); std::cout << "Player total: " << playerTotal << std::endl;
				goto_xy(col + 30, row + 4); std::cout << "Dealer total: " << dealerTotal << std::endl;
				goto_xy(col, row + 5); std::cout << "Press any key to continue...";
				anyKey = _getch();

			}
			else if (dealerTotal > 21) {
				system("cls");
				goto_xy(col, row); std::cout << "Player Wins ";
				goto_xy(col, row + 5); std::cout << "Press any key to continue...";
				anyKey = _getch();
			}
			else if (playerTotal > dealerTotal) {
				system("cls");
				goto_xy(col, row); std::cout << "Player Wins ";
				goto_xy(col, row + 5); std::cout << "Press any key to continue...";
				anyKey = _getch();
			}
			else {
				system("cls");
				goto_xy(col, row); std::cout << "Dealer Wins ";
				goto_xy(col, row + 5); std::cout << "Press any key to continue...";
				anyKey = _getch();
			}
		}

	}
	
	return 0;
}

void goto_xy(int c, int r) {
	COORD coord;
	coord.X = c;
	coord.Y = r;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

	return;
}

int random() {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dist(1, 10);
	int result = dist(gen);

	return result;
}
