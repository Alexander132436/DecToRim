//Написать функцию, которая принимает строку — запись натурального числа(до 4000) и возвращает строку,
//содержащую запись этого числа римскими цифрами.
//Например, из строки
//"961"
//должна получиться строка
//"CMLXI"

#include <iostream>
#include <string>

using namespace std;
string DublEd(int z, string str1) 
{
	if (z == 10)
	{
		str1 = "X";
	}
	if (z == 9)
	{
		str1 = "IX";
	}
	if (z == 8)
	{
		str1 = "VIII";
	}
	if (z == 7)
	{
		str1 = "VII";
	}
	if (z == 6)
	{
		str1 = "VI";
	}
	if (z == 5)
	{
		str1 = "V";
	}
	if (z == 4)
	{
		str1 = "VI";
	}
	if (z == 3)
	{
		str1 = "III";
	}
	if (z == 2)
	{
		str1 = "II";
	}
	if (z == 1)
	{
		str1 = "I";
	}
	return str1;
}
string DubDec(int z, string str1) 
{
	if (z % 10 == 9)
	{
		str1 += "IX";
	}
	if (z % 10 == 8)
	{
		str1 += "VIII";
	}
	if (z % 10 == 7)
	{
		str1 += "VII";
	}
	if (z % 10 == 6)
	{
		str1 += "VI";
	}
	if (z % 10 == 5)
	{
		str1 += "V";
	}
	if (z % 10 == 4)
	{
		str1 += "IV";
	}
	if (z % 10 == 3)
	{
		str1 += "III";
	}
	if (z % 10 == 2)
	{
		str1 += "II";
	}
	if (z % 10 == 1)
	{
		str1 += "I";
	}
	return str1;
}
string DublHun(int z, string str1)
{
	if (int(z / 10) % 10 == 9)
	{
		str1 += "XC";
	}
	if (int(z / 10) % 10 == 8)
	{
		str1 += "LXXX";
	}
	if (int(z / 10) % 10 == 7)
	{
		str1 += "LXX";
	}
	if (int(z / 10) % 10 == 6)
	{
		str1 += "LX";
	}
	if (int(z / 10) % 10 == 5)
	{
		str1 += "L";
	}
	if (int(z / 10) % 10 == 4)
	{
		str1 += "XL";
	}
	if (int(z / 10) % 10 == 3)
	{
		str1 += "XXX";
	}
	if (int(z / 10) % 10 == 2)
	{
		str1 += "XX";
	}
	if (int(z / 10) % 10 == 1)
	{
		str1 += "X";
	}
	str1=DubDec(z, str1);
	return str1;
}
string DublTh(int z, string str1) 
{
	
	if (int(z / 100) % 10 == 9)
	{
		str1 += "CM";
	}
	if (int(z / 100) % 10 == 8)
	{
		str1 += "DCCC";
	}
	if (int(z / 100) % 10 == 7)
	{
		str1 += "DCC";
	}
	if (int(z / 100) % 10 == 6)
	{
		str1 += "DC";
	}
	if (int(z / 100) % 10 == 5)
	{
		str1 += "D";
	}
	if (int(z / 100) % 10 == 4)
	{
		str1 += "CD";
	}
	if (int(z / 100) % 10 == 3)
	{
		str1 += "CCC";
	}
	if (int(z / 100) % 10 == 2)
	{
		str1 += "CC";
	}
	if (int(z / 100) % 10 == 1)
	{
		str1 += "C";
	}
	str1 = DublHun(z, str1);
	return str1;
}
string DecToRim(int& z, string& str1) 
{
	if (z >= 4000)
	{
		cout << "Невозможно преобразовать в Римское число";
	}
	if (z <= 3999 && z >= 1000)
	{
		if (int(z / 1000) == 3)
		{
			str1 = "MMM" + DublTh(z, str1);
		}
		if (int(z / 1000) == 2)
		{
			str1 = "MM" + DublTh(z, str1);
		}
		if (int(z / 1000) == 1)
		{
			str1 = "M" + DublTh(z, str1);
		}
	}
	if (z < 1000 && z >= 100)
	{
		if (z / 100 == 9)
		{
			str1 = "CM" + DublHun(z, str1);
		}
		if (z / 100 == 8)
		{
			str1 = "DCCC" + DublHun(z, str1);
		}
		if (z / 100 == 7)
		{
			str1 = "DCC" + DublHun(z, str1);
		}
		if (z / 100 == 6)
		{
			str1 = "DC" + DublHun(z, str1);
		}
		if (z / 100 == 5)
		{
			str1 = "D" + DublHun(z, str1);
		}
		if (z / 100 == 4)
		{
			str1 = "CD" + DublHun(z, str1);
		}
		if (z / 100 == 3)
		{
			str1 = "CCC" + DublHun(z, str1);
		}
		if (z / 100 == 2)
		{
			str1 = "CC" + DublHun(z, str1);
		}
		if (z / 100 == 1)
		{
			str1 = "C" + DublHun(z, str1);
		}
	}
	if (z < 100 && z >= 10)
	{
		if (z / 10 == 9)
		{
			str1 = "XC" + DubDec(z, str1);
		}
		if (z / 10 == 8)
		{
			str1 = "LXXX" + DubDec(z, str1);
		}
		if (z / 10 == 7)
		{
			str1 = "LXX" + DubDec(z, str1);
		}
		if (z / 10 == 6)
		{
			str1 = "LX" + DubDec(z, str1);
		}
		if (z / 10 == 5)
		{
			str1 = "L" + DubDec(z, str1);
		}
		if (z / 10 == 4)
		{
			str1 = "XL" + DubDec(z, str1);
		}
		if (z / 10 == 3)
		{
			str1 = "XXX" + DubDec(z, str1);
		}
		if (z / 10 == 2)
		{
			str1 = "XX" + DubDec(z, str1);
		}
		if (z / 10 == 1)
		{
			str1 = "X" + DubDec(z, str1);
		}
	}
	if (z < 10 && z >= 1)
	{
		str1 = DublEd(z, str1);
	}
	return str1;
}

int main() 
{
	setlocale(LC_ALL, "");
	string str;
	cout << "Введите чисто в десятичной системе счисления: ";
	cin >> str;
	int z =stoi(str);
	string str1;
	DecToRim(z, str1);
	cout<<"Число в Римской системе счисления: "<<str1;
}