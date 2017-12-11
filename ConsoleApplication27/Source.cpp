#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<math.h>

using namespace std;

int main()
{
bbb:
	setlocale(LC_ALL, "rus");
	int N;
	cout << "введите номер задания:" << endl;
	cin >> N;
	if (N == 1)
	{
#pragma region 
		/*1.	Определить, является ли данное целое число четным*/
		int x;
		cout << "введите число:" << endl;
		cin >> x;
		if ((x % 2) == 0)
		{
			cout << "четное" << endl;
		}
		else
		{
			cout << "нечетное" << endl;
		}
#pragma endregion
	}
	else if (N == 2)
	{
#pragma region
		/*2.	Записать условие, которое является истинным , когда  целое А кратно двум или трем.*/
		int A;
		cout << "введите число A" << endl;
		cin >> A;
		if (((A % 2) == 0) && ((A % 3) == 0))
		{
			cout << "истина" << endl;
		}
		else {
			cout << "ложь" << endl;
		}
#pragma endregion
	}
	else if (N == 3)
	{
#pragma region
		/*3.	Записать условие, которое является истинным, когда каждое из чисел  А и В нечетное.*/
		int A;
		int B;
		cout << "введите число А" << endl;
		cin >> A;
		cout << "введите число В" << endl;
		cin >> B;
		if (((A % 2) != 0) && ((B % 2) != 0))
		{
			cout << "истина" << endl;
		}
		else
		{
			cout << "ложь" << endl;
		}
#pragma endregion
	}
	else if (N == 4)
	{
#pragma region
		/*4.	Вычислить значение логических выражений при следующих значениях логических переменных X=0, Y=0, Z=1
		a.	X<Y>Z
		b.	X>Y
		c.	(X>Z)<Y
		*/
		int X = 0;
		int Y = 0;
		int Z = 1;
		if (X<Y>Z)
		{
			cout << "истина" << endl;
		}
		if (X>Y)
		{
			cout << "истина" << endl;
		}
		if ((X>Z)<Y)
		{
			cout << "истина" << endl;
		}
		else
		{
			cout << "ложь" << endl;
		}
#pragma endregion
	}
	else if (N == 5)
	{
#pragma region
		/*5.	Записать логическое выражение, описывающее область определения функции
		a.	y=2tg x;
		b.	у=3/(x-1).
		*/
		int x;
		cout << "введите х:" << endl;
		cin >> x;
		int y = 2 * tan(x);
		int y2 = 3 / (x - 1);
		cout << "y = 2 * tan(x)=" << y << endl;
		cout << "y2 = 3 / (x - 1)=" << y2 << endl;
#pragma endregion
	}
	else if (N == 6)
	{
#pragma region
		/*6.	Вычислить значения логических выражений при следующих значениях логических переменных А=1, В=0, С=1
		a.	A<(A>B)<C
		b.	A<C>(B<C)
		c.	(A<B>C)<A
		*/
		int A = 1;
		int B = 0;
		int C = 1;
		if (A < (A > B) < C)
		{
			cout << "1истина" << endl;
		}
		if (A<C>(B < C))
		{
			cout << "2истина" << endl;
		}
		if ((A<B>C) < A)
		{
			cout << "3истина" << endl;
		}
		else
		{
			cout << "ложь" << endl;
		}

#pragma endregion
	}
	else if (N == 7)
	{
#pragma region
		/*7.	Записать логическое выражение определяющее, что число А является трехзначным.*/
		int A;
		cout << "введите число A" << endl;
		cin >> A;
		if ((A > 99) && (A<1000))
		{
			cout << "число трехзначное" << endl;
		}
		else
		{
			cout << "не трехзначное" << endl;
		}
#pragma endregion
	}
	else if (N == 8)
	{
#pragma region MyRegion
		/*8.	Записать условие, которое является истинным, когда только одно из чисел А, В и С меньше 45*/
		int A;
		int B;
		int C;
		cout << "введите число А" << endl;
		cin >> A;
		cout << "введите число B" << endl;
		cin >> B;
		cout << "введите число C" << endl;
		cin >> C;
		if ((A < 45) || (B < 45) || (C < 45))
		{
			cout << "Истина" << endl;
		}
		else
		{
			cout << "Ложь" << endl;
		}
#pragma endregion
	}
	else if (N == 9)
	{
#pragma region 
		/*9.	Записать условие, которое является истинным, когда целое А  не кратно трем и оканчивается нулем*/
		int A;
		cout << "введите число А" << endl;
		cin >> A;
		if (((A % 3) != 0) && ((A % 10) == 0))
		{
			cout << "Истина" << endl;
		}
		else
		{
			cout << "Ложь" << endl;
		}
#pragma endregion
	}
	else if (N == 10)
	{
#pragma region 
		/*10.	Записать логическое выражение, которое определяет, принадлежит ли  число А интервалу  от -137 до -51 или интервалу от 123 до 55.*/
		int A;
		cout << "введите число А" << endl;
		cin >> A;
		if ((A>54) && (A<124))
		{
			cout << "принадлежит интервалу от 123 до 55" << endl;
		}
		else if ((A>-138) && (A<-50))
		{
			cout << "принадлежит интервалу от-137 до -57" << endl;
		}
#pragma endregion
	}
	goto bbb;
	return 0;
}