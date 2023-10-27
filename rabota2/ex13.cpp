#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    string line, line2;
    ifstream in;
    ifstream in2;
    ofstream out;
    int i = 0, n = 0;
    in.open("E:\\files\\ex13_1.txt");
    in2.open("E:\\files\\ex13_2.txt");
    out.open("E:\\files\\ex13_result.txt");
    if (in.is_open()){
       while(getline(in, line)){
        if((line[i] != '\n ' ) && (line[i] != ' ')){
        out << line[i];
        i++;
        }
        else {
        while(getline(in2, line2)){
            if((line2[i] != '\n ' ) && (line2[i] != ' ')){
            out << line2[i];
            i++;
            }
            else {
                out << "\n";
                break;
            }
         }
        }
      }
    }
    in.close();
    in2.close();
    out.close();
}
