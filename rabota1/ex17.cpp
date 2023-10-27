#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
	int sys, decimal, length = 0, num[30];
	char number[30];
	fstream input, output;
	ofstream file("1output.txt");
	file.close();
	
	input.open("1input.txt");
	output.open("1output.txt");
	while (!input.eof())
	{
		input >> number; //Импортируем изначальное число

		//Переводим цифры в 10 и записываем в массив
		for (int i = 0; number[i] != '\0'; i++)
		{
			if (isdigit(number[i]))
				num[i] = int(number[i] - 48); //Цифры в ASСII начинаются с 48 пункта (0)
			else
				num[i] = int(number[i] - 55); //Буквы - с 65 (А)
			length++;
		}

		//Система счисления
		sys = 0;
		for (int i = 0; number[i] != '\0'; i++)
		{
			if (num[i] + 1 > sys)
				sys = num[i] + 1;
		}

		//Перевод числа в 10
		decimal = 0;
		for (int i = 0; number[i] != '\0'; i++)
		{
			decimal += num[i] * pow(sys, length - 1);
			length--;
		}

		output << "Number " << number << "\nNumeral system " << sys << "\nDecimal " << decimal << endl << endl;

	}

	input.close();
	output.close();
	return 0;
}