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
	cout << "������� ����� �������:" << endl;
	cin >> N;
	if (N == 1)
	{
#pragma region 
		/*1.	����������, �������� �� ������ ����� ����� ������*/
		int x;
		cout << "������� �����:" << endl;
		cin >> x;
		if ((x % 2) == 0)
		{
			cout << "������" << endl;
		}
		else
		{
			cout << "��������" << endl;
		}
#pragma endregion
	}
	else if (N == 2)
	{
#pragma region
		/*2.	�������� �������, ������� �������� �������� , �����  ����� � ������ ���� ��� ����.*/
		int A;
		cout << "������� ����� A" << endl;
		cin >> A;
		if (((A % 2) == 0) && ((A % 3) == 0))
		{
			cout << "������" << endl;
		}
		else {
			cout << "����" << endl;
		}
#pragma endregion
	}
	else if (N == 3)
	{
#pragma region
		/*3.	�������� �������, ������� �������� ��������, ����� ������ �� �����  � � � ��������.*/
		int A;
		int B;
		cout << "������� ����� �" << endl;
		cin >> A;
		cout << "������� ����� �" << endl;
		cin >> B;
		if (((A % 2) != 0) && ((B % 2) != 0))
		{
			cout << "������" << endl;
		}
		else
		{
			cout << "����" << endl;
		}
#pragma endregion
	}
	else if (N == 4)
	{
#pragma region
		/*4.	��������� �������� ���������� ��������� ��� ��������� ��������� ���������� ���������� X=0, Y=0, Z=1
		a.	X<Y>Z
		b.	X>Y
		c.	(X>Z)<Y
		*/
		int X = 0;
		int Y = 0;
		int Z = 1;
		if (X<Y>Z)
		{
			cout << "������" << endl;
		}
		if (X>Y)
		{
			cout << "������" << endl;
		}
		if ((X>Z)<Y)
		{
			cout << "������" << endl;
		}
		else
		{
			cout << "����" << endl;
		}
#pragma endregion
	}
	else if (N == 5)
	{
#pragma region
		/*5.	�������� ���������� ���������, ����������� ������� ����������� �������
		a.	y=2tg x;
		b.	�=3/(x-1).
		*/
		int x;
		cout << "������� �:" << endl;
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
		/*6.	��������� �������� ���������� ��������� ��� ��������� ��������� ���������� ���������� �=1, �=0, �=1
		a.	A<(A>B)<C
		b.	A<C>(B<C)
		c.	(A<B>C)<A
		*/
		int A = 1;
		int B = 0;
		int C = 1;
		if (A < (A > B) < C)
		{
			cout << "1������" << endl;
		}
		if (A<C>(B < C))
		{
			cout << "2������" << endl;
		}
		if ((A<B>C) < A)
		{
			cout << "3������" << endl;
		}
		else
		{
			cout << "����" << endl;
		}

#pragma endregion
	}
	else if (N == 7)
	{
#pragma region
		/*7.	�������� ���������� ��������� ������������, ��� ����� � �������� �����������.*/
		int A;
		cout << "������� ����� A" << endl;
		cin >> A;
		if ((A > 99) && (A<1000))
		{
			cout << "����� �����������" << endl;
		}
		else
		{
			cout << "�� �����������" << endl;
		}
#pragma endregion
	}
	else if (N == 8)
	{
#pragma region MyRegion
		/*8.	�������� �������, ������� �������� ��������, ����� ������ ���� �� ����� �, � � � ������ 45*/
		int A;
		int B;
		int C;
		cout << "������� ����� �" << endl;
		cin >> A;
		cout << "������� ����� B" << endl;
		cin >> B;
		cout << "������� ����� C" << endl;
		cin >> C;
		if ((A < 45) || (B < 45) || (C < 45))
		{
			cout << "������" << endl;
		}
		else
		{
			cout << "����" << endl;
		}
#pragma endregion
	}
	else if (N == 9)
	{
#pragma region 
		/*9.	�������� �������, ������� �������� ��������, ����� ����� �  �� ������ ���� � ������������ �����*/
		int A;
		cout << "������� ����� �" << endl;
		cin >> A;
		if (((A % 3) != 0) && ((A % 10) == 0))
		{
			cout << "������" << endl;
		}
		else
		{
			cout << "����" << endl;
		}
#pragma endregion
	}
	else if (N == 10)
	{
#pragma region 
		/*10.	�������� ���������� ���������, ������� ����������, ����������� ��  ����� � ���������  �� -137 �� -51 ��� ��������� �� 123 �� 55.*/
		int A;
		cout << "������� ����� �" << endl;
		cin >> A;
		if ((A>54) && (A<124))
		{
			cout << "����������� ��������� �� 123 �� 55" << endl;
		}
		else if ((A>-138) && (A<-50))
		{
			cout << "����������� ��������� ��-137 �� -57" << endl;
		}
#pragma endregion
	}
	goto bbb;
	return 0;
}