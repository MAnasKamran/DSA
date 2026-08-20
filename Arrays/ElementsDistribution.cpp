#include <iostream>
#include <vector>

using namespace std;

vector<int> resultArray(vector<int> &nums){
    int n = nums.size();
    vector<int> arr1;
    vector<int> arr2;
    vector<int> result;

    arr1.push_back(nums[0]);
    arr2.push_back(nums[1]);

    for(int i = 2; i < n; i++){
        if(arr1.back() > arr2.back()){
            arr1.push_back(nums[i]); 
        }
        else{
            arr2.push_back(nums[i]);
        }
    }
    result.reserve(arr1.size() + arr2.size());
    result.insert(result.end(), arr1.begin(), arr1.end());
    result.insert(result.end(), arr2.begin(), arr2.end());
    return result;
}
int main(){
    vector<int> nums = {2, 1, 3};
    vector<int> res;
    res = resultArray(nums);
    for(int x : res){
        cout << x << " ";
    }
    return 0;
}