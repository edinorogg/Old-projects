#include <iostream>
using std::cin;
using std::cout;
int main(){
int a, i = 1;
long long int sum=1;
cin >> a;
while (i<=a){
sum=sum*i;
i++;
}
cout << sum;
}