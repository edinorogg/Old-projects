#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string line;
    ifstream in;
    ofstream out;
    int i = 0, n = 0;
    in.open("E:\\files\\11.txt");
    out.open("E:\\files\\12.txt");
    if (in.is_open())
    {   while (getline(in, line)){
            while(i < line.length()){
                if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) {
                    n++;
                }
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