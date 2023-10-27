#include <iostream>
#include <fstream>
#include<vector>
#include <cstdlib>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::ifstream;
 /* void resize(int size)
    {
        if (size > m_capacity)
        {
            int new_capacity = max(size, m_size * 2);
            T * new_data = new T[new_capacity];
            for (int i = 0; i < m_size; ++i)
                new_data[i] = m_data[i];
            delete[] m_data;
            m_data = new_data;
            m_capacity = new_capacity;
        }
        m_size = size;
    } */
class Variables
{
    private:
    int capacity;
    vector<char*> amongus;
    public:
    void Delete_new_SCOPE(){}
    void Create_new(int n, Variables *scopes, int j){
        int mem_count = 0;
        if (n != 0){
        char *ptr = new char[n]();
        scopes[j].amongus.push_back(ptr);
        }
        
    }
    int GetVectorSize(){

        return(amongus.size());
    }
    int GetValueMem(){
        int mem_count = 0;
        for (size_t i = 0; i < *amongus[i] ; i++) //вывести размер массива на который указывает указатель в амонгасе
        {
           mem_count += sizeof(*amongus[i]);
        }
        return(mem_count);
    
    }

    
    void GetMemory(int temp_scopes, int j, Variables *scopes){
        cout << "Total amount of scopes " <<  temp_scopes << endl; 
        cout << "Current amount of scopes " <<  j << endl; 

        for (int count = 0; count < j; count++)
        {
            cout << "Scope " << count << ": " << endl;
            for (int m = 0; m < scopes[count].GetVectorSize(); m++)
            {

                cout << "\t var " << m << " memory is " << scopes[count].GetValueMem()<< endl;
                if(m >= scopes[count].GetVectorSize()-1 )
                    cout << "Total amount of memory in this scope: " << 4 * scopes[count].GetVectorSize() << endl;  
            }
            
        }
    }

    Variables(){
        capacity = 0;
    }
    ~Variables(){
       amongus.clear();
    }
};
int main(){
    string line, input;    
    int *p;
    int x = 1;
    int N = 1; //допустимый размер оперативной памяти
    int scope_amount = 1;
    vector<int> check;
    string temp_st;
    string forskb; //"чтобы хранить скобку"
    string temp_st2; //"тут хранится размер создаваемой переменной"
    int first, second, j = 0;;
    ifstream in;
       in.open("E:\\kursovaya\\test1.txt"); //in.open("E:\\kursovaya\\main.txt"); in.open("E:\\kursovaya\\test1.txt");
            if( in.is_open() )
            {
                while(getline(in, line))
                {
                    for(auto sy : line)
                    {   //тут реализуется чтение из файла, пропуская символ перевода каретки на новую строку
                                            //btw можно это написать в курсовой, про условие цикла 
                        if (sy != '\n')
                        {
                            input += sy;
                        }
                    }
                    
                }
            }
            else return -1;
        in.close();
    // cout << "Пожалуйста, сообщите введите максимально доступный размер оперативной памяти. \n";
    // cin >> N;
    N=100;
for(auto i : input)
{ 
    if ( (i != ';') &  (i != '{') & (i != '}')  ){
        temp_st += i;
    }
    else if (i == ';'){
        if(temp_st == "ShowVar"){
            check.push_back(-100);
            temp_st.clear();
        }
        else { //это нужно чтобы выписывать объём переменной из скобок
            first = temp_st.find_first_of('(') + 1;
            second = temp_st.find_first_of(')');
                for(int m = first; m < second; m++){ //почему оно не выходит из этого цикла?? а потому что ты не очищала строку
                    temp_st2 += temp_st[m];
                }
                try
                {
                 int res = stoi(temp_st2);
                 check.push_back(res);
                }
                catch(std::invalid_argument e)
                { 
                    cout << "ERROR 2: Unclear value of memory. There is a mistake! Please, check your instructions." << endl;
                    cout << "Your memory value is " <<  temp_st2 << endl;
                }
                 temp_st2.clear();
                 temp_st.clear();
            }

    }
    else if ((i == '{') || (i == '}')) {
         forskb = i;
         if(forskb == "{")
         check.push_back(-1);
         if(forskb == "}")
         check.push_back(-2);
         forskb.clear();
    }

}
int vector_size = check.size();
for (int i = 0; i < vector_size; i++) //тут надо разбить текст который поступает на вход на лексемы (или токены)
    cout << check[i] << endl;
for (int i = 0; i < vector_size; i++) //считаю количество областей видимости
{
    if (check[i] == -1)
    scope_amount ++;
}
Variables *scopes = new Variables[scope_amount]; //sozday dinamic array

for (int i = 0; i < vector_size; i++){
    switch (check[i])
    {
    case -1:
     j++;
        
        break;
    case -2 :
     j--;
         //тут вызвать деструктор
        break;
    case -100:
        scopes[j].GetMemory(scope_amount, j, scopes);
        break;
    default:
        scopes[j].Create_new(check[i], scopes, j);
        break;
    }
    ;
}
// for (int i = 0; i < scope_amount; i++) //считаю количество областей видимости
// {
//         cout << scopes[i].GetVectorSize() << " ";

//     for (int m = 0; m < scopes[i].GetVectorSize(); m++)
//     {
//         cout << scopes[i].GetValueMem(m);
//     }
    
// }
// for (int i = 0; i < scope_amount; i++)
// {
//      delete []scopes; тут что-то не так с указателями
// }

/*void *malloc(size_t size);
void free(void *ptr);
https://clck.ru/py4FM



*/





//  cout << "\033[1;32mjob is done!\033[0m\n";

}