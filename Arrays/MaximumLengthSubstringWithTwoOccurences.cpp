#include <iostream>

using namespace std;

int maxLengthSubstring(string s){
    int left = 0, right = 0, ans = 0;
    int freq[26] = {};

    for(int right = 0; right < s.length(); right++){
        freq[s[right] - 'a']++;
        while(freq[s[right] - 'a'] > 2){
            freq[s[left] - 'a']--;
            left++;
        }
        ans = max(ans, right - left + 1);
    }
    return ans;
}
int main(){
    string s = "bcbb";
    cout << "Max length Substring with two repetitive occurences: " << maxLengthSubstring(s) << '\n';
    return 0;
}