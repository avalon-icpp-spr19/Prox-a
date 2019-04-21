#include<iostream>
using namespace std;
int Iscube(int n)
{
	int counter = 0, cube;
	for (int i = 0; i < 100; ++i)
	{
		if (i % 2 != 0 || i % 3 != 0 || i % 5 != 0)
		{			
			cube = pow(i, 3);
			cout << cube << " ";
			counter += 1;
			if (counter == n)break;				
		}
	}
	
	cout << endl;
	return 1;
}
int VMeanVindetta(float r, float h)
{
	
	
	cout << 3.14 * (pow(r,2))*h<< endl;
	return 1;
}
int LGMinimal(int a, int b)
{
	int min;
	if (a < b)
	{
		min = a;
	}
	else
	{
		min = b;
	}
	return min;
}
int LGMinimal4(int c, int d, int e, int f)
{
	int min4;
	if (LGMinimal(c, d) < LGMinimal(e, f))
	{
		min4 = LGMinimal(c, d);
	}
	else
	{
		min4 = LGMinimal(e, f);
	}
	cout << min4 << endl;
	return 1;
}

int main()
{
	setlocale(0, "ru");

	/*
	������� �1
	�������� �������, ������� ������� � ������� ���� ������ 10 ����������� �����.
	�������� � ���������� ������ �������� n, ����� ��� �������� ���� n ������ ������ ����������� �����.
	*/
	cout << "Task 1" << endl;
	int n;
	cout << "������� n = ";
	cin >> n;
	Iscube(n);



	/*
	������� �2
	�������� �������, ������� ��������� ����� ��������.
	�� ����������� ������ ���� ����� � ������, ������� �������� � ����������.
	*/
	cout << "Task 2" << endl;
	int r, h;
	cout << "������� ������ = ";
	cin >> r;
	cout << "������� ������ = ";
	cin >> h;
	VMeanVindetta(r, h);


	/*
	������� �3
	�������� ������� min(a, b), ����������� ������� ���� �����.
	����� �������� ������� min4(a, b, c, d), ����������� ������� 4 ����� � ������� ������� min.
	�������� ������ ����� ����� �� ������� � �������� �� �������.
	�������� ������				��������� ���������
	1 2 3 4						1
	4 3 2 1						1
	9 5 1 7						1
	7 3 5 9						3
	*/
	cout << "Task 3" << endl;
	int c, d, e, f;
	cout << "������� 4 ����� ��� ������: " << endl;
	cin >> c;
	cin >> d;
	cin >> e;
	cin >> f;
	LGMinimal4(c, d, e, f);


}
/*
������� �4
�������� � ������ ���� Date.hpp
����������� ������� ������� ��������� � ����� Date.hpp
��� ���������� ������� ����� ������������ ���� ��������������� �������.
������������������ ������ ���� ���������� ������� � main().
*/