#include <iostream>

int searchArray(int array[], int size, int myNum);

int main(){

    int index;
    int size;
    int myNum;
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    size = sizeof(numbers)/sizeof(numbers[0]);

    std::cout << "Enter the number to search for: \n";
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if(index != -1){
        std::cout << "Number found! The number: " << myNum << " is present at the index: " << index << '\n';
    }
    else{
        std::cout << "The number does not exist within this array!";
    }



    return 0;
}

int searchArray(int array[], int size, int myNum){
    for(int i = 0; i < size; i++){
        if(array[i] == myNum){
            return i ;
        }
    }
    return -1;
}