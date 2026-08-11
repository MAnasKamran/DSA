#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> vec = {0, 5, 10};
    cout << "Size: " << vec.size() << '\n';

    vec.push_back(15);
    vec.push_back(20);
    vec.push_back(25);

    for(int v : vec){
        cout << v << '\n';
    }

    vec.pop_back();
    cout << '\n';

    for(int v : vec){
        cout << v << '\n';
    }

    cout << "First value: " << vec.front() << '\n';
    cout << "Last value: " << vec.back() << '\n';

    cout << vec.at(2);
    return 0;
}