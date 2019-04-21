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
	Задание №1
	Написать функцию, которая выводит в консоль кубы первых 10 натуральных чисел.
	Довавьте в написанную функию параметр n, чтобы она выводила кубы n первых первых натуральных чисел.
	*/
	cout << "Task 1" << endl;
	int n;
	cout << "Введите n = ";
	cin >> n;
	Iscube(n);



	/*
	Задание №2
	Напишите функцию, которая вычисляет объем цилиндра.
	Ее параметрами должны быть радус и высота, которые вводятся с клавиатуры.
	*/
	cout << "Task 2" << endl;
	int r, h;
	cout << "Введите радиус = ";
	cin >> r;
	cout << "Введите высоту = ";
	cin >> h;
	VMeanVindetta(r, h);


	/*
	Задание №3
	Напишите функцию min(a, b), вычисляющую минимум двух чисел.
	Затем напишите функцию min4(a, b, c, d), вычисляющую минимум 4 чисел с помощью функции min.
	Считайте четыре целых числа из консоли и выведите их минимум.
	Тестовые данные				Ожидаемый результат
	1 2 3 4						1
	4 3 2 1						1
	9 5 1 7						1
	7 3 5 9						3
	*/
	cout << "Task 3" << endl;
	int c, d, e, f;
	cout << "Введите 4 числа или цифиры: " << endl;
	cin >> c;
	cin >> d;
	cin >> e;
	cin >> f;
	LGMinimal4(c, d, e, f);


}
/*
Задание №4
Добавить в проект файл Date.hpp
Реализовать функции которые объявлены в файле Date.hpp
При выполнении задания можно использовать свои вспомогательные функции.
Продемонстрировать работы всех написанных функций в main().
*/