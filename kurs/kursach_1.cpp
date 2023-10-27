#include <iostream>
#include <fstream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::vector;
int g_N(0);//допустимый размер оперативной памяти

class Variables
{
    private:
    vector <char*> amongus;
    vector <int> amonguscapacity; 
    public:
int Create_new(int n, int j, int temp_N, Variables *scopes, int scopes_amount){
if (temp_N + n <= g_N){
    if (n > 0){
        char *ptr = new char[n]();
         for (size_t i = 0; i < n; i++)
        {
            ptr[i] = '9';
        }
        amongus.push_back(ptr);
        amonguscapacity.push_back(n);
    }
    else{
        cout << "Невозможно создать переменную вместимостью " << n << endl;
        exit(0);
    }
    return(temp_N + n);
}
    else { //запустить процесс освобождения памяти;
        int old = 0; //храню размер уничтоженной старой переменной
        int empties = 0;
        int i = 0;
        for(int m = 0; temp_N + n > g_N; m++){
            for (i = empties; i < scopes_amount; i++){
            if( !scopes[i].amongus.empty()){
                char *temp_point;
                temp_point = scopes[i].amongus.back();
                temp_point = nullptr;
                scopes[i].amongus.pop_back();
                old = scopes[i].amonguscapacity.back();
                scopes[i].amonguscapacity.pop_back();
                temp_N = temp_N - old;
            break;
            }
            else{
                empties++;
                if(empties == scopes_amount){
                    cout << "Все области пусты. Либо вы задали слишком маленький параметр, либо программа больше не может выделить память" << endl;
                    temp_N += n;
                    for (int i = 0; i < scopes_amount; i++)
                        {
                            scopes[i].Print(scopes_amount);
                        }
                        exit(0);
                }
            }
          }
            if(m > 10){
                cout << "Ouch, you've crushed my programm >_<, try other parameters " << endl;
                exit(0);
            }
        }
        char *ptr = new char[n]();
        for (size_t i = 0; i < n; i++)
        {
            ptr[i] = '9';
        }
        amongus.push_back(ptr);
        amonguscapacity.push_back(n);
        return(temp_N+n);
    }
}
    
    void Print(int temp_scopes){
            if (amongus.empty()) 
                cout << "Scope is empty" << endl;
            else{
                cout << "vector of values: ";
                for (size_t i = 0; i < amongus.size(); i++)
                {
                    cout << amonguscapacity.at(i) << ' ';
                }
                cout << '\n';
                cout <<  "vector of adresses: " << "\n";
                for (size_t i = 0; i < amongus.size(); i++)
                {
                    cout << (void* )amongus[i] << '\n';
                }
                cout << '\n';

                
        }
        

    }
    void GetValueMem(){
        for (int i = 0; i < amongus.size(); i++){
          
            cout <<" \tvar [" << i << "] memory is: " << amonguscapacity.at(i) << endl; 
        }
    }
    void GetMemory( int j, Variables *scopes){
        cout << "Current amount of scopes " <<  j << endl; 

        for (int count = 0; count < j; count++){ 
        
            if (scopes[count].amongus.empty())
                cout <<"Scope " << count <<" is empty " << endl;
            else{
                cout << " Scope " << count << ": " << endl;
                scopes[count].GetValueMem();
            }
        }
    }  
    Variables(){
        // cout << "Создана новая область" << endl;
    }    
    ~Variables(){
       int memory = amongus.size();
       for (auto i : amongus)
       {
           delete[] i; 
       }
       amongus.clear();
       amonguscapacity.clear();
       cout << "\n" <<"Вызван деструктор" << endl;
    }
};
int main(){
    string line, input, line2;    
    int temp_N = 0; //здесь мы отслеживаем сколько памяти у нас есть
    int scope_amount = 0;
    vector<int> check;
    vector<string> list;
    string temp_st;
    string forskb; //"чтобы хранить скобку"
    string temp_st2; //"тут хранится размер создаваемой переменной"
    int first = 0, second = 0, j = 0;
    ifstream in;
    in.open("E:\\kursovaya\\other\\list.txt");
        if(in.is_open()){
            while(getline(in, line)){
                list.push_back("E:\\kursovaya\\other\\" + line + ".txt");
            }
        }
    in.close();
    for (auto i : list){
        cout << i << endl;
     }
    for (auto i : list)
    {
        temp_N=0;
        string root = i;
        ifstream in_2;
        in_2.open(root); //in.open("E:\\kursovaya\\main.txt"); in.open("E:\\kursovaya\\test1.txt");
                if( in_2.is_open() )
                {
                    cout << "file: " << i << " is open" << endl;
                    while(getline(in_2, line2))
                    {
                        for(auto sy : line2)
                        {   
                                input += sy;
                        }
                        
                    }
                }
                else return -1;
        in_2.close();
        cout << "Пожалуйста, сообщите максимально доступный размер оперативной памяти. \n";
        // g_N = 30;
        cin >> g_N;
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
                    for(int m = first; m < second; m++){ 
                        temp_st2 += temp_st[m];
                    }
                    try
                    {
                    int res = stoi(temp_st2);
                    if( res > 0 )
                    check.push_back(res);
                    else{
                        cout << "ERROR 2: Unclear value of memory. There is a mistake! Please, check your instructions." << endl;
                        cout << "Your memory value is " <<  temp_st2 << endl;
                        cout << "File name is " << root << endl;
                    }
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
    input.clear();
    int vector_size = check.size();
    // for (int i = 0; i < vector_size; i++) //вывод обработанной программы
    //     cout << check[i] << endl;
    for (int i = 0; i < vector_size; i++) //считаю количество областей видимости
    {
        if (check[i] == -1)
        scope_amount ++;
    }
    cout << "Total amount of scopes " <<  scope_amount << endl; 

    Variables *scopes = new Variables[scope_amount]; //sozday dinamic array

    for (int i = 0; i < vector_size; i++){
        switch (check[i])
        {
        case -1:
        j++;      
            break;
        case -2 :
        j--;
            break;
        case -100:
            scopes[j].GetMemory(j, scopes);
            break;
        default:
            temp_N = scopes[j-1].Create_new(check[i], j, temp_N, scopes,scope_amount); //j-1, т.к массив начинается от нуля
            break;
        };
    }
    //
    // for (int i = 0; i < scope_amount; i++) //считаю количество областей видимости 
    // {
    //     scopes[i].Print(scope_amount);
    // }
    delete[] scopes;
    scope_amount = 0;
    int temp_N = 0;
    check.clear();
    cout << "\nФайл обработан успешно" << endl;
    }
cout << "\nВыполнение программы завершено";
cout << "\n\033[1;32mjob is done!\033[0m\n";
return 0;
}





