#include <iostream>
#include <vector>

using namespace std;

int trappedWater(vector<int> heights){
    int n = heights.size();
    int st = 0, end = n - 1;
    int left_max = 0, right_max = 0, water = 0;

    while(st < end){
        if(heights[st] < heights[end]){
            if(heights[st] >= left_max){
            left_max = heights[st];
        }
            else{
        water += left_max - heights[st];
    }
    st++;
}
        else{
            if(heights[end] >= right_max){
            right_max = heights[end];
        }
            else{
            water += right_max - heights[end];
        }
    end--;
    }
    }
    return water;
}

int main(){
    vector<int> heights = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << trappedWater(heights) << '\n';
    return 0;
}