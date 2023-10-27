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
int main()
{
    int choice;
    setlocale(LC_ALL, "Russian");
    cout << "Пожалуйста, укажите желаемый способ вычисления приближённого значения\n"
         << "1 - метод прямоугольников\n"
         << "2 - метод трапеций\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        double h, x, function, xvalue, temp_f = 0;
        h = 5.00 / 1000;
        cout << "this is h " << h << "\n";
        for (int i = 1; i != 1000; i++)
        {
            x = (i - 1) * h;
            // cout << "x = " << x << " ";
            xvalue = x + (h * 0.5);
            // cout << "xvalue = " << xvalue << " ";
            temp_f = func(xvalue) + temp_f;
            //cout << "temp_f = " << temp_f << " ";
            function = (temp_f * h) / (sqrt(2 * M_PI)); 
            cout << std::setprecision(5) << 0.005 * i ;
            cout.setf(std::ios::left);
            cout << " = " << std::setprecision(5)  << function << "\t";
            if (i % 4 == 0)
                cout << "\n";
        }
        break;
    }
    case 2:
    {
        double h, function, xvalue, x1 = 0, x2 = 0, temp_f = 0;
        h = 5.00 / 1000;
        cout << "this is h " << h << "\n";
        for (int i = 1; i < 1001; i++){
            temp_f = ((func(h*(i-1)) + func(h*i)) * h * 0.5) + temp_f;
            function = temp_f / (sqrt(2 * M_PI)); 
            cout << std::setprecision(5) << 0.005 * i ;
            cout << " = " << std::setprecision(5)  << function << "\t";
            if (i % 4 == 0)
                cout << "\n";
        }
        break;
    }
    }
}