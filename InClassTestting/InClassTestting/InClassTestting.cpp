#include <iostream>


int main() {
	std::string letter[7] = { "a", "b", "c","d","e","f","g" };

	std::string target = "d";

	int i = 0;

	while (target != letter[i] && i < 7) {
		i++;
	}
	if (i >= 7) {
		std::cout << "no" << std::endl;
	}
	else {
		std::cout << "yes" << std::endl;
	}
}
