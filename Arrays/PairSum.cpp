#include <iostream>
#include <vector>

using namespace std;

vector<int> pairSum(vector<int> &nums, int targetSum){
    int n = nums.size();
    int i = 0, j = n - 1;
    int ps = 0;
    vector<int> ans;

    while(i < j){
        ps = nums[i] + nums[j];
        if(ps > targetSum){
            j--;
        }
        if(ps < targetSum){
            i++;
        }
        if(ps == targetSum){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return {};
}
int main(){
    vector<int> nums = {2, 7, 11, 15};
    int targetSum = 26;
    vector<int> result;

    result = pairSum(nums, targetSum);
    cout << result[0] << ", " << result[1] << '\n';
    return 0;
}