#include <iostream>
using std::cin;
using std::cout;
int main(){
    int sum, sum1 = 0;
    double nalog;
    cin >> sum;
    while(sum>=0){
        if (sum <=5000)
            cout << 0 << std::endl;
        else {
            sum = sum - 5000;
            nalog = 0;
        }
    if (sum > 0)
        while(sum > 0) {
            sum = sum - 10000;
            nalog = 10000 * 0.1;
        if (sum > 0) {
            sum = sum - 20000;
            nalog = nalog + 20000 * 0.15;
            if (sum > 0){
                nalog = nalog + sum * 0.2;
                
            }
            else {
                cout << nalog << std::endl;
            }
        }
        else {
            cout << nalog << std::endl;
        }
    
    }
    return 0;
    }
}