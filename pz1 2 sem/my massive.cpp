#include <iostream>
using namespace std;
struct collection
{
    int age;
    std::string name;
};

int main()
{
    int i = 0, amount = 0;
    cout << "Hi, dear customer. How many cars do you want to add at our catalog?" << endl;
    cin >> amount;
    collection *am = new collection[amount]; //объявление динамического массива структур. у указателя такой же тип как у массива

    while (i != amount)
    {
        cout << "Automobile #" << i << "\n";
        cout << "Enter it's company name: ";
        cin.ignore();
        getline(cin, am[i].name);
        cout << "Please, tell us a year of car manufacture: ";
        getline(cin, am[i].name);
        i++;
    }
    i = 0; //обнуляю счётчик
    cout << "here is your collection: " << endl;
    while (i != amount)
    {
        cout << am[i].name << "\t" << am[i].age << endl;
        i++;
    }
    delete[] am;
    //  while(i != amount){
    //     cout << am[i].name << "\t" << am[i].age<< endl; //тут проверка произошло ли удаление массива
    //     i++;
    // }
    return 0;
}