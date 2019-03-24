
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	///* Задание 1
	//Даны три натуральных числа A, B, C. Определите, существует ли треугольник с такими сторонами.
	//Если треугольник существует, выведите строку Да, иначе выведите строку Нет.
	//Треугольник — это три точки, не лежащие на одной прямой.
	//Тестовые данные				Ожидаемый результат
	//1 1 1						Да
	//1 2 4						Нет
	//12 7 5						Нет
	//7 10 3						Нет
	//4 5 8						Да
	//*/
	int a, b, c;
	cout << "Введите 3 стороны треуголки: " << endl;
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

	/* Задание 2
	Напишите код, правильно склоняющий существительное «рублей» следующее за указанным числительным.
	Например, для 10, следует напечатать «рублей», для 1 — «рубль», для 2 — «рубля».
	Использовать конструкцию switch.
	Тестовые данные			Ожидаемый результат
	1					рубль
	2					рубля
	10					рублей
	101					рубль
	1255					рублей
	*/
	int q;
	cout << "Введите деньгу" << endl;
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
		cout << "рубль " << endl;
		break;
	case 2:
	case 3:
	case 4:
		cout << "рубля " << endl;
		break;

	case 11:
	case 13:
	case 14:
	case 12:
		cout << "рублей " << endl;
		break;
	default:
		cout << "рублей " << endl;
		break;
	}





	/* Задание 3
	В воскресенье Вася пошел в кружок робототехники и увидел там такой код управления боевым роботом:
	// исходные данные, вводятся с клавиатуры.
	// true это 1, false это 0
	bool enemyInFront;
	bool isBoss;
	int robotHealth;
	// Код Васи
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
	Упростите код Васи, удалив избыточные условные операторы.
	Тестовые данные		Ожидаемый результат
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


	/* Задание 4
	Вы с Васей и Петей решили выбрать самые лучшие фотографии котиков в интернете.
	Для этого каждую фотографию каждый из вас оценил по стобалльной шкале.
	Естественно, тут же встал вопрос о том, как из трех оценок получить одну финальную.
	Вы опасаетесь, что каждый из вас сильно завысит оценку фотографиям своего котика.
	Поэтому было решено в качестве финальной оценки брать не среднее арифметическое, а медиану, то есть просто откинуть максимальную и минимальную оценки.
	Вася начал писать код выбора средней оценки из трех, но запутался в if - ах, и поэтому перепоручил эту задачу вам.
	Попробуйте не просто решить задачу, но и минимизировать количество проверок и максимально упростить условия проверок.
	Тестовые данные		Ожидаемый результат
	1 2 3				2
	5 5 5				5
	2 2 9				2
	1 5 5				5
	4 5 6				5
	*/
	int co = 0;
	int i, vas, pet, max, min;
	cout << "Введите свои оценки:" << endl;
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
	cout << "Среднее: " << co << endl;


	/* Задание 5
	Написать логику, которая проверяет возможность существования даты по введенным пользователем данных.
	Пользователь вводит данные в формате день, месяц, год.
	Тестовые данные				Ожидаемый результат
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
	cout << " Введите данные в формате день, месяц, год" << endl;
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



	/* Задание 6
	Шахматный ферзь ходит по диагонали, горизонтали или вертикали.
	Даны две различные клетки шахматной доски, Написать логику, которая определяет
	может ли ферзь попасть с первой клетки на вторую одним ходом.
	Клетки нумеруются с 1. Пользователь вводит координаты начальной и конечной клетки в формате x1x2.
	x1 - номер клетки по горизонтали, x2 - номер клетки по вертикали
	Тестовые данные				Ожидаемый результат
	54 14						true
	11 88						true
	36 61						false
	18 71						false
	23 67						true
	*/
	int x1, y1, x2, y2, gaf, may, kar, gar;
	bool dispanser;
	cout << "Введите координаты 1 клетки" << endl;
	cin >> x1;
	cin >> y1;
	cout << "Введите координаты 2 клетки" << endl;
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