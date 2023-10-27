#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class Plorg
{
    private:
        int CI;
        std::string name;
    public:
    Plorg(){
        std::string name = "Plorga";
        CI = 50;
    }
    void Print(){
        cout << name << " \t" << CI << endl;;
    }
    int SetCI(int valueCI){
        CI = valueCI;
    }
    // std::string SetName(std::string namevalue){
    //     name = namevalue;
    // }
    void GetCI(){
        cout << "CI = "<< CI;
    }
    void GetName(){
        cout << "Plorg's name = "<< CI;
    }

};
int main(){ 
    int i;
    cout << "Hello, Dear Traveler. What would u like to do?" << endl;
    cout << "Do you want to know any information about Plorgs?" << endl;
    cout <<" 1. I want to create a new Plorg"  << endl;
    cout <<" 2. I want to chance my Plorg's CI"  << endl;
    cout <<" 3. Destination Point."  << endl;
    cout << "4. A list of all existing Plorgs (is updating every second) "  << endl;
    cout << "0. Go away "  << endl;
    cout << endl;
    while( i!= 0){
    cin >> i;
    switch(i){
        case 1:
        //Plorg* fen = new Plorg; тут массив плоргов добавить7??

        case 2:
            cout << "Please, input your Plorg's name and CI value; " << endl;
        case 3:

        case 0:

    }

    i = -1;

    }




    


}