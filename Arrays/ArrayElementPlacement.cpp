#include <iostream>
#include <utility>

//Using swap

void printArray(int array[], int size);

int main(){
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int size = sizeof(numbers)/sizeof(numbers[0]);

    std::cout << "Placing the first element of the array(present at index 0): [ "; 
    for(int i = 0; i < size; i++){
        if(i < size - 1){
        std::cout << numbers[i] << ", ";
        }
        else{
            std::cout << numbers[i] << " ";
        }
    } 
    std::cout << "] at each index one by one.\n\n";

    std::cout << "Placing the first element at index 9: \n";
    std::swap(numbers[0], numbers[size - 1]);

    printArray(numbers, size);

    std::cout << "Placing the first element at index 8: \n";
    std::swap(numbers[size - 1], numbers[size - 2]);
    printArray(numbers, size);

    std::cout << "Placing the first element at index 7: \n";
    std::swap(numbers[size - 2], numbers[size - 3]);
    printArray(numbers, size);

    std::cout << "Placing the first element at index 6: \n";
    std::swap(numbers[size - 3], numbers[size - 4]);
    printArray(numbers, size);

    std::cout << "Placing the first element at index 5: \n";
    std::swap(numbers[size - 4], numbers[size - 5]);
    printArray(numbers, size);

    std::cout << "Placing the first element at index 4: \n";
    std::swap(numbers[size - 5], numbers[size - 6]);
    printArray(numbers, size);

    std::cout << "Placing the first element at index 3: \n";
    std::swap(numbers[size - 6], numbers[size - 7]);
    printArray(numbers, size);

    std::cout << "Placing the first element at index 2: \n";
    std::swap(numbers[size - 7], numbers[size - 8]);
    printArray(numbers, size);

    std::cout << "Placing the first element at index 1: \n";
    std::swap(numbers[size - 8], numbers[size - 9]);
    printArray(numbers, size);

    std::cout << "Placing the first element at index 0: \n";
    std::swap(numbers[size - 9], numbers[0]);
    printArray(numbers, size);

    std::cout << "This swaps the elements at the indexes but also disrupts the order of the rest of the array as well. \n";

    std::cout << "\nSorting the array: \n";   

    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(numbers[j] > numbers[j + 1]){
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printArray(numbers, size);

    return 0;
}

void printArray(int array[], int size){
    std::cout << "[ ";
    for(int i = 0; i < size; i++){
        if(i < size - 1){
            std::cout << array[i] << ", ";
        }
        else{
            std::cout << array[i] << " ";
        }
    }
    std::cout << " ]\n\n";
}