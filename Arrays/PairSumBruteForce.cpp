#include <iostream>
#include <vector>

using namespace std;
//PairSum brute force approach:

vector<int> pairSum(int arr[], int n, int target){
    vector<int> ans;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return {};
}
int main(){
    int arr[4] = {2, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    vector<int> result = pairSum(arr, n, target);
    
    for(int i : result){
        cout << i << " ";
    }
    return 0;
}