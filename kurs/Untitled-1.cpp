#include<iostream>
#include <fstream>
using namespace std;

int main(){
    
    string meh;
    ifstream wow;
    int count;
    wow.open("E:\\kursovaya\\other\\spisok.txt");
    if(wow.is_open()){
    while (getline(wow, meh))
        {
            std::cout << meh << std::endl;
        }    
    }
    wow.close();
    for (int i = 0; i < count; i++)
    {
        /* code */
    }
    
    cout << meh;
    return 0;
}