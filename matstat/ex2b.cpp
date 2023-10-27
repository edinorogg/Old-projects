#include <iostream>
#include <math.h>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
double func(double x)
{
    return (pow(M_E, -(x * x) / 2.00));
}
double fsec_der(double x)
{
    return ((pow(M_E, -(x * x) / 2.00) * -1 * x));
}
int main()
{
    setlocale(LC_ALL, "Russian");
    double temp_x = 0.1; //temp_x это приближённое значение x
    // n= 1000, h - интервал
    double xvalue = 0;     //промежуточное значение при вычислении интеграла
    double x, Integral = 0, temp_f = 0;
    double swch; //swch это переменная для обмена значений
    double h;
    int check;
    float acc = 0.1, user_value; //acc - аккуратность,vuser - пользовательское значение функции
    cout << "Пожалуйста, введите требуемое значение эпсилон. \n";
     cin >> acc;
    cout << "Пожалуйста, введите ваше значение f(x) \n";
    cin >> user_value;
 for (int j = 1; check != 1; j++){
     h = temp_x / 1000.00;
        for (int i = 1; i < 1001; i++)
        {

            temp_f = ((func(h * (i - 1)) + func(h * i)) * h * 0.5) + temp_f;
            Integral = temp_f / (sqrt(2 * M_PI));
        }
        temp_f = 0;
     if ((abs(user_value - Integral)) <= acc ){
            check = 1;
     }
     else{
      swch = temp_x;
      temp_x = swch - ( Integral /(func(swch) / sqrt(2 * M_PI) ) );
        cout << "(func(swch) \t" << func(swch) << endl; 
        cout << "(func(swch) / sqrt(2 * M_PI) = \t" << func(swch) / sqrt(2 * M_PI) << endl; 
        cout << " Integral / der = \t" << func(swch) / sqrt(2 * M_PI) << endl; 
        cout << " swch - (Integral/der)  = \t" << func(swch) / sqrt(2 * M_PI) << endl;
     }
    }
   cout << "\n Ваше значение x ~ " << temp_x;
}