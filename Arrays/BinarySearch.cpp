#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> &arr, int tar){
    int n = arr.size();
    int st = 0, end = n - 1;

    while(st <= end){
        int mid = st + (end - st) / 2;
        if(tar < arr[mid]){
            end = mid - 1;
        }
        else if(tar > arr[mid]){
            st = mid + 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {0, 1, 2, 3, 4, 5, 6};
    int tar = 3;
    cout << binarySearch(arr, tar);
    return 0;
}