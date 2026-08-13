#include <iostream>
#include <vector>

using namespace std;
vector<int> shuffle(vector<int> &nums, int n);
int main(){
    vector<int> nums = {2, 5, 1, 3, 4, 7};
    int n = 3;
    vector<int> r;
    r = shuffle(nums, n);
    for(int x : r){
        cout << x << " ";
    }

}
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int i = 0;
        int j = n;
        while(i < n){
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            i++;
            j++;
        }
        return ans;
    }