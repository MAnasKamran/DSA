#include <iostream>

double getTotal(double prices[], int size);

int main(){

    double prices[] = {100.50, 22.56, 56.98, 45.98, 250.78, 100};

    int size = sizeof(prices)/sizeof(100.50);

    double total = getTotal(prices, size);

    std::cout << "Total: $" << total << '\n';

    return 0;
}

double getTotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}