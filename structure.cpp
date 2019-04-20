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

const int MAX_LENGHT = 32; // задаем максимальную длину текстовых данных
const int MAX_EXAMS = 10; // задаем максимальное количество экзаменов у одного студента
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
= { "красный", "оранжевый","желтый", "зеленый",
	"голубой", "синий" , "фиолетовый" };
;


int main()
{

	setlocale(0, "");


	/*
	Задание №1
	Создать структуру Point, содержащую два поля x, y типа float.
	Создать и проинициализировать переменную типа Point.
	Создать переменную типа Point и проинициализировать ее данными с клавиатуры.
	Вывести на экран значения x, y вышеобъявленных переменных.
	*/
		Point per = { 1.3,5.5 };
		Point per1;
		cin >> per1.x;
		cin >> per1.y;
		cout << per1.x << "|" << per1.y << endl;
		/*
	Написать программу, которая определеяет принадлежит ли заданная точка кругу заданного радиуса.
	Координаты точки и радиус пользователь вводит с клавиатуры.
	Для хранения координат точки использовать структуру Point.
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
	Написать программу, которая по двум заданным точкам - концам отрезка находит точку середины отрезка.
	Координаты точек пользователь вводит с клавиатуры.
	Для хранения координат точек использовать структуру Point.
	Рассчитанную точку середины отрезка также хранить как структуру Point.
	Вывести координаты полученной точки в консоль.
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
	Задание №2
	Создать структуру Circle, содержащую одно поле типа int - радиус и второе поле типа Point - центр окружности.
	Создать и проинициализировать переменную типа Circle.
	Создать переменную типа Circle и проинициализировать ее данными введенными с клавиатуры.
	Вывести на экран данные, сохраненные в вышеобъявленных переменных.
	Даны две переменные типа Circle.
	Написать программу, которая определяет пересекаются ли окружности,
	описанные данными переменными.
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
	if (Michail_Krug.r + Michail_Krug2.r <= dlinna)cout << "Пересекаются";
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
	
	
	
	
	
			

	

		

/*
Задание №4
Создать массив из 20 элеметнов типа Point.
Проинициализировать его точками со случайными значениями координат в пределах от 0 до 100.
Выведите на экран координаты:
- точки с наименьшей x координатой
- двух точек, расстояние между которыми минимально.
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
				cout << zvett[i] << " цвет, штук: " << arxiz[i] << endl;
			}

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

			