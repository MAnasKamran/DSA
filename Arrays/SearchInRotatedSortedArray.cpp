#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> &arr, int tar){
    int st = 0, end = arr.size() - 1;

    while(st <= end){
        int mid = st + (end - st) / 2;
        if(arr[mid] == tar){
            return mid;
        }
        if(arr[st] < arr[mid]){ //left-sorted
            if(arr[st] <= tar && tar <= arr[mid]){
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
        }
        else if(arr[mid] <= tar && tar <= arr[end]){ //right-sorted
            st = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {0, 1, 2, 3, 7, 4, 5, 6};
    int tar = 4;
    cout << search(arr, tar);
    return 0;
}