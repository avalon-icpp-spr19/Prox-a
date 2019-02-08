#include<iostream>
#include <limits>
#include <iomanip>
using namespace std;
/* TODO
��������� ������������ ���� <limits>, std::cout, sizeof() � ����������� ������������������
c�������� ��������� �������
	��� ����������		|    ������,	|	    ��������	 	 |  ����������
				|     ����	|  �����������	|  ������������  | �������� ���
	-------------------------------------------------------------------------------------------
	bool			|	1	|     false	|      true      |	1
	unsigned short		|	2	|	0	|      65535	 |	16
	short
	unsigned int
	int
	unsigned long
	long
	unsigned long long
	long long
	char
	float
	double
��� ������� ������������ http://www.cplusplus.com/reference/limits/numeric_limits/
*/
int main()
{
	setlocale(0, ""); // ��������� ����������� ����������� ��������� � �������
	std::cout << std::boolalpha; // ��������� �������, ����� ������� ����� ��� true / false
	sizeof(int); // ���������� �������� ������ ���������� ���� int
	std::numeric_limits<int>::max(); // ���������� ������������ �������� ������� ����� ������� ���������� ���� int
	std::numeric_limits<int>::max(); // ���������� ����������� �������� ������� ����� ������� ���������� ���� int
	std::numeric_limits<int>::digits; // ���������� ���������� �������� ��� ���������� ���� int
	cout << left <<   "��� ����������"<< setw(3) << ""<<  "|" << setw(3) << "" << "������" << setw(3) << "" << "|" << setw(3) << "" << "��������" << setw(3) << "" << "|" << setw(3) << "" << "����������" << setw(3) << "" << "|" << endl;
	cout << setw(15) << "" << setw(3) << "|" << "����" << setw(1) << "" << "|" << setw(1) << "" << "�����������" << setw(1) << "" << "|" << setw(1) << "" << "������������" << setw(1) << "" << "|" << setw(1) << "" << "�������� ���" << "|" << endl;
	cout << "-------------------------------------------------------------------------------------------" << endl;
	cout << left << setw(15) << "bool" << setw(6) << "|" << setw(1) << sizeof(bool) << setw(1)<< "" << "|" << setw(1) << "" << std::numeric_limits<bool>::min() << setw(7) << "" << "|" << setw(1) << "" << std::numeric_limits<bool>::max() << setw(9) << "" << "|" << setw(1) << "" << numeric_limits<bool>::digits <<setw(11)<< "" << "|" << endl;
	cout << left << setw(15) << "unsigned short" << setw(6) << "|" << setw(1) << sizeof(unsigned short) << setw(1) << "" << "|" << setw(1) << "" << std::numeric_limits<unsigned short>::min() << setw(7) << "" << "|" << setw(1) << "" << std::numeric_limits<unsigned short>::max() << setw(9) << "" << "|" << setw(1) << "" << numeric_limits<unsigned short>::digits << setw(11) << "" << "|" << endl;
	cout << left << setw(15) << "short" << setw(6) << "|" << setw(1) << sizeof(short) << setw(1) << "" << "|" << setw(1) << "" << std::numeric_limits<short>::min() << setw(7) << "" << "|" << setw(1) << "" << std::numeric_limits<short>::max() << setw(9) << "" << "|" << setw(1) << "" << numeric_limits<short>::digits << setw(11) << "" << "|" << endl;
	cout << left << setw(15) << "unsigned int" << setw(6) << "|" << setw(1) << sizeof(unsigned int) << setw(1) << "" << "|" << setw(1) << "" << std::numeric_limits<unsigned int>::min() << setw(7) << "" << "|" << setw(1) << "" << std::numeric_limits<unsigned int>::max() << setw(9) << "" << "|" << setw(1) << "" << numeric_limits<unsigned int>::digits << setw(11) << "" << "|" << endl;
	cout << left << setw(15) << "int" << setw(6) << "|" << setw(1) << sizeof(int) << setw(1) << "" << "|" << setw(1) << "" << std::numeric_limits<int>::min() << setw(7) << "" << "|" << setw(1) << "" << std::numeric_limits<int>::max() << setw(9) << "" << "|" << setw(1) << "" << numeric_limits<int>::digits << setw(11) << "" << "|" << endl;
	cout << left << setw(15) << "unsigned long" << setw(6) << "|" << setw(1) << sizeof(unsigned long) << setw(1) << "" << "|" << setw(1) << "" << std::numeric_limits<unsigned long>::min() << setw(7) << "" << "|" << setw(1) << "" << std::numeric_limits<unsigned long>::max() << setw(9) << "" << "|" << setw(1) << "" << numeric_limits<unsigned long>::digits << setw(11) << "" << "|" << endl;
	cout << left << setw(15) << "long" << setw(6) << "|" << setw(1) << sizeof(long) << setw(1) << "" << "|" << setw(1) << "" << std::numeric_limits<long>::min() << setw(7) << "" << "|" << setw(1) << "" << std::numeric_limits<long>::max() << setw(9) << "" << "|" << setw(1) << "" << numeric_limits<long>::digits << setw(11) << "" << "|" << endl;
	cout << left << setw(15) << "unsigned long long" << setw(6) << "|" << setw(1) << sizeof(unsigned long long) << setw(1) << "" << "|" << setw(1) << "" << std::numeric_limits<unsigned long long>::min() << setw(7) << "" << "|" << setw(1) << "" << std::numeric_limits<unsigned long long>::max() << setw(9) << "" << "|" << setw(1) << "" << numeric_limits<unsigned long long>::digits << setw(11) << "" << "|" << endl;
	cout << left << setw(15) << "long long" << setw(6) << "|" << setw(1) << sizeof(long long) << setw(1) << "" << "|" << setw(1) << "" << std::numeric_limits<long long>::min() << setw(7) << "" << "|" << setw(1) << "" << std::numeric_limits<long long>::max() << setw(9) << "" << "|" << setw(1) << "" << numeric_limits<long long>::digits << setw(11) << "" << "|" << endl;
	cout << left << setw(15) << "char" << setw(6) << "|" << setw(1) << sizeof(char) << setw(1) << "" << "|" << setw(1) << "" << std::numeric_limits<char>::min() << setw(7) << "" << "|" << setw(1) << "" << std::numeric_limits<char>::max() << setw(9) << "" << "|" << setw(1) << "" << numeric_limits<char>::digits << setw(11) << "" << "|" << endl;
	cout << left << setw(15) << "float" << setw(6) << "|" << setw(1) << sizeof(float) << setw(1) << "" << "|" << setw(1) << "" << std::numeric_limits<float>::min() << setw(7) << "" << "|" << setw(1) << "" << std::numeric_limits<float>::max() << setw(9) << "" << "|" << setw(1) << "" << numeric_limits<float>::digits << setw(11) << "" << "|" << endl;
	cout << left << setw(15) << "double" << setw(6) << "|" << setw(1) << sizeof(double) << setw(1) << "" << "|" << setw(1) << "" << std::numeric_limits<double>::min() << setw(7) << "" << "|" << setw(1) << "" << std::numeric_limits<double>::max() << setw(9) << "" << "|" << setw(1) << "" << numeric_limits<double>::digits << setw(11) << "" << "|" << endl;
	getchar();
}
