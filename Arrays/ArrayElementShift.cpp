#include <iostream>
#include <utility>

void moveFirstElementTo(int array[], int size, int targetIndex);
void printArray(int array[], int size);

int main(){

    std::cout << "\nPlacing 1 at different indexes without disrupting the order of the array: \n\n";
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    std::cout << "Placing 1 at index 9: \n";

    moveFirstElementTo(numbers, size, 9);

    printArray(numbers, size);

    std::cout << "Placing 1 at index 8: \n";
    moveFirstElementTo(numbers, size, 8);
    printArray(numbers, size);

    std::cout << "Placing 1 at index 7: \n";
    moveFirstElementTo(numbers, size, 7);
    printArray(numbers, size);

    std::cout << "Placing 1 at index 6: \n";
    moveFirstElementTo(numbers, size, 6);
    printArray(numbers, size);

    std::cout << "Placing 1 at index 5: \n";
    moveFirstElementTo(numbers, size, 5);
    printArray(numbers, size);

    std::cout << "Placing 1 at index 4: \n";
    moveFirstElementTo(numbers, size, 4);
    printArray(numbers, size);

    std::cout << "Placing 1 at index 3: \n";
    moveFirstElementTo(numbers, size, 3);
    printArray(numbers, size);

    std::cout << "Placing 1 at index 2: \n";
    moveFirstElementTo(numbers, size, 2);
    printArray(numbers, size);

    std::cout << "Placing 1 at index 1: \n";
    moveFirstElementTo(numbers, size, 1);
    printArray(numbers, size);

    std::cout << "Placing 1 at index 0: \n";
    moveFirstElementTo(numbers, size, 0);
    printArray(numbers, size);

    return 0;
}

void moveFirstElementTo(int array[], int size, int targetIndex){
    int currentIndex;

    if (targetIndex < 0 || targetIndex >= size){
        return;
    }

    for(int i = 0; i < size; i++){
        if(array[i] == 1){
            currentIndex = i;
            break;
        }
    }

    while(currentIndex < targetIndex){
        std::swap(array[currentIndex], array[currentIndex + 1]);
        currentIndex++;
    }

    while(currentIndex > targetIndex){
        std::swap(array[currentIndex], array[currentIndex - 1]);
        currentIndex--;
    }
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
