#include <iostream>
#include <math.h>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::string;
double func(double x)
{
    return (pow(M_E, -(x * x) / 2.00));
}
double Integral(double x)
{
    float h = x/1000.00;
    double temp_f = 0;
    for (int i = 1; i < 1001; i++)
        {

            temp_f = ((func(h * (i - 1)) + func(h * i)) * h * 0.5) + temp_f;
        }
        return( temp_f / (sqrt(2 * M_PI)) );
}
int main(){
    setlocale(LC_ALL, "Russian");
    bool check;
    string s;
    double acc, a = -1, b = 10.00;
    double c = (a + b) / 2.00;
    double user_value;
    cout << "please, tell me your accuracy " << endl;
    cin >> acc;
    cout << "please, tell me ur function value " << endl;
    cin >> user_value;
    if ((abs(Integral(c) - user_value)) <= acc) cout << c << "\t" << endl;
    else {
        while ( check !=1 ){
            cout << Integral(a) << "\t";
            cout << Integral(b) << "\t";
            cout << Integral(c) << "\t" << endl;
           cout << " int a * int b = " << ((Integral(a) - user_value) * (Integral(c)- user_value)) << "\t" << endl;
            cout << " Integral(b)      "  <<  Integral(b) << endl;
            cout << " user_value     "  <<  user_value << endl;
           cout << " Integral(a) - user_value =   "  <<  Integral(a)- user_value  << endl;
           
            if( ((Integral(a) - user_value) * (Integral(c)- user_value)) <= 0){
                b = c;
                c = (a+b)/2;

            }
            else if ( ((Integral(c) - user_value) * (Integral(b)- user_value)) <= 0){
                a = c;
                c = (a+b)/2;
            }
            if (abs ((Integral(c) - user_value) ) <= acc){
                check = 1;
            }

        }
        cout << "It's ur x = " << c;
    }
}