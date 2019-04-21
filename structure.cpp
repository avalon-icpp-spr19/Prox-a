#include<iostream>
#include"Header.hpp"
using namespace ext;
using namespace std;
struct Point
{
	float x;
	float y;

};
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
enum Color
{
	red = 1,
	orange,
	yellow,
	green,
	blue,
	blue1,
	purple
};
struct Triangle
{
	Color color;
	int side[3];
};

int main()
{
	char colours[][32] = { "�������" , "���������" , "������" , "�������" ,
		"�������" , "�����" , "����������" };
	setlocale(LC_ALL, "ru");
		/*
		������� �1
		������� ��������� Point, ���������� ��� ���� x, y ���� float.
		������� � ������������������� ���������� ���� Point.
		������� ���������� ���� Point � ������������������� �� ������� � ����������.
		������� �� ����� �������� x, y ��������������� ����������.
		*/
		cout << "Task 1" << endl;
		Point per = { 1.3,5.5 };
		Point per1;
		cout << "Enter x|y" << endl;
		cin >> per1.x;
		cin >> per1.y;
		cout << per1.x << "|" << per1.y << endl;
		cout << endl;
		/*
	�������� ���������, ������� ����������� ����������� �� �������� ����� ����� ��������� �������.
	���������� ����� � ������ ������������ ������ � ����������.
	��� �������� ��������� ����� ������������ ��������� Point.
	*/
		int r;
		cout << "Enter R = ";
		cin >> r;		
		cout << "Enter x|y = " << endl;
		Point kor;
		cin >> kor.x;
		cin >> kor.y;
		abs(kor.x);
		abs(kor.y);
		if ((pow(kor.x, 2) + pow(kor.y, 2)) <= pow(r,2))
		{
			cout << "�����������";
		}
		else
		{
			cout << "�� �����������.";
		}
		cout << endl;
		cout << endl;
		/*
	�������� ���������, ������� �� ���� �������� ������ - ������ ������� ������� ����� �������� �������.
	���������� ����� ������������ ������ � ����������.
	��� �������� ��������� ����� ������������ ��������� Point.
	������������ ����� �������� ������� ����� ������� ��� ��������� Point.
	������� ���������� ���������� ����� � �������.
	*/
		cout << "Enter dot1(x|y):" << endl;
		Point line, line1, ser;
		cin >> line.x;
		cin >> line.y;
		cout << "Enter dot2(x|y):" << endl;
		cin >> line1.x;
		cin >> line1.y;
		ser.x = (line.x + line1.x) / 2;
		ser.y = (line.y + line1.y) / 2;
	
		cout << "��������: " << "( " << ser.x << " ; " << ser.y << " )" << endl;
		cout << endl;
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
		cout << "Task 2" << endl;
		int dlinna;
		Circle Michail_Krug;
		Michail_Krug.r = 6;
		Michail_Krug.centr.x = 0;
		Michail_Krug.centr.y = 0;
		Circle Michail_Krug2;
		cout << "Enter r, x, y" << endl;
		cin >> Michail_Krug2.r;
		cin >> Michail_Krug2.centr.x;
		cin >> Michail_Krug2.centr.y;
		cout << "R1 - " << Michail_Krug.r << endl;
		cout << "center1 - " << Michail_Krug.centr.x << "|" << Michail_Krug.centr.y << endl;
		cout << "R2 - " << Michail_Krug2.r << endl;
		cout << "center2 - " << Michail_Krug2.centr.x << "|" << Michail_Krug2.centr.y << endl;
		dlinna = 0.5*(pow((Michail_Krug2.centr.x - Michail_Krug.centr.x), 2) +
			((Michail_Krug2.centr.y - Michail_Krug.centr.y), 2));
		if (Michail_Krug.r + Michail_Krug2.r >= dlinna)
		{
			cout << "������������";
		}
		else 
		{
			cout << "�� ������������";
		}
		cout << endl;
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
		cout << "Task 3" << endl;
		int perimeter;
		Triangle example = { {Color::red}, {1,2,8} };
		
		switch (example.color)
		{
		case 1:
			cout << "�������,";
			break;
		case 2:
			cout << "���������,";
			break;
		case 3:
			cout << "������,";
			break;
		case 4:
			cout << "�������,";
	break;
		case 5:
			cout << "�������,";
	break;
		case 6:
			cout << "�����,";
			break;
		case 7:
			cout << "����������,";
			break;
	
			
		default:
			break;
		}
		cout   << " " << "�������: "  << example.side[0] <<
			", " << example.side[1] << ", " <<  example.side[2]  << endl;
		cout << "�������� = " << example.side[0] + example.side[1] + example.side[2] << endl;
		cout << endl;

		/*
		������� �4
		������� ������ �� 20 ��������� ���� Point.
		������������������� ��� ������� �� ���������� ���������� ��������� � �������� �� 0 �� 100.
		�������� �� ����� ����������:
		- ����� � ���������� x �����������
		- ���� �����, ���������� ����� �������� ����������.
		*/
		cout << "Task 4" << endl;
		Point masas[20];
		int moon = 101, golubix = 101, golubiy = 101;
		Point minimalno1, minimalno2;
		Point min;
		for (int i = 0; i < 20; ++i)
		{
			masas[i].x = GetRandomValue(0, 100);
			masas[i].y = GetRandomValue(0, 100);
			if (masas[i].x < moon)
			{
				moon = masas[i].x;
				min.x = masas[i].x;
				min.y = masas[i].y;
			}
					
		}
		for (int i = 0; i < 20; ++i)
		{
			for (int j = 0; j < 20; ++j)
			{
				if (abs(masas[i].x - masas[j].x) < golubix && masas[i].x != masas[j].x &&
					abs(masas[i].y - masas[j].y) < golubiy && masas[i].y != masas[j].y)
				{
					golubix = abs(masas[i].x - masas[j].x);
					minimalno1.x = masas[i].x;
					minimalno2.x = masas[j].x;
					golubiy = abs(masas[i].y - masas[j].y);
					minimalno1.y = masas[i].y;
					minimalno2.y = masas[j].y;
				}
				
					
				


			}



		}
		cout << "���������� x � �����: " << min.x << "|" << min.y  << endl;
		cout << "����� ���� �����: " << minimalno1.x << "|" << minimalno1.y << "  "<< minimalno2.x << "|" << minimalno2.y << endl;
		cout << endl;
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
		cout << "Task 5" << endl;
	int PersonP;
	cout << "������� ��������: ";
	cin >> PersonP;
	int ColorsCounter[7] = {};
	int help[100];
	Triangle arr[100];
	for (int i = 0; i < 100; ++i)
	{
		help[i] = GetRandomValue(1, 7);
		switch (help[i])
		{
		case 1:
			arr[i].color = Color::red;
			ColorsCounter[0] += 1;
			break;
		case 2:
			arr[i].color = Color::orange;
			ColorsCounter[1] += 1;
			break;
		case 3:
			arr[i].color = Color::yellow;
			ColorsCounter[2] += 1;
			break;
		case 4:
			arr[i].color = Color::green;
			ColorsCounter[3] += 1;
			break;
		case 5:
			arr[i].color = Color::blue;
			ColorsCounter[4] += 1;
			break;
		case 6:
			arr[i].color = Color::blue1;
			ColorsCounter[5] += 1;
			break;
		case 7:
			arr[i].color = Color::purple;
			ColorsCounter[6] += 1;
			break;
		default:
			break;
		}

		arr[i].side[0] = GetRandomValue(1, 10);
		arr[i].side[1] = GetRandomValue(1, 10);
		arr[i].side[2] = GetRandomValue(1, 10);
		if (arr[i].side[0] > arr[i].side[1] + arr[i].side[2] ||
			arr[i].side[1] > arr[i].side[0] + arr[i].side[2] ||
			arr[i].side[2] > arr[i].side[0] + arr[i].side[1])
		{
			arr[i].side[0] = 0;
			arr[i].side[1] = 0;
			arr[i].side[2] = 0;
		}
		if (arr[i].side[0] + arr[i].side[1] + arr[i].side[2] > PersonP)
		{
			switch (help[i])
			{
			case 1:
				cout << "�������, ";
				break;
			case 2:
				cout << "���������, ";
				break;
			case 3:
				cout << "������, ";
				break;
			case 4:
				cout << "�������, ";
				break;
			case 5:
				cout << "�������, ";
				break;
			case 6:
				cout << "�����, ";
				break;
			case 7:
				cout << "����������, ";
				break;


			default:
				break;
			}
			cout << arr[i].side[0] << " " << arr[i].side[1] << " " << arr[i].side[2] << " " << endl;
		}

	}
	cout << endl;
	cout << "����� ������� �����: " << endl;
	for (int i = 0; i < 7; ++i)
	{
		cout << colours[i] << " - " << ColorsCounter[i] << endl;
	}
	cout << endl;

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
	cout << "Task 6" << endl;
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