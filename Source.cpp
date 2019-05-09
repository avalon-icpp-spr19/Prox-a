#include<iostream>
#include"Header.hpp"
#include<fstream>

using namespace ext;
using namespace std;

struct date
{
	int day;
	int month;

};

int simulator2000( float n)
{
	
	float visokosTest, counter = 0, successSimulations = 0;
	
	date data[23];
	for (int i = 0; i < n; ++i)
	{
		
		for (int j = 0; j < 23; ++j)
		{
			data[j].month = GetRandomValue(1, 12);
			switch (data[j].month)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				data[j].day = GetRandomValue(1, 31);
				break;
			case 9:
			case 4:
			case 6:
			case 11:
				data[j].day = GetRandomValue(1, 30);
				break;
			case 2:
				visokosTest = GetRandomValue(1, 2);
					if (visokosTest == 1)
					{
						data[j].day = GetRandomValue(1, 28);
					}
					else
					{
						data[j].day = GetRandomValue(1, 29);
					}

				
				break;


			default:
				break;
			}
		}
		for (int k = 0; k < 23; ++k)
		{
			for (int o = 0; o < 23; ++o)
			{
				if (data[k].month == data[o].month &&
					data[k].day == data[o].day && o != k)
				{
					counter += 1;
				}
				
			}
			if (counter >= 1)
			{
				successSimulations += 1;
				break;
			}
			counter = 0;
		}
		counter = 0;

	}
	
	
	cout << "����� ���������: " << n << endl;
	cout << "���� �� 2 ��� �������� ������� � " << successSimulations <<" ����������"<< " | ������� ��������: "<< successSimulations / n * 100 << "%" <<endl;
	return 1;
};
int simulator2001(float n)
{

	float visokosTest, counter = 0, successSimulations = 0;

	date data[23];
	for (int i = 0; i < n; ++i)
	{

		for (int j = 0; j < 23; ++j)
		{
			data[j].month = GetRandomValue(1, 12);
			switch (data[j].month)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				data[j].day = GetRandomValue(1, 31);
				break;
			case 9:
			case 4:
			case 6:
			case 11:
				data[j].day = GetRandomValue(1, 30);
				break;
			case 2:
				visokosTest = GetRandomValue(1, 2);
				if (visokosTest == 1)
				{
					data[j].day = GetRandomValue(1, 28);
				}
				else
				{
					data[j].day = GetRandomValue(1, 29);
				}


				break;


			default:
				break;
			}
		}
		for (int k = 0; k < 23; ++k)
		{
			for (int o = 0; o < 23; ++o)
			{
				if (data[k].month == data[o].month &&
					data[k].day == data[o].day && o != k)
				{
					counter += 1;
				}
				
			}
			if (counter >= 2)
			{
				successSimulations += 1;
				break;
			}
			counter = 0;
		}
		counter = 0;

	}


	cout << "����� ���������: " << n << endl;
	cout << "���� �� 3 ��� �������� ������� � " << successSimulations << " ����������" << " | ������� ��������: " << successSimulations / n * 100 << "%" << endl;
	return 1;
};
int simulator2002( int day, int month)
{

	float visokosTest, counter = 0, successSimulations = 0;
	ofstream fout;	
	date data[23];
	int checkIt1 = 0, checkIt2 = 0, i =0;
	fout.open("log.txt");
	if (fout.is_open() != true)
	{
		cout << "Something wrong, try again" << endl;
	}
	else
	{
		while(true)
		{
			i += 1;
			



			for (int j = 0; j < 23; ++j)
			{
				data[j].month = GetRandomValue(1, 12);
				switch (data[j].month)
				{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					data[j].day = GetRandomValue(1, 31);
					break;
				case 9:
				case 4:
				case 6:
				case 11:
					data[j].day = GetRandomValue(1, 30);
					break;
				case 2:
					visokosTest = GetRandomValue(1, 2);
					if (visokosTest == 1)
					{
						data[j].day = GetRandomValue(1, 28);
					}
					else
					{
						data[j].day = GetRandomValue(1, 29);
					}


					break;


				default:
					break;
				}
			}
			for (int k = 0; k < 23; ++k)
			{
				for (int o = 0; o < 23; ++o)
				{
					if (data[k].month == data[o].month &&
						data[k].day == data[o].day && o != k)
					{
						counter += 1;
					}
				}
				if (counter >= 1)
				{
					successSimulations += 1;
					fout << i << ": ";
					fout << data[k].day << " " << data[k].month << endl;
					checkIt1 = data[k].day;
					checkIt2 = data[k].month;
					break;
				}			
				counter = 0;
			}
			if (checkIt1 == day && checkIt2 == month )
			{
				break;
			}
			fout << i << ": ";
			fout << "Nan" << endl;
			

		}


		cout << "��������� ���� �������� ��������� ����� ������������ ��� " << successSimulations << " ���������" << endl;

		return 1;
	}
};
int simulator2003( float n, float procent)
{
	
	float visokosTest, counter = 0, successSimulations = 0;
	int group = 0;
	float procent1 = 0;
	for (int i = 0; i < n; ++i)
	{
		group += 1;
		date *data = new date[group];
		for (int i = 0; i < n; ++i)
		{
			
			for (int j = 0; j < group; ++j)
			{
				data[j].month = GetRandomValue(1, 12);
				switch (data[j].month)
				{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					data[j].day = GetRandomValue(1, 31);
					break;
				case 9:
				case 4:
				case 6:
				case 11:
					data[j].day = GetRandomValue(1, 30);
					break;
				case 2:
					visokosTest = GetRandomValue(1, 2);
					if (visokosTest == 1)
					{
						data[j].day = GetRandomValue(1, 28);
					}
					else
					{
						data[j].day = GetRandomValue(1, 29);
					}
					break;
				default:
					break;
				}
			}
			for (int k = 0; k < group; ++k)
			{
				for (int o = 0; o < group; ++o)
				{
					if (data[k].month == data[o].month &&
						data[k].day == data[o].day && o != k)
					{
						counter += 1;
					}

				}
				if (counter >= 1)
				{
					successSimulations += 1;
					
					break;
				}
				counter = 0;
			}
			counter = 0;
			
			
		}
		procent1 = successSimulations / n * 100;
		if (procent1 >= procent)
		{
			cout << "��������� ����������� ���������� ���� �������� ����������� � ������ �������� " <<
				group << " ���o���" << endl;
			delete[]data;
			break;
		}
		else
		{
			cout << "��� ������ �������� " << group
				<< " ������� ���������� ����������� " << procent1 << "%" << endl;
			delete[]data;
		}
		successSimulations = 0;
		procent1 = 0;
	}
	

	return 1;
};
int main()
{
	setlocale(LC_ALL, "Russian");
	/*cout << "������� 1" << endl;
	float n;
	cout << "������� ����� ���������: ";
	cin >> n;
	simulator2000(n);
	cout << endl;
	cout << "������� 2" << endl;
	simulator2001(n);
	cout << endl;
	cout << "������� 3" << endl;
	date ReadBornDay;
	ifstream fin("birthday.txt");
	if (fin.is_open() != true)
	{
		cout << "Something wrong, try again" << endl;
	}
	else
	{
		fin >> ReadBornDay.day; 	
		fin >> ReadBornDay.month; 
		cout << "�� ����� ��������� ��������� ���� ��������: " << 
			ReadBornDay.day << " " << ReadBornDay.month << endl;
		if (ReadBornDay.day < 32 && ReadBornDay.month < 13 &&
			ReadBornDay.day > 0 && ReadBornDay.month > 0)
		{
			simulator2002(ReadBornDay.day, ReadBornDay.month);
		}
		else
		{
			cout << "Uncorrect data" << endl;
		}
		
	}*/
	cout << endl;
	cout << "������� 4" << endl;
	float procent , N;
	cout << "������� �������� ������� ���������� 2 ���� ��������: ";
	cin >> procent;
	cout << "������� ���������� ��������� ��� ������ ������: ";
	cin >> N;

	simulator2003(N, procent);






}


