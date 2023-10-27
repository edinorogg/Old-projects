#include <iostream>

int main(){
    int a,i = 1;
    std::cin >> a;
    if(a*i > 100) {
        std::cout <<  "No such numbers";
    }
    while (a*i<100){
        std::cout << a * i << " ";
        i++;
    }
 
    return 0;
}