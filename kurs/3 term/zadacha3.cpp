#include <iostream>
using std::cin;
using std::cout;
int main(){
int a, i=1,counter=0;
cin >> a;
while(i*i < a){
    i++;
    if(a % i == 0) counter++;
}
if(counter != 0) cout << a <<  " is not a simple number";
else cout << a << " is a simple number";
}