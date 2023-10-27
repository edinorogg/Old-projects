#include<iostream>
#include<ctime>
using std::cin;
using std::cout;
int main(){
int n,count_min, count_max, i=0, min=RAND_MAX, max=-1;
srand( time(0)); //чтобы каждый раз последовательность генерировалась заново
cin >> n;
int a[n];
while(i!=n){
    a[i]=rand();
    cout << a[i] << " ";
    if(min>a[i]){
        min=a[i];
        count_min=i;
    }
    if(max<a[i]){
        max=a[i];
        count_max=i;
    }
    i++;
}
a[count_max]=min;
a[count_min]=max;
i=0;
cout << " " << std::endl;
while(i!=n){
    cout << a[i] << " ";
    i++;
}
cout << " " << std::endl;
cout << "\033[1;32mjob is done!\033[0m\n";
}