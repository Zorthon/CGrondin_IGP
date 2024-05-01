#include <iostream>
#include <fstream>
#include <iomanip>

void printArray(int arr[], int size);
void bubbleSort(int arr[], int n);

int main() {
    
    std::string lName[] = {" "}, FName[] = {" "};
    int numbers[] = { 0 };
    
    int i, j, n;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already 
        // in place 
        for (j = 0; j < n - i - 1; j++) {
            if (lName[j] > lName[j + 1]) {
                std::swap(lName[j], lName[j + 1]);
                std::swap(FName[j], FName[j + 1]);
                std::swap(numbers[j], numbers[j + 1]);
                }
                
        }
            
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already 
        // in place 
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                std::swap(arr[j], arr[j + 1]);
}

// Function to print an array 
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
        
    std::cout << std::endl;
}