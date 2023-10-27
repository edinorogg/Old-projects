#include <iostream>
#include <ctime>
using namespace std;

int main() {

int n = 10;
int a[n];
int b[n];
int c[n*2];
//    int sizea=6;
//    int k=0;
//    int sizeb=6;
//    int A[sizea];
//    int B[sizeb];
//    int C[sizea];
   srand(time(0));
   for(int i=0;i<n;i++){
        a[i] = rand();
        cout << a[i] << " ";
    }
    cout << "\n" << "b: ";
    for(int i = 0; i < n; i++){
        b[i] = rand();
        cout << b[i] << " ";
     }
    cout << "\n";
    cout << endl << "c = ";
    for(int i = 0; i < n; i++){
        c[i] = a[i] + b[i];
        cout << c[i] << " ";
    }
    return 0;
    
}
