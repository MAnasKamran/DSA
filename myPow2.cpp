#include <iostream>

using namespace std;

double myPow(double x, int n) {
        long binForm = n;
        double ans = 1;

        if(n == 0) return 1.0;
        if(x == 0) return 0.0;
        if(x == 1) return 1.0;
        if(x == -1 && n % 2 == 0) return 1.0;
        if(x == -1 && n % 2 == 1) return -1.0;

        if(n < 0){
            x = 1/x;
            binForm = -binForm;
        }
        
        while(binForm > 0){
            if(binForm & 1){
                ans *= x;
            }
            x *= x;
            binForm >>= 1;
        }
        return ans;
    }

int main(){
    cout << myPow(6.0, 8);
    return 0;
}