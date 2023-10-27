#include <iostream>
#include <math.h>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
double fder(double x)
{
    return (pow(M_E, -(x * x) / 2.00) /(sqrt(2 * M_PI) ));
}

double Integral(double x)
{
    float h = x/1000.00;
    double temp_f = 0;
    for (int i = 1; i < 1001; i++)
        {

            temp_f = ((fder(h * (i - 1)) + fder(h * i)) * h * 0.5) + temp_f;
        }
        return(temp_f/(sqrt(2 * M_PI)) );
}
int main(){
    
    setlocale(LC_ALL, "Russian");
    double acc = 0.01, user_value, swch,temp_x0 = 0.05, temp_x1 = 6;
    bool check = 0;
    cout << "Please, tell me your acc" << endl;
    // cin >> acc;
    cout << "Please, tell me your f(x) value" << endl;
    cin >> user_value; 
    if (abs(Integral(temp_x0) - user_value) <= acc){ 
        cout << "\n Ваше значение x ~ " << temp_x0;
        check = 1;
    }
    double derdelder2, func_xk;
    if (user_value == 0){
        cout << 0;
        check = 1;
    }
    while(check != 1){
        derdelder2 = (Integral(temp_x0) - user_value)/(fder(temp_x0) - user_value);
        cout << fder(temp_x0);
        temp_x1 =  temp_x0 - derdelder2;
        temp_x0 = temp_x1;
        if(abs(temp_x1 - temp_x0)<=acc){
            check = 1;
        }
    cout << "\n Ваше значение x ~ " << temp_x0;
    }
cout << "\n Ваше значение x ~ " << temp_x0;
    return 0;
}