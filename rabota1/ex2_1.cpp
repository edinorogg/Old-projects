#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string line, n = "";
    // int temp_s;
    ifstream in;
    ofstream out;
    string w, w2, w_min = "jfdgjkgdlkgkldjglkjkgkldfjgkdjgdlkjglkfd", w_min2;
    int m = 0, first = 0, second;
    int i = 0;
    in.open("E:\\files\\ex2_1_1.txt");
    if (in.is_open())
    second = line.find(' ');
    w = line.substr(first,second);
    i+=second+1;
    {   while (getline(in, line)){
            while(i < line.length()){
                    if((line[i] != ' ' ) && (line[i] != '.')){
                        w2+=line[i];
                    }
                    if(line[i] == ' '  || line[i] == '.') {
                     if(w2.length() > w.length()){
                        w = w2;
                    }
                     w2.clear();
                    }
                i++;
            }
            i=0;
            while(i < line.length()){
                    if(line[i] != ' '){
                        w_min2+=line[i];
                    }
                    if(line[i] == ' '  || line[i] == '.') {
                     if(w_min2.length() < w_min.length()){
                        w_min = w_min2;
                    }
                     w_min2.clear();
                    }
                i++;
            }
            i=0;
        }
    }
    // in.close();
    // out.open("E:\\files\\ex14_1.txt");
    // if (out.is_open())
    // {
    //     out << n;
    // }
    // out.close();
    // cout << "the longest word is " <<  w << " " << endl;
    cout << "the shortest word is " <<  w_min << " " << endl;
    cout << "\033[1;32mjob is done!\033[0m\n";
}