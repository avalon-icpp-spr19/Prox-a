#include<iostream>
#include"Header.hpp"
using namespace ext;
using namespace std;
struct Point
{
	float x;
	float y;

};


int stor[3] = { 1,2,3 };

const int MAX_LENGHT = 32; // ������ ������������ ����� ��������� ������
const int MAX_EXAMS = 10; // ������ ������������ ���������� ��������� � ������ ��������
struct Circle
{
	int r;
	Point centr;
};
struct date
{
	int day;
	int month;
	int year;
};

struct Triangle
{
	int a;
	int b;
	int c;
	char *zvet;
};




const char TYPS[][255]
= { "�������", "���������","������", "�������",
	"�������", "�����" , "����������" };
;


int main()
{

	setlocale(0, "");


	/*
	������� �1
	������� ��������� Point, ���������� ��� ���� x, y ���� float.
	������� � ������������������� ���������� ���� Point.
	������� ���������� ���� Point � ������������������� �� ������� � ����������.
	������� �� ����� �������� x, y ��������������� ����������.
	*/
		Point per = { 1.3,5.5 };
		Point per1;
		cin >> per1.x;
		cin >> per1.y;
		cout << per1.x << "|" << per1.y << endl;
		/*
	�������� ���������, ������� ����������� ����������� �� �������� ����� ����� ��������� �������.
	���������� ����� � ������ ������������ ������ � ����������.
	��� �������� ��������� ����� ������������ ��������� Point.
	*/
		int r;
		cout << "Take R = ";
		cin >> r;
		cout << endl;
		cout << " x;y = " << endl;
		Point kor;
		cin >> kor.x;
		cin >> kor.y;
		abs(kor.x);
		abs(kor.y);
		if (pow(pow(kor.x, 2) + pow(kor.y, 2), 0.5) > r)
		{
			cout << "net";
		}
		else
		{
			cout << "da";
		}
		cout << endl;
		/*
	�������� ���������, ������� �� ���� �������� ������ - ������ ������� ������� ����� �������� �������.
	���������� ����� ������������ ������ � ����������.
	��� �������� ��������� ����� ������������ ��������� Point.
	������������ ����� �������� ������� ����� ������� ��� ��������� Point.
	������� ���������� ���������� ����� � �������.
	*/
	cout << "Take dots1:" << endl;
	Point line, line1, ser;
	cin >> line.x;
	cin >> line.y;
	cout << "Take dots2:" << endl;
	cin >> line1.x;
	cin >> line1.y;
	ser.x = (line.x + line1.x) / 2;
	ser.y = (line.y + line1.y) / 2;

	cout << "golden mean: " << "( " << ser.x << " ; " << ser.y << " )" << endl;
	/*
	������� �2
	������� ��������� Circle, ���������� ���� ���� ���� int - ������ � ������ ���� ���� Point - ����� ����������.
	������� � ������������������� ���������� ���� Circle.
	������� ���������� ���� Circle � ������������������� �� ������� ���������� � ����������.
	������� �� ����� ������, ����������� � ��������������� ����������.
	���� ��� ���������� ���� Circle.
	�������� ���������, ������� ���������� ������������ �� ����������,
	��������� ������� �����������.
	*/
	int dlinna;
	Circle Michail_Krug;
	Michail_Krug.r = 6;
	Michail_Krug.centr.x = 0;
	Michail_Krug.centr.y = 0;
	Circle Michail_Krug2;
	cout << "Vvedite krug" << endl;
	cin >> Michail_Krug2.r;
	cin >> Michail_Krug2.centr.x;
	cin >> Michail_Krug2.centr.y;
	cout << "R1 - "  << Michail_Krug.r<< endl;
	cout << "centr - " << Michail_Krug.centr.x << " " << Michail_Krug.centr.y << endl;
	cout << "R2 - " << Michail_Krug2.r << endl;
	cout << "centr - " << Michail_Krug2.centr.x << " " << Michail_Krug2.centr.y << endl;
	dlinna = 0.5*(pow((Michail_Krug2.centr.x - Michail_Krug.centr.x), 2) +
		((Michail_Krug2.centr.y - Michail_Krug.centr.y), 2));
	if (Michail_Krug.r + Michail_Krug2.r <= dlinna)cout << "������������";
	cout << endl;


/*
������� �3
������� ������������ (enum) Color, ��� �������� 7 ������ ������.
������� ��������� Triangle, ���������� ���� ���� Color
� ������ ��� �������� ���� ��������� ���� int (����� ������).
������� � ������������������� ���������� ���� Triangle ����������� �������.
������� �� ����� ������, ����������� � ��������������� ����������.
�������� ���� Color ������� � ��������� ����. (������������ ����������� switch).
���������� � ������� �� ����� �������� ���������������� ������������.
*/
	
	
	
	
	
			

	

		

/*
������� �4
������� ������ �� 20 ��������� ���� Point.
������������������� ��� ������� �� ���������� ���������� ��������� � �������� �� 0 �� 100.
�������� �� ����� ����������:
- ����� � ���������� x �����������
- ���� �����, ���������� ����� �������� ����������.
*/
		Point masas[20];
			int moon= 101, golubi = 101;
			Point minimalno;
			for (int i = 0; i < 20; ++i)
			{
				masas[i].x = GetRandomValue(0, 100);
				if (masas[i].x < moon)moon = masas[i].x;
				masas[i].y = GetRandomValue(0, 100);
				if ((abs(masas[i].x - masas[i].y) < golubi))
				{
					golubi = abs(masas[i].x - masas[i].y);
					minimalno.x = masas[i].x;
					minimalno.y = masas[i].y;
				}
			}
			cout << "Minimal; " << moon << " min rasst " << minimalno.x << "|" << minimalno.y << endl;

/*
������� �5
������� ������ �� 100 ��������� ���� Triangle.
������������������� ��� ���������� ���������� (����� ������� �� 1 �� 10).
��� ������������� ���������, ��� ����������� � ������ ������� ������ ����� ������������.
(����� ������ ������� ������ ���� ������ ������ ���� ����� ���� ������ ������).
���������� ���������� ������ ������������� � ������� �� ����� ��������� ����������:
- ������� �� ����� ��� ������������, �������� ������� ��������� ��������, ��������� � ����������.
���� ���������� ������������� ���, ������� ��������������� ���������.
- ���������� ������������� ������� �����
*/
			Triangle lamoda[100];
			char zvett[][255] = { "red", "orange","yellow", "green",
	"blue", "blue1" , "purple" };
			;
			int arxiz[7] = {};
			int znach, parametr, oxx = 0;
			cout << " Vvedite znachenie " << endl;
			cin >> znach;
			for (int i = 0; i < 100; ++i)
			{
				lamoda[i].a = GetRandomValue(1, 10);
				lamoda[i].b = GetRandomValue(1, 10);
				lamoda[i].c = GetRandomValue(1, 10);
				lamoda[i].zvet = zvett[GetRandomValue(0, 6)];
				cout << lamoda[i].zvet;
				if (lamoda[i].zvet == "red") arxiz[0] += 1;
				if (lamoda[i].zvet == "orange") arxiz[1] += 1;
				if (lamoda[i].zvet == "yellow") arxiz[2] += 1;
				if (lamoda[i].zvet == "green") arxiz[3] += 1;
				if (lamoda[i].zvet == "blue") arxiz[4] += 1;
				if (lamoda[i].zvet == "blue1") arxiz[5] += 1;
				if (lamoda[i].zvet == "purple") arxiz[6] += 1;
				if (lamoda[i].a > lamoda[i].b + lamoda[i].c || lamoda[i].b > lamoda[i].a + lamoda[i].c ||
					lamoda[i].c > lamoda[i].b + lamoda[i].a)
				{
					lamoda[i].a = 0;
					lamoda[i].b = 0;
					lamoda[i].c = 0;
					
				}
				parametr = lamoda[i].a + lamoda[i].b + lamoda[i].c;
				if (parametr > znach)
				{
					cout << lamoda[i].a << " " << lamoda[i].b << " " << lamoda[i].c << endl;

					oxx += 1;
				}
				

			}
			if (oxx == 0) cout << "Takix treyg net" << endl;
			for (int i = 0; i < 7; ++i)
			{
				cout << zvett[i] << " ����, ����: " << arxiz[i] << endl;
			}

/*
������� �6
�������� ���������, ������� ��������� ������������ �������� �������� ����.
���� ������� � �������������� ���������.
�������� ������				��������� ���������
1 1 1992					���� ���������
30 6 1992					���� ���������
31 7 1992					���� ���������
31 9 1994					���� �����������
32 1 1992					���� �����������
1 13 1992					���� �����������
29 2 1993					���� �����������
29 2 2004					���� ���������
29 2 1900					���� �����������
29 2 2000					���� ���������
*/
			
			bool ans;
			cout << " ������� ������ � ������� ����, �����, ���" << endl;
			date data;
			cin >> data.day;
			cin >> data.month;
			cin >> data.year;
			if (data.day < 32 && data.month < 13)
			{
				switch (data.month)
				{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					if (data.day <= 31)
					{
						ans = true;

					}
					else
					{
						ans = false;
					}
					break;
				case 2:
					if ((data.year % 4 == 0 && (data.year % 100 != 0) || (data.year % 400 == 0))
						&& (data.day <= 29))
					{
						ans = true;
					}
					else if (((data.year % 4 != 0 && (data.year % 100 == 0)) || (data.year % 400 != 0))
						&& (data.day <= 28))
					{
						ans = true;
					}
					else
					{
						ans = false;
					}
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					if (data.day <= 30)
					{
						ans = true;
					}
					else
					{
						ans = false;
					}

				default:
					break;
				}
			}
			else
			{
				ans = false;
			}
			cout << boolalpha;
			cout << ans << endl;
}

			