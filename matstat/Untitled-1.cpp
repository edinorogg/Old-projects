#include <iostream>
#include <math.h>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
double fder(double x)
{
    return (pow(M_E, -(x * x) / 2.00));
}
double Integral(double x)
{
    float h = x/1000.00;
    double temp_f = 0;
    for (int i = 1; i < 1001; i++)
        {

            temp_f = ((fder(h * (i - 1)) + fder(h * i)) * h * 0.5) + temp_f;
        }
        return(temp_f   /   (sqrt(2 * M_PI)) );
}
int main(){
    cout <<"Integral(0) \t" << Integral(0) << endl;
    cout <<"Integral(1) \t" << Integral(0.05) << endl;
    cout <<"Integral(2) \t" << Integral(2) << endl;
    cout <<"Integral(3) \t" << Integral(3) << endl;
    cout <<"Integral(4) \t" << Integral(4) << endl;
    cout <<"Integral(5) \t" << Integral(5) << endl;
    
}