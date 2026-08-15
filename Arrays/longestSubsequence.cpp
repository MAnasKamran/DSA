#include <iostream>
#include <vector>
using namespace std;

int longestSubsequence(vector<int> &nums){
    int n = nums.size();
    int totalXOR = 0;
    bool hasNonZero = false;

    for(int num : nums){
        totalXOR ^= num;
        if(num != 0){
            hasNonZero = true;
        }
    }
    if(!hasNonZero){
        return 0;
    }
    if(totalXOR != 0){
        return n;
    }
    return n - 1;
}
int main(){
    vector <int> nums = {1,2,3};
    cout << longestSubsequence(nums);

    return 0;
}