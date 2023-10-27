#include <iostream>
using std::cin;
using std::cout;
int main(){
int a;
int i = 1, total = 0;
cin >> a;
if(a>=0){
while (i * a <= 100){
    if(a == 0){
     cout << 0;
     break;
    } 
    cout << i * a << std::endl;
    i++;
    total++;
}
}
if ((total == 0) && (a!=0)) cout << "No such numbers";    
}