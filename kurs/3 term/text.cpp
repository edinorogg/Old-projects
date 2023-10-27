#include <iostream>
#include <string>
using std::cin;
using std::cout;
int main(){
       char c;
       cin >> c;
       if ((int) c >= 'a' && (int) c <= 'z'){
               int temp = c - 'a';
               c = temp + 'A';
               cout << c;
       }
       else if ((int) c >= 'A' && (int) c <= 'Z'){
               int temp2 = c - 'A';
               c = temp2 + 'a';
               cout << c; 
       }
       else{
               cout << c;
       }

}