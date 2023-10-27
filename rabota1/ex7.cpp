#include <iostream>
using std::cin;
using std::cout;
int main(){
int a,answ,count1=1,count2=0;
cin >> a;
int num=1;
while (count1 < 11){ //какую цифру возводим в степень
answ=count1;
    while(count2<a){ //счётчик степени
    cout << answ << " ";
    answ=answ*count1;
    count2++;
    }
cout << " " << std::endl;
count1++;
count2=0;
}
}