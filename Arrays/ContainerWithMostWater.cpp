#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxArea(vector<int> heights){
    int n = heights.size();
    int maxWater = 0;
    int area = 0;
    int start = 0;
    int end = n - 1;

    while(start < end){
        int width = end - start;
        int ht = min(heights[start], heights[end]);
        area = width * ht;
        maxWater = max(maxWater, area);

        if(heights[start] < heights[end]){
            start++;
        }
        else{
            end--;
        }
    }
    return maxWater;
}
int main(){
    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Max area of water that can be contained is: " << maxArea(heights) << '\n';
    return 0;
}