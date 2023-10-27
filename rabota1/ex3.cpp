#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string line, n = "";
    ifstream in;
    ofstream out;
    int i = 0;
    in.open("E:\\files\\new.txt");
    if (in.is_open())
    {   while (getline(in, line)){
            while(i < line.length()){
                if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) {
                    n+=line[i];
                }
                i++;
            }
            i=0;
            n+='\n';
        }
    }
    in.close();
    out.open("E:\\files\\new.txt");
    if (out.is_open())
    {
        out << n;
    }
    out.close();
    cout << "\033[1;32mjob is done!\033[0m\n";
}