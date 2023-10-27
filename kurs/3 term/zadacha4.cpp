#include <iostream>
#include <cmath>
int main() {
  double a,b,c;
    std::cin >> a >> b >> c;
    if (a == 0 && b == 0 && c == 0) {
      std::cout << "the number of solutions is infinite";
    }
    if (b == 0 && a!=0 && c!=0){
        if ((-c / a) >= 0){
            if (sqrt(-c/a) < -sqrt(-c/a)){
            std::cout << sqrt(-c/a) << " " << -sqrt(-c/a);
            }
            else std::cout << -sqrt(-c/a) << " " << sqrt(-c/a);
        }
       else std::cout << 0;
    }
    if (c == 0 && a!=0 && b != 0){
        int x1=0;
        double x2=-b/a;
        if(x1 > x2){
            std::cout  << " " << x2 << " " << x1;
        }
        else std::cout  << " " << x1 << " " << x2;
    }
    if (a == 0 && b != 0 && c != 0){
        std::cout <<-c/b ;
    }
    if ((a != 0 && b == 0 && c == 0 ) || (a == 0 && b !=0 && c == 0)){
        std::cout << 0;
    }
    if (a == 0 && b == 0 && c!=0){
        std::cout << 0;
    }
    if( a!=0 && b!= 0 && c !=0){    
        double d = b*b - (4*a*c);
        if (d==0){
            std::cout << -b/(2*a);
        }
        else if (d>0)
        {
            double x1 = (-b + sqrt(d)) / (2*a);
            double x2 = (-b - sqrt(d)) / (2*a);
            if(x1 > x2){
            std::cout << x2 << " " << x1 ;
            }
            else std::cout << x1 << " " << x2;

        }
        else {
            std::cout << 0;
        }
    }

  return 0;
}