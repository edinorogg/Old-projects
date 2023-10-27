#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string line;
    int n=0;
    fstream in; // окрываем файл для чтения
    char c;
    in.open("E:\\new.txt");
    if (in.is_open())
    {while(!in.eof()){
        in>>c;
        if(!isdigit(c)){
            line+=c;
        }
        cout<<line<<endl;
    }
    }
    else cout<<"ERROR";
    in.close();     // закрываем файл
    return 0;
}