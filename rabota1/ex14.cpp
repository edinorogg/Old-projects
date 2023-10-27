#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string line, n = "";
    // int temp_s;
    ifstream in;
    ofstream out;
    string s, w, w2;
    int m =0, first = 0, second;
    int i = 0;
    in.open("E:\\files\\ex14_1.txt");
    if (in.is_open())
    {   while (getline(in, line)){
            while(i < line.length()){
                if (!isdigit(line[i])){ // isdigit() возвращает ненулевое значение, если аргумент ch является цифрой от 0 до 9, в противном случае возвращается 0.
					n+=to_string(int(line[i]));
                    // temp_s=int(line[i]);
                    // n+= string(temp_s);
                }
				else{
                    n += line[i];
                }
                
                i++;
            }
            i=0;
            n+='\n';
        }
    }
    in.close();
    out.open("E:\\files\\ex14_1.txt");
    if (out.is_open())
    {
        out << n;
    }
    out.close();
    cout << "\033[1;32mjob is done!\033[0m\n";
}