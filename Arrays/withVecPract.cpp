#include <iostream>
#include <vector>

using namespace std;

void search(vector<int> &nums, int target){
    bool found = false;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == target){
        found = true;
        }
    }
        if(found){
        cout << "Number " << target << " found!\n";
        }
        else{
            cout << "Number" << target << " not found!\n";
        }
    }

void reverse(vector<int> &nums){
    int p1 = 0;
    int p2 = nums.size() - 1;
    while(p1 < p2){
        swap(nums[p1], nums[p2]);
        p1++;
        p2--;
    }
    cout << "Array reversed.";
}

int main(){
    vector<int> nums = {4, 5, 6, 3, 8, 1};
    int target = 1;
    search(nums, 1);
    reverse(nums);
    for(int x : nums){
        cout << x << " ";
    }
    return 0;
}