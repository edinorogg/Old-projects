#include<iostream>
using std::cin;
using std::cout;
struct man{
    std::string name;
    int height, weight, age;
};
struct flower{
    double price;
    int amount;
    std::string name;
};
int main(){
    flower rose {4, 5, "Elizabeth"};
    flower lavanda {3.5, 73, "Lisa"};
    cout << "Price will be: " << rose.price*rose.amount + lavanda.price*lavanda.amount << std::endl;
    cout << "There are flowers for beautiful ladies " << rose.name << " " << rose.price*rose.amount << "$" <<" and "<< lavanda.name << " " << lavanda.price*lavanda.amount << "$";
    return 0;
}