
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	///* ������� 1
	//���� ��� ����������� ����� A, B, C. ����������, ���������� �� ����������� � ������ ���������.
	//���� ����������� ����������, �������� ������ ��, ����� �������� ������ ���.
	//����������� � ��� ��� �����, �� ������� �� ����� ������.
	//�������� ������				��������� ���������
	//1 1 1						��
	//1 2 4						���
	//12 7 5						���
	//7 10 3						���
	//4 5 8						��
	//*/
	int a, b, c;
	cout << "������� 3 ������� ���������: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "da" << endl;
	}
	else
	{
		cout << "no" << endl;
	}

	/* ������� 2
	�������� ���, ��������� ���������� ��������������� ������� ��������� �� ��������� ������������.
	��������, ��� 10, ������� ���������� �������, ��� 1 � �������, ��� 2 � �������.
	������������ ����������� switch.
	�������� ������			��������� ���������
	1					�����
	2					�����
	10					������
	101					�����
	1255					������
	*/
	int q;
	cout << "������� ������" << endl;
	cin >> q;
	if (q > 10 && q < 13)
	{
		q %= 100;
	}
	else
	{
		q %= 10;
	}
	switch (q)
	{
	case 1:
		cout << "����� " << endl;
		break;
	case 2:
	case 3:
	case 4:
		cout << "����� " << endl;
		break;

	case 11:
	case 13:
	case 14:
	case 12:
		cout << "������ " << endl;
		break;
	default:
		cout << "������ " << endl;
		break;
	}





	/* ������� 3
	� ����������� ���� ����� � ������ ������������� � ������ ��� ����� ��� ���������� ������ �������:
	// �������� ������, �������� � ����������.
	// true ��� 1, false ��� 0
	bool enemyInFront;
	bool isBoss;
	int robotHealth;
	// ��� ����
	bool shouldFire = true;
	if (enemyInFront == true)
	{
	if (isBoss == true)
	{
	if (robotHealth < 50) shouldFire = false;
	if (robotHealth > 100) shouldFire = true;
	}
	}
	else
	{
	shouldFire = false;
	}
	if(shouldFire)
	{
	cout << "Fire" << endl;
	}
	��������� ��� ����, ������ ���������� �������� ���������.
	�������� ������		��������� ���������
	false false 10
	false true 60
	true false 10			Fire
	true true 10
	true true 60			Fire
	*/


	bool enemyInFront;
	bool isBoss;
	int robotHealth;
	bool shouldfire;
	cin >> enemyInFront;
	cin >> isBoss;
	cin >> robotHealth;
	if ((enemyInFront  && isBoss  && robotHealth > 50) || (enemyInFront  && isBoss != true))
	{
		cout << "fire" << endl;
	}


	/* ������� 4
	�� � ����� � ����� ������ ������� ����� ������ ���������� ������� � ���������.
	��� ����� ������ ���������� ������ �� ��� ������ �� ����������� �����.
	�����������, ��� �� ����� ������ � ���, ��� �� ���� ������ �������� ���� ���������.
	�� ����������, ��� ������ �� ��� ������ ������� ������ ����������� ������ ������.
	������� ���� ������ � �������� ��������� ������ ����� �� ������� ��������������, � �������, �� ���� ������ �������� ������������ � ����������� ������.
	���� ����� ������ ��� ������ ������� ������ �� ����, �� ��������� � if - ��, � ������� ����������� ��� ������ ���.
	���������� �� ������ ������ ������, �� � �������������� ���������� �������� � ����������� ��������� ������� ��������.
	�������� ������		��������� ���������
	1 2 3				2
	5 5 5				5
	2 2 9				2
	1 5 5				5
	4 5 6				5
	*/
	int co = 0;
	int i, vas, pet, max, min;
	cout << "������� ���� ������:" << endl;
	cin >> i;
	cin >> vas;
	cin >> pet;
	max = i;
	if (vas > i)
	{
		max = vas;
	}
	if (pet > max)
	{
		max = pet;
	}
	min = i;
	if (vas < min)
	{
		min = vas;
	}
	if (pet < min)
	{
		min = pet;
	}
	co = i + vas + pet - max + min;
	cout << "�������: " << co << endl;


	/* ������� 5
	�������� ������, ������� ��������� ����������� ������������� ���� �� ��������� ������������� ������.
	������������ ������ ������ � ������� ����, �����, ���.
	�������� ������				��������� ���������
	1 1 1992					true
	30 6 1992					true
	31 7 1992					true
	31 9 1994					false
	32 1 1992					false
	1 13 1992					false
	29 2 1993					false
	29 2 2004					true
	29 2 1900					false
	29 2 2000					true
	*/

	int d, m, y;
	bool ans;
	cout << " ������� ������ � ������� ����, �����, ���" << endl;
	cin >> d;
	cin >> m;
	cin >> y;
	if (d < 32 && m < 13)
	{
		switch (m)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (d <= 31)
			{
				ans = true;

			}
			else
			{
				ans = false;
			}
			break;
		case 2:
			if ((y % 4 == 0 && (y % 100 != 0) || (y % 400 == 0))
				&& (d <= 29))
			{
				ans = true;
			}
			else if (((y % 4 != 0 && (y % 100 == 0)) || (y % 400 != 0))
				&& (d <= 28))
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
			if (d <= 30)
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



	/* ������� 6
	��������� ����� ����� �� ���������, ����������� ��� ���������.
	���� ��� ��������� ������ ��������� �����, �������� ������, ������� ����������
	����� �� ����� ������� � ������ ������ �� ������ ����� �����.
	������ ���������� � 1. ������������ ������ ���������� ��������� � �������� ������ � ������� x1x2.
	x1 - ����� ������ �� �����������, x2 - ����� ������ �� ���������
	�������� ������				��������� ���������
	54 14						true
	11 88						true
	36 61						false
	18 71						false
	23 67						true
	*/
	int x1, y1, x2, y2, gaf, may, kar, gar;
	bool dispanser;
	cout << "������� ���������� 1 ������" << endl;
	cin >> x1;
	cin >> y1;
	cout << "������� ���������� 2 ������" << endl;
	cin >> x2;
	cin >> y2;
	if (x1 > x2)
	{
		gaf = x1;
		kar = x2;
	}
	else
	{
		gaf = x2;
		kar = x1;
	}
	if (y1 > y2)
	{
		may = y1;
		gar = y2;
	}
	else
	{
		may = y2;
		gar = y1;
	}
	if ((x1 == x2 || y1 == y2) || (gaf - kar == may - gar))
	{
		dispanser = true;
	}
	else
	{
		dispanser = false;
	}
	cout << boolalpha;
	cout << dispanser << endl;


}