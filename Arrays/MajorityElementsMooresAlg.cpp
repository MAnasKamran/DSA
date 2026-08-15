#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int> &num){
    int n = num.size();
    int ans = 0;
    int freq = 0;
    for(int i = 0; i < n; i++){
        if(freq == 0){
            ans = num[i];
        }
        if(ans == num[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}


int main(){
     vector<int> num = {1, 2, 2, 1, 1};

    cout << majorityElement(num);
    return 0;
}