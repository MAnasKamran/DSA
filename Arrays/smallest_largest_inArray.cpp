#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main(){
    int marks[5] = {77, 89, 95, 60, 98};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int size = sizeof(marks) / sizeof(marks[0]);

    for(int i = 0; i < size; i++){
        smallest = min(marks[i], smallest);
        largest = max(marks[i], largest);
    }

    cout << "Largest: " << largest << '\n';
    cout << "Smallest: " << smallest << '\n';

    for(int i = 0; i < size; i++){
        if(marks[i] == largest){
            cout << "The largest value: " << largest << " is found at the index: " << i << " of marks[5].\n";
        }
        if(marks[i] == smallest){
            cout << "The smallest value: " << smallest << " is found at the index: " << i << " of marks[5].\n";
        }
    }
    return 0;
}