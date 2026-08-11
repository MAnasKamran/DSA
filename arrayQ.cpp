#include <iostream>
#include <climits>
#include <algorithm>

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

void swapMinWithMax(int arr[] , int size){
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int i1;
    int i2;

    for(int i = 0; i < size; i++){
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);

        if(arr[i] == smallest){
            i1 = i;
        }
        if(arr[i] == largest){
            i2 = i;
        }
    }
    swap(arr[i1], arr[i2]);
}

void findUniqueEl(int arr[], int size){
    bool isUnique;
    bool found = false;
    for(int i = 0; i < size; i++){
        isUnique = true;
        for(int j = 0; j < size; j++){
            if( i != j && arr[i] == arr[j]){
                isUnique = false;
                break;
            }
        }
        if(isUnique){
            cout << arr[i] << " ";
            found = true;
        }
    }
    if(!found){
            cout << "No unique element found.\n";
        }
        else{
            cout << '\n';
        }
}

void findIntersection(int arr1[], int arr2[], int size1, int size2){
    bool found = false;
    for(int i = 0; i < size1; i ++){
        bool alreadyProcessed = false;
        for(int k = 0; k < i; k++){
            if(arr1[i] == arr1[k]){
                alreadyProcessed = true;
                break;
            }
        }
        if(alreadyProcessed){
            continue;
        }
        for(int j = 0; j < size2; j++){
            if(arr1[i] == arr2[j]){
                found = true;
                cout << arr1[i] << " " ;
                break;
            }
        }
    }
    if(!found){
        cout << "No common element found! \n";
    }
    else{
        cout << '\n';
    }
}

void sortArray(int arr[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size){
    cout << "[";
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

    cout << "\nSwapping the minimum number in the array with the maximum number in the array:\n";
    swapMinWithMax(arr1, size);

    printArray(arr1, size);

    int arr2[] = {1, 2, 3, 4, 1, 2, 3, 4, 5};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "\n\nThe unique element in the array (arr2) is: ";
    findUniqueEl(arr2, size2);

    cout << "\nThe unique elements in the array (arr1) are: ";
    findUniqueEl(arr1, size);

    int arr3[] = {1, 1, 2, 2, 3, 3, 3};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << "\n\nThe unique elements in the array (arr3) are: ";
    findUniqueEl(arr3, size3);

    findIntersection(arr1, arr2, size, size2);
    sortArray(arr1, size);
    findIntersection(arr1, arr2, size, size2);
    return 0;
}