#include <iostream>

int main(){

    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;

    for(int i = 0; i < size; i++){
        std::cout << "Enter the food you like that will be saved on index #" << i + 1 << ": ";
        std::getline(std::cin, temp);
        if(temp == "q"){
            break;
        }
        else{
            foods[i] = temp;
        }
    }


    std::cout << "The foods you like are : \n";
    for(std::string food : foods){
        std::cout << food << '\n';
    }

    return 0;
}