// я вырезаю из строки слово и проверяю является ли оно done и если не является то засчитываю его как слово. 
        // только надо понять как string преобразовать в массив символов char
    // }
    //  while (strcmp(check, word) != 0) {
    //     for (auto c : line){
    //         if(line[i] == ' ')
    //             first = i;
    //         if ((line[i] == ' ') && (i != first)){
    //             sec = i;
    //             check = line.substr(first,sec);
    //             }
    //         i++;
        // if (line.find_first_of(" ", first+1) != -1){
        //     first = line.find_first_of(" ", first+1);
        //     sec = line.find_first_of(" ", first+1);
        //     check = line.substr(first, sec);
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main(){
    string line, check;
    int i = 0, first = 0, sec;
    char word[] = "done";
    ifstream in;
    in.open("E:\\files\\ex2.txt");
    if(in.is_open()){
    while(getline(in, line)){
    for(auto c : line){
           // if (line[c] == ' ') || line[c] 
            if (line[c] == word[i]){
             i++;
            }
            else i = 0;
            if(i==4) break;
    }
     
    }
    else{
        cerr;
    }
    return 0;
}