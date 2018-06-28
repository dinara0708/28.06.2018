#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>
#include <iostream>
#include <iomanip> 

using namespace std;

void main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	int tn = 0;

start:

	printf("task number:\t");
	scanf("%d", &tn);

	switch (tn)
	{
	case 1:
	{
		for (int k = 0; k < 3; k++)
		{
			for (int i = 0; i < 5; i++)
			{
				cout << "a ";
			}
			cout << endl;
		}
		cout << endl;
	}
	break;
	case 2:
	{
		for (int k = 0; k < 15; k++)
		{
			for (int i = 0; i < 7; i++)
			{
				cout << "R";
			}
			cout << endl;
		}
		cout << endl;
	}
	break;
	case 3:
	{
		for (int k = 0; k < 5; k++)
		{
			if(k==0 || k==4)
			{
			for (int i = 0; i < 3; i++)
				{
					cout << "&";
				}
			cout << endl;
			}
			else
			{
				cout << "&";
				for (int i = 0; i < 1; i++)
				{
					cout << " ";
				}
				cout << "&" << endl;
			}
		}
		cout << endl;
	}
	break;
	case 4:
	{
		for (int k = 0; k < 3; k++)
		{
			for (int i = 0; i < 5; i++)
			{
				if((k==0||k==2)||(i==0||i==4))
				cout << "R";

				else cout << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	break;
	case 5:
	{
		int n;
		cout << "Введите число:" << endl;
		cin >> n;
		int x=0;
		double sum = 0;
		double sred = 0;
		int k = 0;
		int null = 0;
		int q = 0;
		int var = 0;
		
		while (var != 1)
		{
			cout << "Выберите из вариантов операций: 1 - количество цифр в числе, 2 - сумма всех цифр, 3 - их среднее арифметичекое, 4 - количество нулей в числе" << endl;
			cin >> q;

			while (n != 0)
			{
				x = n % 10;
				sum = sum + x;
				k++;
				if (x = 0) null++;
				n = n / 10;
			}
			sred = sum / k;

			if (q == 1) cout << k << endl;
			else if (q == 2) cout << sum << endl;
			else if (q == 3) cout << sred << endl;
			else if (q == 4) cout << null << endl;

			cout << " 1- exit or 2 - continue?" << endl;
			cin >> var;
		}
	}
	break;
	case 6:
	{
		int a, b;
		cout << "Введите параметры доски:"<< endl;
		cin >> a >> b;
		char r = '*', p = '_';
		for (int k = 0; k < a; k++)
		{
			for (int i = 0; i < b; i++)
			{
				if ((i % 2 == 0 && k % 2 == 0) || (i % 2 != 0 && k % 2 != 0))
				{
					for (int n = 0; n < 3; n++)
					{
						for (int c = 0; c < 9; c++)
						{
							cout << r;
							if (c % 3 == 0) cout << endl;
						}
					}
					cout << endl;
				}
				else
				{
					for (int n = 0; n < 3; n++)
					{
						for (int c = 0; c < 9; c++)
						{
							cout << p;
							if (c % 3 == 0) cout << endl;
						}
					}
					cout << endl;
				}
			}
		cout << endl;
		}
	}
	break;
	case 7:
	{
		int n, m, k;
		char a = '*', b = '_';
		cin >> n >> m >> k;
		for (int i = 0; i < n; i++)
		{
			swap(a, b); // функция меняет местами переменные
			for (int ii = 0; ii < k; ii++)
			{
				for (int j = 0; j < m / 2; j++)
				{
					for (int jj = 0; jj < k; jj++)
						cout << a;
					
					for (int jj = 0; jj < k; jj++)
						cout << b;
				}
				cout << endl;
			}
		}
		cout << endl;
	}
	break;
	case 8:
	{
		int n, m;
		char a = '*', b = '_';
		cin >> n >> m;
		for (int i = 0; i < n; i++)
		{

			for (int j = 0; j < m; j++)
			{
				if ((i + j) % 2 == 0)
				{
					for (int c = 0; c < 9; c++)
					{
						cout << a;
						if (c % 3 == 0) cout << endl;
					}
				}
				else
				{
					for (int c = 0; c < 9; c++)
					{
						cout << b;
						if (c % 3 == 0) cout << endl;
					}
				}
			}
			cout << endl;
		}
	}
	break;
	case 9:
	{
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i >= j) cout << "+";
				else cout << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	break;
	case 10:
	{
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i <= j) cout << "+";
				else cout << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	break;
	case 11:
	{
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i+j==n-1) cout << "+"; //if (i+j>=n-1) if (i+j<=n-1)
				else cout << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	break;
	case 12:
	{
		int i = 303; //действительны в диапозоне от 0 до 255, потом будут срезаться - введеное число %256 и смотрит по остатку!
		cout << char(i) << endl;
		char c = 'Z';
		cout << (int)c << endl; //сказали компу вывести эту переменную в численном значении
	}
	break;
	case 13:
	{
		for (int i = 0; i < 256; i++)
		{
			cout << i << " " << char(i) << endl;
		}
	}
	break;
	case 14:
	{
		int n;
		cin >> n;
		int sum = 0;
		while (n != 0)
		{
			sum = sum * 10 + n % 10;
			n /= 10;
		}
		cout << sum*5 << endl; //cout << sum*5 << endl; - выводит число наоборот в пятикратном размере например
	}
	break;
	case 15:
	{
		int n;
		cin >> n;
		int i = 1;
		int x = 0;
		while (i < n)
		{
			if (n%i == 0) cout << i << endl;;
			i++;
		}
		cout << endl;
	}
	break;
	case 16:
	{
		char c;
		int k = 0, i=0, j=0, n=0;
		while (cin.get(c))
		{
			if (c == ' ') k++;
			else if (isdigit(c)) i++;
			else if (isalpha(c)) j++;
			else n++;
		}
		cout << "пробелов: " << k << "\tцифр: " << i << "\tбукв: " << j << "\tдругих символов: " << n-2 << endl;  //ctrl Z - выход из консольного ввода
	}
	break;
	default:
		printf("\nerror: no tasks\n\n");
	}
	goto start;
}