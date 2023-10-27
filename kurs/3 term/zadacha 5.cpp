#include <iostream>
using std::cin;
using std::cout;
int main(){
double a,b,c;
int i = 1;
cin >> a >> b;
c = b;
while(c<a){
c=b*i;
i++;
}
if(a==c){
    cout << "a is a multiple of b";
    
}   
else{
    cout << "a is NOT a multiple of b"<< std::endl;
}
}