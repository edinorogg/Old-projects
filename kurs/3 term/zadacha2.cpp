#include <iostream>
using std::cin;
using std::cout;
int main(){
int a;
int i = 10000000;
int scet = 1;
cin >> a;
while((a>0)||(scet<9)){
cout << a/i << " ";
a = a % i;
i = i / 10;
scet++;
}
}