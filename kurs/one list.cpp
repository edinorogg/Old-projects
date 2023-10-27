#include <iostream>
using std::cin;
using std::cout;
using std::string;
using std::to_string;
using std::endl;
using namespace std;
/*односвязный список реализация

*/
class List
{
public:
    List(); //Конструктор класса List
    ~List();
    void push_back(string data);
    // void print(){ /*вот это потом мб надо убрать */
    // for(int i = 0; i < N; i++){
    //     cout << elements[i].GetInfo() << std::endl;
    //  }
    // }
private:

    class Node
    {
    public:
        Node *pNext;
        std::string data;
        static const int N = 4;
    Node(std::string data = (" "), Node *pNext = nullptr) //конструктор класса, создаю новый объект
    {
        this->data = data;
        this->pNext = pNext; 
    }

    // string GetInfo(){ //выдаёт элементы класса  //элементы класса node
    //     string noooow = " Node: data " + data + " ";
    //     return noooow;
    // }

    };

    int Size; //переменные класса List количество
    Node *head;
    static const int N = 4;
    // Node elements[N]{
    //     Node("gimme", nullptr),
    //     Node("sfsdfgjj", nullptr),
    //     Node("gjj ", nullptr),
    //     Node("gjj ", nullptr),
    // };
};  
// ostream& operator<< (ostream &out, const List &list)
// {
//     out << List;
//     return out;
// }
List::List()
{
    Size = 0;
    head = nullptr;
}
List::~List()
{}
void List::push_back(string data)
{
    if(head == nullptr)
    {
        head = new Node(data);
    }
    else
    {
        Node *current = this->head;
        while(current->pNext !=nullptr)
        {
            current = current->pNext;
        } 
        current -> pNext = new Node(data);
    }
}

int main(){

    List lst;
    lst.push_back("3");
    lst.push_back("4");

}