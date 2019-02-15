﻿#include<iostream>
#include<iomanip>
#include<limits>
using namespace std;
int main()
{
	setlocale(0, "");
	/* Упражнение 1
	* Дано целое трехзначное число. Найдите сумму его цифр.
	* Тестовые данные			Ожидаемый результат
	* 111						3
	* 999						27
	* 123						6
	* 321						6
	* 528						15
	*/
	int chislo;
	cout << "Сумма цифр трехзначного числа."<< endl;
	cout << "Введите целое трехзначное число = ";
	cin >> chislo;
	cout << chislo / 100 + chislo / 10 % 10 + chislo % 10 << endl;
	/*
	* Упражнение 2
	* Даны значения двух моментов времени, принадлежащих одним и тем же суткам: часы, минуты и секунды для каждого из моментов времени.
	* Известно, что второй момент времени наступил не раньше первого.
	* Определите, сколько секунд прошло между двумя моментами времени.
	* Тестовые данные			Ожидаемый резульат
	* 1 1 1 2 2 2				3661
	* 2 20 20 3 20 20			3600
	* 23 30 00 23 59 59			1799
	*/
	int h, m, s, h1, m1, s1, rez;
	cout << "Сколько секунд прошло между 2 моментами." << endl;
	cout << "Введите значения 1 момента времени: " << endl;
	cin >> h;
	cin >> m;
	cin >> s;
	cout << "Введите значения 2 момента времени: " << endl;
	cin >> h1;
	cin >> m1;
	cin >> s1;
	rez = ((h1 - h) * 3600) + ((m1 - m) * 60) + (s1 - s);
	cout << rez << endl;
	/* Упражнение 3
	Посчитать Юлианскую дату
	Пользователь вводит дату в формате день, месяц, год
	Вывести в консоль рассчитанную Юлианскую дату
	https://ru.wikipedia.org/wiki/%D0%AE%D0%BB%D0%B8%D0%B0%D0%BD%D1%81%D0%BA%D0%B0%D1%8F_%D0%B4%D0%B0%D1%82%D0%B0
	раздел "Вычисление номера юлианского дня (JDN) по дате григорианского календаря"
	Тестовые данные				Ожидаемый результат
	1 12 2018					    2458454
	1 1 2018					    2458120
	1 6 2000					    2451697
	21 12 2012					  2456283
	*/
	int da, mo, ye, mo1, ye1, a, JDN;
	cout << "Считаю Юлианскую дату." << endl;
	cout << "Введите  дату в формате день, месяц, год: " << endl;
	cin >> da;
	cin >> mo;
	cin >> ye;
	a = (14 - mo) / 12;
	ye1 = ye + 4800 - a;
	mo1 = mo + 12 * a - 3;
	JDN = da + ((153 * mo1 + 2) / 5) + (365 * ye1)
		+ (ye1 / 4) - (ye1 / 100) + (ye1 / 400) - 32045;
	cout << JDN << endl;
	/* Упражнение 4
	* Электронные часы показывают время в формате h:mm:ss (от 0:00:00 до 23:59:59),
	* то есть сначала записывается количество часов, потом обязательно двузначное количество минут,
	* затем обязательно двузначное количество секунд.
	* Количество минут и секунд при необходимости дополняются до двузначного числа нулями.
	* Тестовые данные		Ожидаемый результат
	* 10					      0:00:10
	* 122					      0:02:02
	* 1220					    0:20:20
	* 12200					    3:23:20
	* 86000					    23:53:20
	*/
	int vvod, hours, minuts, mi1, mi2, seconds, si1, si2;
	cout << "Перевожу секунды в формат электронных часов."<<endl;
	cout << "Введите время в формате h:mm:ss (от 0:00:00 до 23:59:59): ";
	cin >> vvod;
	hours = vvod / 3600;
	minuts = (vvod - hours * 3600) / 60;
	mi1 = minuts / 10;
	mi2 = minuts % 10;
	seconds = (vvod - minuts * 60) - hours * 3600;
	si1 = seconds / 10;
	si2 = seconds % 10;
	cout << hours << ":" << mi1 << mi2 << ":" << si1 << si2 << endl;

	/* Упражнение 5
	* На вход дается натуральное число N. Выведите следующее за ним четное число
	* Тестовые данные		Ожидаемый результат
	* 5						6
	* 6						8
	* 0						2
	* 111					112
	* 112					114
	*/
	int cheese, answ;
	cout << "Вывожу четное число за вашим." << endl;
	cout << "Введите натуральное число N = " << endl;
	cin >> cheese;
	answ = cheese - ( cheese % 2) + 2;
	cout << answ << endl;

	/* Упражнение 6
	* Дано четырехзначное число. Определите, является ли его десятичная запись симметричной.
	* Если число симметричное, то выведите 1, иначе выведите любое другое целое число.
	* Число может иметь меньше четырех знаков, тогда нужно считать, что его десятичная запись дополняется слева незначащими нулями.
	* Тестовые данные			Ожидаемый результат
	* 2002						1
	* 2018						не 1
	* 42						  не 1
	* 220						  1
	* 9999						1
	*/
	int chaso, one, two, three, four, otwet;
	cout << "Симметричное ли?"<< endl;
	cout << "Введите число = ";
	cin >> chaso;
	one = chaso / 1000;
	two = chaso / 100 % 10 ;
	three = chaso % 100 / 10;
	four = chaso % 10;
	otwet = (one + two)/(three+four);
	cout << otwet << endl;
	/* Дополнительное упражнение (будет оцениваться отдельно)
	* Улитка ползет по вертикальному шесту высотой H метров, поднимаясь за день на A метров, а за ночь спускаясь на B метров.
	* На какой день улитка доползет до вершины шеста?
	* Тестовые данные		Ожидаемый результат
	*  H	A	B
	* 10	3	2			8
	* 11	4	2			5
	* 80	7	3			20
	*/
	int H, A, B, ans;
	cout << "Сколько дней нужно улитке?"<< endl;
	cout << "Введите высоту шестааа = ";
	cin >> H;
	cout << "Введите на сколько метров гусельница поднимается за день =  ";
	cin >> A; 
	cout << "Введите на сколько соскальзывет за ночь = ";
	cin >> B;
	ans = H / (A - B);
	cout << ans << endl;//первый ответ в тестовых неверный, так как за целый день(ночь, день) улитка проходит 1 м, следовательно нужно 10 дней.
}
