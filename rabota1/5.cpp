#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
int main(){
std::string s, word, word2;
int i = 0, m = 0, space = 0, first = -1;
getline(cin, s);
for(auto c : s){
//    if((int)c > 'a' && (int)c < 'z'){
//        word += c;
//    }
   if (s.find_first_of(" ", first + 1) != -1){
       first = s.find_first_of(" ", first+1);
       i++;
       word +=c;
       cout << first << " " << space << endl;
       if(i == 1){
        space = first;
       }
       if(i==2){
           word2=s.substr(space, first);
           if (word.length() > word2.length()) {
                word2 = word;
           }
        i=0;
        word.erase();
       }
       else{

       }
       }
    //   else {
    //       word= ' ';
    //   }
    }
 cout << word2 << endl;
}
// for(auto c : s){
//     if ((int)c >= 'a' && (int)c <= 'Z' && (m == 0))
//     {
//         i++;
//         word+=c;
//     }
//     if((int)c == ' ' && m<2){
//         m++;
//         word2+=c;
//     }
//     if (m==2){
//         if (i > m){
//             word2 =' ';
//         }
//         else{
//             i=m;
//             word=word2;
//         }
//         m=0;
//     }
//     cout << word << " first word " << endl;
//     cout << word2 << "second word" << endl;
// }
