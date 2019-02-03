#include <iostream>
#include <limits>
#include <iomanip>


int main()
{
	setlocale(0, "");
	/* TODO
	»спользу€ заголовочный файл <limits>, std::cout, sizeof() и управл€ющие последовательности
	cоставьте следующую таблицу
	“ип переменной		|    –азмер,	|	    «начение	 	 |   оличество
	|     байт	|  ћинимальное	|  ћаксимальное  | значимых бит
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
	дл€ справки использовать http://www.cplusplus.com/reference/limits/numeric_limits/
	*/

	cout<<
	
		
		std::cout << std::boolalpha; // настройка консоли, вывод булевых типов как true / false
		sizeof(int); // возвращает байтовый размер переменной типа int
		std::numeric_limits<int>::max(); // возвращает максимальное значение которое может хранить переменна€ типа int
		std::numeric_limits<int>::min(); // возвращает минимальное значение которое может хранить переменна€ типа int
		std::numeric_limits<int>::digits; // возвращает количество значимых бит переменной типа int
	




}