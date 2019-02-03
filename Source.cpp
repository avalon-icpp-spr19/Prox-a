#include <iostream>
#include <limits>
#include <iomanip>


int main()
{
	setlocale(0, "");
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

	cout<<
	
		
		std::cout << std::boolalpha; // ��������� �������, ����� ������� ����� ��� true / false
		sizeof(int); // ���������� �������� ������ ���������� ���� int
		std::numeric_limits<int>::max(); // ���������� ������������ �������� ������� ����� ������� ���������� ���� int
		std::numeric_limits<int>::min(); // ���������� ����������� �������� ������� ����� ������� ���������� ���� int
		std::numeric_limits<int>::digits; // ���������� ���������� �������� ��� ���������� ���� int
	




}