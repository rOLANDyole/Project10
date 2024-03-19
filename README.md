#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	/*int l;
	int k; // выбор пиццы
	int number;
	int numbers;
	float waluete = 1;
	float raluete = 1.5;
	float aluete = 0.5;
	float taluete = 1.5;
	float yaluete = 1;
	float valuete; // валюта
	int Quentity;
	int secondQuentity;
	int thirdQuentity;
	int fourthQuentity;
	int fifthQuentity;
	int sixthQuentity;
	int seventhQuentity;
	valuete = 6.64;
	cout << "Выберете товар:\n";
	cout << "1)Пипперони - $ 6,64\n 2)Двойной цыпленок - $ 6,64\n 3)Барбекю - $ 6,64\n 4)Четыре сыра - $ 6,64\n";
	cin >> k;
	cout << "1) Кола - $ 1\n 2) Сок - $ 1,5\n 3) Вода - $ 0,5\n 4) Холодный чай - $ 1,5\n 5) Чай - $ 1\n";
	cin >> l;
	cout << "Выберете Количество пицц до 7 штук\n";
	cin >> number;
	if (number == 2)
	{
		cout << "Хотите выбрать еще?\n";
		cout << "1)Пипперони - $ 6,64\n 2)Двойной цыпленок - $ 6,64\n 3)Барбекю - $ 6,64\n 4)Четыре сыра - $ 6,64\n";
		cin >> Quentity;
		cout << valuete * 2 << "\n";
	}
	else if (number == 3)
	{
		cout << "Хотите выбрать еще?\n";
		cout << "1)Пипперони - $ 6,64\n 2)Двойной цыпленок - $ 6,64\n 3)Барбекю - $ 6,64\n 4)Четыре сыра - $ 6,64\n";
		cin >> secondQuentity;
		cout << valuete * 3 << "\n";
	}
	else if (number == 4)
	{
		cout << "Хотите выбрать еще?\n";
		cout << "1)Пипперони - $ 6,64\n 2)Двойной цыпленок - $ 6,64\n 3)Барбекю - $ 6,64\n 4)Четыре сыра - $ 6,64\n";
		cin >> thirdQuentity;
		cout << valuete * 4 << "\n";
	}
	else if (number == 5)
	{
		cout << "Хотите выбрать еще?";
		cout << "1)Пипперони - $ 6,64\n 2)Двойной цыпленок - $ 6,64\n 3)Барбекю - $ 6,64\n 4)Четыре сыра - $ 6,64\n";
		cin >> fourthQuentity;
		cout << valuete * 5 << "\n";
	}
	else if (number == 6)
	{
		cout << "Хотите выбрать еще?\n";
		cout << "1)Пипперони - $ 6,64\n 2)Двойной цыпленок - $ 6,64\n 3)Барбекю - $ 6,64\n 4)Четыре сыра - $ 6,64\n";
		cin >> fifthQuentity;
		cout << valuete * 6 << "\n";
	}
	else if (number == 7)
	{
		cout << "Хотите выбрать еще?\n";
		cout << "1)Пипперони - $ 6,64\n 2)Двойной цыпленок - $ 6,64\n 3)Барбекю - $ 6,64\n 4)Четыре сыра - $ 6,64\n";
		cin >> sixthQuentity;
		cout << valuete * 7 << "\n";
	}
	else if (number == 1)
	{
		cout << "Хотите выбрать еще?\n";
		cout << "1)Пипперони - $ 6,64\n 2)Двойной цыпленок - $ 6,64\n 3)Барбекю - $ 6,64\n 4)Четыре сыра - $ 6,64\n";
		cin >> seventhQuentity;
		cout << valuete * 1 << "\n";
	}
	cout << "Выберете количество напитков от 2 до 5 стаканов: ";
	cin >> numbers;
	if (numbers == 2)
	{
		if (l == 1)
		{
			l == waluete;
		}
		if (l == 2)
		{
			l == waluete;
		}
		if (l == 3)
		{
			l == waluete;
		}
		if (l == 4)
		{
			l == waluete;
		}
		if (l == 5)
		{
			l == waluete;
		}
		cout << waluete * 2;
	}
	else if (numbers == 3)
	{
		if (l == 1)
		{
			l == raluete;
		}
		if (l == 2)
		{
			l == raluete;
		}
		if (l == 3)
		{
			l == raluete;
		}
		if (l == 4)
		{
			l == raluete;
		}
		if (l == 5)
		{
			l == raluete;
		}
		cout << raluete * 3;
	}
	else if (numbers == 4)
	{
		if (l == 1)
		{
			l == taluete;
		}
		if (l == 2)
		{
			l == taluete;
		}
		if (l == 3)
		{
			l == taluete;
		}
		if (l == 4)
		{
			l == taluete;
		}
		if (l == 5)
		{
			l == taluete;
		}
		cout << taluete * 4;
	}
	else if (numbers == 5)
	{
		if (l == 1)
		{
			l == yaluete;
		}
		if (l == 2)
		{
			l == yaluete;
		}
		if (l == 3)
		{
			l == yaluete;
		}
		if (l == 4)
		{
			l == yaluete;
		}
		if (l == 5)
		{
			l == yaluete;
		}
		cout << yaluete * 5;
	}*/
	/*\int x;
	int a;
	int b;
	int c;
	float equation;
	cout << "Введите уровнение пример: a(x * x) + bx - c";
	cin >> equation;*/
	//int choose[ размер массива. ];
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		
		for (int j = 0; j < 10; j++)
		{
			if (arr[i] == arr[j])
			{
				cout << i << j;
			}

		}
		
	}



	

	

	
	return 0;
}
