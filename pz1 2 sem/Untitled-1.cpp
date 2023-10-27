#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string line, check;
    int i = 0;
    ifstream in;
    in.open("E:\\files\\ex5.txt");
    if(in.is_open()){
     while (getline(in, line)){
         check+=line;
        i++;
     }
    }
    else{
        cerr;
    }
    in.close();
    for(auto c: check){
        i++;
    }
    cout << i;
    cout << " " << check.size();
    return 0;
}