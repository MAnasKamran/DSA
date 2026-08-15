#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &num){
    int n = num.size();
    for(int i : num){
        int freq = 0;
        for(int j : num){
            if(i == j){
                freq++;
            }
        }
        if(freq > n / 2){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> num = {1, 2, 2, 1, 1};

    cout << majorityElement(num);
    
    return 0;
}