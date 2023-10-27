#include <iostream>
using std::cin;
using std::cout;
int main(){
int a,b,c;
cin >> a >> b >> c;
if ((a*a + b*b == c*c)||(a*a + c*c == b*b)||(c*c + b*b == a*a))
cout << "Yes, it is possible";
else{
    cout << "It is not possible";
}
}