#include <iostream>
#include <vector>

using namespace std;

int maxArea(vector<int> heights){
    int maxWater = 0;
    int n = heights.size();
    int area = 0;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int width = j - i;
            int h = min(heights[i], heights[j]);
            area = h * width;
            maxWater = max(maxWater, area);
        }
    }
    return maxWater;
}
int main(){
    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Max area of water that can be contained is: " << maxArea(heights) << '\n';
    return 0;
}