#include <iostream>
#include <vector>

using namespace std;

vector <int> getConcatenation(vector<int> &nums){
    int n = nums.size();
    vector<int> ans(2 * n);
    for(int i = 0; i < n; i++){
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }
    return ans;
}
int main(){
    vector<int> nums = {1, 2, 3, 4};
    cout << "Concatenating copy of the array with it: ";
    vector <int> result = getConcatenation(nums);
    cout << "[";
    for(int i = 0; i < result.size(); i++){
        cout << result[i];
        if(i < result.size() - 1){
            cout << ", ";
        }
    }
    cout << "]";
    return 0;
}