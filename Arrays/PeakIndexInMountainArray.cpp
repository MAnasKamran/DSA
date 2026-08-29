#include <iostream>
#include <vector>

using namespace std;

int peakIndexInMountainArray(vector<int> &arr){
    int st = 1, end = arr.size() - 1;
    while(st <= end){
        int mid = st + (end - st) / 2;
        if(arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) return mid;
        if(arr[mid - 1] < arr[mid] && arr[mid] < arr[mid + 1]){
            st = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {1, 5, 10, 2};
    cout << "Peak index: " << peakIndexInMountainArray(arr) << '\n';
    return 0;
}