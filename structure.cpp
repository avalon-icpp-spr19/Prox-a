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
	char colours[][32] = { "Красный" , "Оранжевый" , "Желтый" , "Зеленый" ,
		"Голубой" , "Синий" , "Фиолетовый" };
	setlocale(LC_ALL, "ru");
		/*
		Задание №1
		Создать структуру Point, содержащую два поля x, y типа float.
		Создать и проинициализировать переменную типа Point.
		Создать переменную типа Point и проинициализировать ее данными с клавиатуры.
		Вывести на экран значения x, y вышеобъявленных переменных.
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
	Написать программу, которая определеяет принадлежит ли заданная точка кругу заданного радиуса.
	Координаты точки и радиус пользователь вводит с клавиатуры.
	Для хранения координат точки использовать структуру Point.
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
			cout << "принадлежит";
		}
		else
		{
			cout << "не принадлежит.";
		}
		cout << endl;
		cout << endl;
		/*
	Написать программу, которая по двум заданным точкам - концам отрезка находит точку середины отрезка.
	Координаты точек пользователь вводит с клавиатуры.
	Для хранения координат точек использовать структуру Point.
	Рассчитанную точку середины отрезка также хранить как структуру Point.
	Вывести координаты полученной точки в консоль.
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
	
		cout << "Середина: " << "( " << ser.x << " ; " << ser.y << " )" << endl;
		cout << endl;
		/*
		Задание №2
		Создать структуру Circle, содержащую одно поле типа int - радиус и второе поле типа Point - центр окружности.
		Создать и проинициализировать переменную типа Circle.
		Создать переменную типа Circle и проинициализировать ее данными введенными с клавиатуры.
		Вывести на экран данные, сохраненные в вышеобъявленных переменных.
		Даны две переменные типа Circle.
		Написать программу, которая определяет пересекаются ли окружности,
		описанные данными переменными.
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
			cout << "Пересекаются";
		}
		else 
		{
			cout << "Не пересекаются";
		}
		cout << endl;
		cout << endl;

	/*
	Задание №3
	Создать перечисление (enum) Color, для хранения 7 цветов радуги.
	Создать структуру Triangle, содержащее поле типа Color
	и массив для хранения трех элементов типа int (длины сторон).
	Создать и проинициализировать переменную типа Triangle корректными данными.
	Вывести на экран данные, сохраненные в вышеобъявленной переменной.
	Значение поля Color вывести в текстовом виде. (использовать конструкцию switch).
	Рассчитать и вывести на экран периметр вышеобъявленного треугольника.
	*/
		cout << "Task 3" << endl;
		int perimeter;
		Triangle example = { {Color::red}, {1,2,8} };
		
		switch (example.color)
		{
		case 1:
			cout << "Красный,";
			break;
		case 2:
			cout << "Оранжевый,";
			break;
		case 3:
			cout << "Желтый,";
			break;
		case 4:
			cout << "Зеленый,";
	break;
		case 5:
			cout << "Голубой,";
	break;
		case 6:
			cout << "Синий,";
			break;
		case 7:
			cout << "Фиолетовый,";
			break;
	
			
		default:
			break;
		}
		cout   << " " << "Стороны: "  << example.side[0] <<
			", " << example.side[1] << ", " <<  example.side[2]  << endl;
		cout << "Периметр = " << example.side[0] + example.side[1] + example.side[2] << endl;
		cout << endl;

		/*
		Задание №4
		Создать массив из 20 элеметнов типа Point.
		Проинициализировать его точками со случайными значениями координат в пределах от 0 до 100.
		Выведите на экран координаты:
		- точки с наименьшей x координатой
		- двух точек, расстояние между которыми минимально.
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
		cout << "Наименьший x у точки: " << min.x << "|" << min.y  << endl;
		cout << "Ближе всех точки: " << minimalno1.x << "|" << minimalno1.y << "  "<< minimalno2.x << "|" << minimalno2.y << endl;
		cout << endl;
	/*
	Задание №5
	Создать массив из 100 элементов типа Triangle.
	Проинициализировать его случайными значениями (длина стороны от 1 до 10).
	При инициализации проверять, что треугольник с такими длинами сторон может существовать.
	(Длина каждой стороны должна быть строго меньше длин суммы двух других сторон).
	Обработать полученный массив треугольников и вывести на экран следующую информацию:
	- вывести на экран все треугольники, периметр которых превышает значение, введенное с клавиатуры.
	Если подходящих треугольников нет, вывести соответствующее сообщение.
	- количество треугольников каждого цвета
	*/
		cout << "Task 5" << endl;
	int PersonP;
	cout << "Введите значение: ";
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
				cout << "Красный, ";
				break;
			case 2:
				cout << "Оранжевый, ";
				break;
			case 3:
				cout << "Желтый, ";
				break;
			case 4:
				cout << "Зеленый, ";
				break;
			case 5:
				cout << "Голубой, ";
				break;
			case 6:
				cout << "Синий, ";
				break;
			case 7:
				cout << "Фиолетовый, ";
				break;


			default:
				break;
			}
			cout << arr[i].side[0] << " " << arr[i].side[1] << " " << arr[i].side[2] << " " << endl;
		}

	}
	cout << endl;
	cout << "Всего каждого цвета: " << endl;
	for (int i = 0; i < 7; ++i)
	{
		cout << colours[i] << " - " << ColorsCounter[i] << endl;
	}
	cout << endl;

	/*
	Задание №6
	Написать программу, которая проверяет правильность заданных значений даты.
	Дату хранить с использованием структуры.
	Тестовые данные				Ожидаемый результат
	1 1 1992					Дата корректна
	30 6 1992					Дата корректна
	31 7 1992					Дата коррентна
	31 9 1994					Дата некорректна
	32 1 1992					Дана некорректна
	1 13 1992					Дата некорректна
	29 2 1993					Дата некорректна
	29 2 2004					Дата корректна
	29 2 1900					Дата некоррентна
	29 2 2000					Дата корректна
	*/
	cout << "Task 6" << endl;
	bool ans;
	cout << " Введите данные в формате день, месяц, год" << endl;
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