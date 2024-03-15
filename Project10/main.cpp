#include <iostream>
using namespace std;

int main()
{
	int number;
	int numderFirst, numberSecond, numberThird;
	cout << "Please enter the number ere 999: ";
	cin >> number;
	numderFirst = number / 100;
	numberSecond = (number / 10) % 10;
	numberThird = number % 10;
	cout << numderFirst + numberSecond + numberThird << "\n";
	cout << (numderFirst + numberSecond + numberThird) / 3;

	

	

}
