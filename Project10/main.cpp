#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Enter the number ere 9999: ";
	cin >> number;
	if ((number / 1000) % 1000 != 1)
	{
		if (number / 1000 == 0)
		{
			cout << "rub";
		}
		if (number / 1000 == 1)
		{
			cout << "one thousand";
		}
		if (number / 1000 == 2)
		{
			cout << "two thousand";
		}
		if (number / 1000 == 3)
		{
			cout << "three thousand";
		}
		if (number / 1000 == 4)
		{
			cout << "four thousand";
		}
		if (number / 1000 == 5)
		{
			cout << "five thousand";
		}
		if (number / 1000 == 6)
		{
			cout << "six thousand";
		}
		if (number / 1000 == 7)
		{
			cout << "seven thousand";
		}
		if (number / 1000 == 8)
		{
			cout << "eight thousand";
		}
		if (number / 1000 == 9)
		{
			cout << "nine thousand";
		}
	}
	//============================================
	if ((number / 100) % 100 != 1)
	{
		if (number / 100 == 0)
		{
			cout << "no hundrends";
		}
		if (number / 100 == 1)
		{
			cout << "one hundrends";
		}
		if (number / 100 == 2)
		{
			cout << "two hundrends";
		}
		if (number / 100 == 3)
		{
			cout << "three hundrends";
		}
		if (number / 100 == 4)
		{
			cout << "four hundrends";
		}
		if (number / 100 == 5)
		{
			cout << "five hundrends";
		}
		if (number / 100 == 6)
		{
			cout << "six hundrends";
		}
		if (number / 100 == 7)
		{
			cout << "seven hundrends";
		}
		if (number / 100 == 8)
		{
			cout << "eight hundrends";
		}
		if (number / 100 == 9)
		{
			cout << "nine hundrends";
		}
	}
}