#include <iostream>
#include <vector>
#include <unordered_set>


using namespace std;

int numUniqueElements(vector<string> &emails){
    unordered_set<string> st;
    for(string email : emails){
        string cleanEmail;
        for(char ch : email){
            if(ch == '+' || ch == '@') break;
            if(ch == '.') continue;
            cleanEmail += ch;
        }
        cleanEmail += email.substr(email.find('@'));
        st.insert(cleanEmail);
    }
    return st.size();
}
int main(){
    vector<string> emails = {"test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"};
    cout << numUniqueElements(emails) << '\n';
    return 0;
}