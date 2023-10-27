#include <iostream>
using namespace std;
int main(){
double nalog;
int sum, i = 0;
cin >> sum;
while(sum > 0){
         if (sum < 5001){
            cout << 0 << endl ;
            sum = 0;            
        }
        else if(sum < 15001 && sum > 5000){
            sum = sum - 5000;
            nalog = sum * 0.1;
            cout << nalog << endl ;
            sum = 0;
        }
        else if(sum < 35001 && sum > 15000){
            sum = sum - 15000;
            nalog = 10000 * 0.1 + sum * 0.15;
            cout << nalog  << endl;
            sum = 0;
        }
        else 
        if(sum > 35000){
            sum = sum - 35000;
            nalog = (10000 * 0.1 + 20000 * 0.15 ) + sum * 0.2;
            cout << nalog << endl;
        }
    cin >> sum;
    }
return 0;
}