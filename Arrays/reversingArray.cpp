#include <iostream>

using namespace std;

int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = size - 1;
    
    cout << "Array before reversing: \n";
    cout << "[";
    for(int i = 0; i < size; i++){
        if(i < size - 1){
            cout << arr[i] << ", ";
        }
        else{
            cout << arr[i] <<  "";
        }
    }
    cout << "]\n\n";

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "Array after reversing: \n";
    cout << "[";
    for(int i = 0; i < size; i++){
        if(i < size - 1){
            cout << arr[i] << ", ";
        }
        else{
            cout << arr[i] << "";
        }
    }
    cout << "]\n";

    return 0;
}