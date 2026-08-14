#include <iostream>

using namespace std;
int main(){
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int n = 7;
    int maxSum = INT_MIN;
    int cs = 0;
    for(int i = 0; i < n; i++){
        cs += arr[i];
        maxSum = max(cs, maxSum);
        if(cs < 0){
            cs = 0;
        }
    }

    cout << "Max subarray sum: " << maxSum;
    return 0;
}