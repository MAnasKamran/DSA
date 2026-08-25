#include <iostream>

using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;

    cout << *ptr << '\n';
    cout << *(ptr + 1) << '\n';
    cout << *(ptr + 2) << '\n';

    ptr++;

    cout << *ptr << '\n';

    return 0;
}