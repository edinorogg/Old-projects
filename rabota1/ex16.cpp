#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string line, n;
    ifstream in;
    ofstream out;
    int i = 0, i2 = 1, temp;
    in.open("E:\\files\\ex16_1.txt");
    out.open("E:\\files\\ex16_2.txt");
    if (in.is_open())
    {   
        while (getline(in, line)){
            while(i < line.length()){
                if((i2 % 2 != 0) & (i2 % 5 != 0))
                    out << line[i];
                if((line[i] == ' ') || (line[i] == '.')){
                    i2++;
                }
                if((i2 % 2 == 0) &(i2 % 5 != 0)){
                    if ((int) line[i] >= 'A' && (int) line[i] <= 'Z'){
                        temp = line[i] - 'A';
                        out << temp + 'a';
                        temp = 0;
                     }
                    else{
                        out << line[i];
                    }
                }
                if((i2 % 2 != 0) & (i2 % 5 == 0)){
                    out << int(line[i]) << " ";
                }
                if((i2 % 2 == 0) &(i2 % 5 == 0)){
                    if ((int) line[i] >= 'A' && (int) line[i] <= 'Z'){
                        int temp = line[i] - 'A';
                        out << int(temp + 'a') << " ";
                        temp = 0;
                     }
                    else {
                        out << int(line[i]) << " ";
                    }
                }
            
                i++;
            }
            
            i=0;
            out << '\n';
        }
    }
    in.close();
    out.close();
}