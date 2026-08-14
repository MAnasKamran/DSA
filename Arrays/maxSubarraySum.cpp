#include <iostream>
//brute-force approach
using namespace std;

int main(){
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int n = 7;

    int maxSum = INT_MIN;
    for(int st = 0; st < n; st++){
        int cs = 0;
        for(int end = st; end < n; end ++){
            cs += arr[end];
            maxSum = max(cs, maxSum);
        }
        
    }
    cout << "Max subarray sum: " <<  maxSum << '\n';

    return 0;
}