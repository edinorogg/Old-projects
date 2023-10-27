#include <iostream>

using namespace std;
int main(){
    int a [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10] = {1, 2, 3, 4, 4, 0, 4, 8, 9, 9};
    int c[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int m = 0;
    for(int i = 0; i < 11; i++ )
    {
        for(int j = 0; j < 11; j++ ){
            if(a[i] == b[j]) {
                m++;
            }       
        }
     if(m > 1){
             c[i] = a[i];
            }
    m = 0;
    cout << c[i] << " ";
    }
    return 0;
}