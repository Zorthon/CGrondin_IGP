#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

int main() {
    
    std::string lName[50], fName[50], input;
    int numbers[50] = { 0 }, max, min, guess, count;

    std::ifstream fin;
    fin.open("C:\\Users\\grond\\Desktop\\CGrondin_IGP\\CGrondin_Lab6\\Users-1.txt");

    count = 0;
    while (!fin.eof()) {
        fin >> fName[count] >> lName[count] >> numbers[count];
        count++;
    }

    fin.close();

    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (lName[j] > lName[j + 1]) {
                std::swap(fName[j], fName[j + 1]);
                std::swap(lName[j], lName[j + 1]);
                std::swap(numbers[j], numbers[j + 1]);
            }
        }
    }

    bool found = false;

    while (found == false) {
        std::cout << "Enter user's last name to search: ";
        std::cin >> input;

        min = 0;
        max = count;
        guess = (min + max) / 2;

        while (input != lName[guess] && min < max) {
            if (input < lName[guess]) {
                max = guess - 1;
            }
            else {
                min = guess + 1;
            }
            guess = (min + max) / 2;
        }
        std::cout << std::endl;
        if (input == lName[guess]) {
            std::cout << lName[guess] << " " << fName[guess] << " " << numbers[guess] << std::endl;
            found = true;
        }
        else {
            std::cout << "User " << input << " was not found." << std::endl;
            system("pause");
            system("cls");
        }

    }

    return 0;
}