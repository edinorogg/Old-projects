#include <iostream>
using namespace std;
main(){
    int days, hours, minutes, seconds2;
    long sec;
    cin >> sec;
    days = sec / 86400;
    hours = sec % 86400 / 3600;
    minutes = sec % 86400 % 3600 / 60;
    seconds2 = sec % 86400 % 3600 % 60;
    cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds2 << " seconds";
    return 0;
}