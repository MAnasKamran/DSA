#include <iostream>
#include <vector>

using namespace std;

bool predictWinner(vector<int> &nums){
    int n = nums.size();
    vector<int> dp (nums);
    if(n % 2 == 0) return true;
    
    for(int i = n - 2; i >= 0; i--){
        for(int j = i + 1; j < n; j++){
            dp[j] = max(nums[i] - dp[j], nums[j] - dp[j - 1]);
        }
    }
    return dp[n - 1] >= 0;
}
int main(){
    vector<int> nums = {1, 2, 245, 7};
    vector<int> nums2 = {2, 5, 653, 76, 8};
    (predictWinner(nums)) ? cout << "Player1 wins!\n" : cout << "Player2 wins!\n";
    (predictWinner(nums2)) ? cout << "Player1 wins!\n" : cout << "Player2 wins!\n";
    return 0;
}