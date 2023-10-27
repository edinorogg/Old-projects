#include <iostream>
#include <cmath>
int main(){
    int a,b,c,d;
    std::cin >> a >> b >> c;
    d = b*b - 4 * a * c;
    if (d == 0){
        std::cout << -b/2*a;
    }else if (d > 0) {
        std::cout << (-b - sqrt(b*b - 4 * a * c))/2*a << " " << (-b + sqrt(b*b - 4 * a * c))/2*a;
    
    }else {
        std::cout << -b / 2* a << " + " << sqrt(abs(d))/2 * a <<  "i"  << " " << -b / 2 * a << " + " << + sqrt(abs(d)) << "i";
    }
    return 0;
}