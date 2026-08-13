//faster with lesser runtime
#include <iostream>
#include <vector>

using namespace std;

vector<int> shuffle(vector<int> &nums, int n){
    vector<int> ans(2 * n);
    for(int i = 0; i < n; i++){
        ans[2 * i] = nums[i];
        ans[2 * i + 1] = nums[i + n];
    }
    return ans;
}

int main(){
    vector<int> nums = {2,5,1,3,4,7};
    int n = 3;
    vector<int> res;
    res = shuffle(nums, n);
    for(int x : res){
        cout << x << " ";
    }
    return 0;
}