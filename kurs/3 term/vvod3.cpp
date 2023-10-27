#include <iostream>

int main(){
    int n, sum = 0, i = 1;
    std::cin >> n;
    while(i<=n){
        sum = sum + i;
        i++;
    }
    std::cout << sum;
    return 0;
}