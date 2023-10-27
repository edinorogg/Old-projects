#include<iostream>
using namespace std;

int main(){

    string line, check;
    line =" 79,80 18,51 24,33 87,19 86,50 11,79 57,36 67,75 -4,94 25,89 40,87 24,54 26,57 69,17 -13,18 -35,10 95,46 51,45";
    int i = 0;
    for (auto c: line){
        if (c == ' ') {
                check+=';';
            }
        else if (c == ',') {
                check+='.';
        }
        else{
             check+=c;
            }
    }
    cout << check;
    return 0;
}

 /*   Программа для разбиения строки на два столбца
 string line, temp1, temp2;
    line = "-1,00 -0.5 0.50 -0,50 0,50 1,00 0,00 0,00 -0,50 -1,00 -0.50 0,50 -1,00 -1,00 1,00 1,00 -0,50 1,00 0,00 0,50 0,00 1,00 -0,50 -0,50 0,00 -0,50 -0,50 0,00 -1,00 1,00 0,50 -1,00 0,50 0,00 1,00 0,00";
    int i = 0;
    for ( auto c: line){
        if(i % 2 == 0){
            if (c == ' '){
             temp1+=';';
             i++;
            }
            else{
                if (c == ',')
                    temp1+='.';
                else{
                temp1 += c;
                }
            }
        }
        else{
            if (c == ' '){
             temp2+=';';
             i++;
            }
            else{
                if (c == ',')
                    temp2+='.';
                else{
                temp2 += c;
                }
            }
        }
    }
    i == 0;
    cout << "temp1 " << temp1 << endl;
    cout << "temp2 " << temp2 << endl;
    return 0;
    */
