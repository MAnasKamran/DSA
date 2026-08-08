#include <iostream>

using namespace std;

//using loop:

bool checkPowOfTwo(int n){
    if(n <= 1){
        return false;
    }
    while(n % 2 == 0){
        n /= 2;
    }
    return n == 1;
}

//using bit-wise operator:
bool checkPOfTwo(int n){
    return n > 0 && (n & (n - 1)) == 0;
}
int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "The number " << num << " is " << (checkPowOfTwo(num) ? "" : "not") << " a power of two.\n";

    cout << "The number " << num << " is " << (checkPOfTwo(num) ? "" : "not") << " a power of two.";

    return 0;
}