#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string line;
    ifstream in;
    ofstream out;
    int i = 0, n = 0;
    in.open("E:\\files\\ex12_1.txt");
    out.open("E:\\files\\ex12_2.txt");
    if (in.is_open())
    {   while (getline(in, line)){
            while(i < line.length()){
               if ((!isalpha(line[i])) && (!isdigit(line[i])) && (isgraph(line[i]))) n++;
                i++; 
            }
            i=0;
            out << n << endl;
            n=0;
        }
    }
    in.close();
    out.close();
}