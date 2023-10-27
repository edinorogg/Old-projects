#include<iostream>

using std::cin;
using std::cout;
using std::string;
using std::endl;
struct patron{
    std::string name;
    int sum;

};

int main(){
 int i = 0, amount = 0;
 cout << "Please, tell me the amount of patrons: " << endl;
 cin >> amount;
 patron *arr = new patron[amount];
 cin.ignore();
 while(i != amount){
    cout << "Please, tell me patron's name: " << endl;
        getline(cin, arr[i].name);
    cout << "Enter donation amount: ";
    cin >> arr[i].sum;
    i++;
    cin.ignore();
 }
 i = 0;
 cout << "Great patrons (cool): \n";
 while(i != amount){
     if (arr[i].sum >= 10000)
          cout << arr[i].name << "\t" << arr[i].sum << "\n";
    
     i++;
 }
 i = 0;
cout << "Great patrons (NOT cool): \n";
 while(i != amount){
     if (arr[i].sum < 10000) 
        cout << arr[i].name << "\t" << arr[i].sum << "\n";

     i++;
 }
 delete []arr;
    return 0;
}