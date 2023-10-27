#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, w, w2;
    int i=0, first = 0, second;
    getline(cin, s);
    s+=' ';
    second = s.find(' ');
    w = s.substr(first,second);
    i+=second+1;
    while (i < s.length()){
     if(s[i] != ' '){
     w2+=s[i];
     }
     if(s[i] == ' ' ) {
      if(w2.length() > w.length()){
          w = w2;
      }
      w2.clear();
     }
    i++;
    }
 cout << w << endl;
 }