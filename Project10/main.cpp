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
		else if (number / 1000 == 1)
		{
			cout << "one thousand";
		}
		else if (number / 1000 == 2)
		{
			cout << "two thousand";
		}
		else if (number / 1000 == 3)
		{
			cout << "three thousand";
		}
		else if (number / 1000 == 4)
		{
			cout << "four thousand";
		}
		else if (number / 1000 == 5)
		{
			cout << "five thousand";
		}
		else if (number / 1000 == 6)
		{
			cout << "six thousand";
		}
		else if (number / 1000 == 7)
		{
			cout << "seven thousand";
		}
		else if (number / 1000 == 8)
		{
			cout << "eight thousand";
		}
		else if (number / 1000 == 9)
		{
			cout << "nine thousand";
		}
	}
	//============================================
	if ((number / 100) % 100 != 1)
	{
		if (number / 100 == 0)
		{
			cout << "hundrend";
		}
		else if (number / 100 == 1)
		{
			cout << "one hundrend";
		}
		else if (number / 100 == 2)
		{
			cout << "two hundrend";
		}
		else if (number / 100 == 3)
		{
			cout << "three hundrend";
		}
		else if (number / 100 == 4)
		{
			cout << "four hundrend";
		}
		else if (number / 100 == 5)
		{
			cout << "five hundrend";
		}
		else if (number / 100 == 6)
		{
			cout << "six hundrend";
		}
		else if (number / 100 == 7)
		{
			cout << "seven hundrend";
		}
		else if (number / 100 == 8)
		{
			cout << "eight hundrend";
		}
		else if (number / 100 == 9)
		{
			cout << "nine hundrend";
		}
	}
	if ((number / 10) % 10 != 1)
	{
		if (number / 10 == 0)
		{
			cout << "hundrend";
		}
		else if (number / 10 == 1)
		{
			cout << "eleven";
		}
		else if (number / 10 == 2)
		{
			cout << "twelve";
		}
		else if (number / 10 == 3)
		{
			cout << "thretenn";
		}
		else if (number / 10 == 4)
		{
			cout << "fourteen";
		}
		else if (number / 10 == 5)
		{
			cout << "fifteen";
		}
		else if (number / 10 == 6)
		{
			cout << "sixteen";
		}
		else if (number / 10 == 7)
		{
			cout << "seventeen";
		}
		else if (number / 10 == 8)
		{
			cout << "eighteen";
		}
		else if (number / 10 == 9)
		{
			cout << "nineteen";
		}
	}
	if ((number / 100) % 100 != 1)
	{
		if (number % 10 == 0)
		{
			cout << "zero";
		}
		else if (number % 10 == 1)
		{
			cout << "one";
		}
		else if (number % 10 == 2)
		{
			cout << "two";
		}
		else if (number % 10 == 3)
		{
			cout << "three";
		}
		else if (number % 10 == 4)
		{
			cout << "four";
		}
		else if (number % 10 == 5)
		{
			cout << "five";
		}
		else if (number % 10 == 6)
		{
			cout << "six";
		}
		else if (number % 10 == 7)
		{
			cout << "seven";
		}
		else if (number % 10 == 8)
		{
			cout << "eight";
		}
		else if (number % 10 == 9)
		{
			cout << "nine";
		}
	}
}
