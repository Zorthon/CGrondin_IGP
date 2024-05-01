

// C++ implementation of Shell Sort
#include  <iostream>

/* function to sort arr using shellSort */
int shellSort(int arr[], int n)
{
    // Start with a big gap, then reduce the gap
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        // Do a gapped insertion sort for this gap size.
        // The first gap elements a[0..gap-1] are already in gapped order
        // keep adding one more element until the entire array is
        // gap sorted 
        for (int i = gap; i < n; i += 1)
        {
            // add a[i] to the elements that have been gap sorted
            // save a[i] in temp and make a hole at position i
            int temp = arr[i];

            // shift earlier gap-sorted elements up until the correct 
            // location for a[i] is found
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];

            //  put temp (the original a[i]) in its correct location
            arr[j] = temp;
        }
    }
    return 0;
}

void shellSort(std::string arr[], int n)
{
    // Start with a big gap, then reduce the gap
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        // Do a gapped insertion sort for this gap size.
        // The first gap elements a[0..gap-1] are already in gapped order
        // keep adding one more element until the entire array is
        // gap sorted 
        for (int i = gap; i < n; i += 1)
        {
            // add a[i] to the elements that have been gap sorted
            // save a[i] in temp and make a hole at position i
            //int temp = arr[i];
            std::string temp = arr[i];

            // shift earlier gap-sorted elements up until the correct 
            // location for a[i] is found
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];

            //  put temp (the original a[i]) in its correct location
            arr[j] = temp;
        }
    }
    //return 0;
    system("exit");
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
}
void printArray2(std::string arr[], int n)
{
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
}

int main()
{
    //int arr[] = { 1, 26, 577, 89, 1 }, i;
    std::string arr2[] = { "Mary", "Jerry", "Harry", "Berry" };
    //int n = sizeof(arr) / sizeof(arr[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    std::cout << "Array before sorting: \n";
    printArray2(arr2, n);

    shellSort(arr2, n);

    std::cout << "\nArray after sorting: \n";
    printArray2(arr2, n);

    return 0;
}
