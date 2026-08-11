#include <iostream>

using namespace std;

int sumOfAllElements(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int productOfAllElements(int arr[], int size){
        int p = 1;
    for(int i = 0; i < size; i++){
        p *= arr[i];
    }
    return p;
}

void printArray(int arr[], int size){
    cout << "[ ";
    for(int i = 0; i < size; i++){
        if(i < size - 1){
            cout << arr[i] << ", ";
        }
        else{
            cout << arr[i] << "";
        }
    }
    cout << "]";
}
int main(){
    int arr1[] = {2, 4, 6, 8, 3, 7};
    int size = sizeof(arr1) / sizeof(arr1[0]);

    cout << "The sum of the elements of the array: " ;
    printArray(arr1, size);
    cout << " is: " << sumOfAllElements(arr1, size) << '\n';

    cout << "The product of all the elements of the array: " ;
    printArray(arr1, size);
    cout << " is: " << productOfAllElements(arr1, size) << '\n';

    return 0;
}