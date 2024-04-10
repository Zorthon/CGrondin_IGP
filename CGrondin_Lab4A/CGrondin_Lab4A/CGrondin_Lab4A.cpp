/*Cameron Grondin
* Lab 4A
* 
* Variabled used:
*	i used for the for loop
*	wordsCount used to cotain the amount of words in a string
*	words used to contain the user input
* 
*/

#include <iostream>
#include <string>

void main() {
	int i, wordsCount;
	std::string words;

	std::cout << "This program outputs the characters from on the string phrase one line at a time." << std::endl;
	std::cout << "Type a phrase here: ";
	getline(std::cin, words);
	
	wordsCount = 0;
	
	for (i = 0; i < words.length(); i++) {
		if (words[i] == ' ') {
			wordsCount++;
		}
	}
	wordsCount++;
	std::cout << words << std::endl;
	std::cout << "The amount words are: " << wordsCount << std::endl;

	system("exit");
}
