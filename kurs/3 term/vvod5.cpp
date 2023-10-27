#include <iostream>

using namespace std;
int main(){
    int a [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10] = {1, 2, 3, 4, 5, 0, 2, 8, 11, 10};
    int c[20];
    int min[10];
    int f = 0;
    int m =0;
    for(int i = 0; i < 20; i++){
        c[i] = 0;
    }
    for(int i = 0; i < 20; i+=2)
    {
        c[i]=a[i/2];
        for(int j = 0; j < 11; j++ ){
            if(a[i] == b[j]) {
               m++;
           }       
        }
        c[i-1]=m;
        m=0;
    }
    for(int i = 0; i < 20; i++){
        cout << c[i] << " ";
    }
    return 0;
}