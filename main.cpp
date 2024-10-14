// function takes an array of integers to sort an array of integers
// code by Ryuya

#include <iostream>

// insertion sort implementation
void sort(int (&array)[], int array_size) {
    for (int i = 1; i < array_size; ++i) {
        // compare each element with the ones before it
        int current = array[i];
        for (int j = i - 1; j >= 0; --j) {
            // if element before it is greater than current number
            if (array[j] > current) {
                // swap
                array[j + 1] = array[j];
                array[j] = current;
            } // otherwise it will do nothing
        }
    }
}

int main() {
    int array[] = {
        49, 385, 12, 45, 23, 636, 435, 2345, 34, 3, -6, -54, 2
    };
    
    std::cout << "unsorted array: { ";
    for (int i : array) {
        std::cout << i << ", ";
    }
    std::cout << "}" << std::endl;
    
    sort(array, std::size(array));
    
    std::cout << "sorted array: {";
    for (int i : array) {
        std::cout << i << ", ";
    }
    std::cout << "}" << std::endl;

    return 0;
}
