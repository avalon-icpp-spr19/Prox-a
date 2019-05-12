#include<iostream>
#include"Date.hpp"
#include <string>
using namespace ext;
using namespace std;
void alesha(int n)
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
	
}
int VMeanVindetta(float r, float h)
{
	int V = 3.14 * (pow(r, 2))*h;

	
	return V;
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
	setlocale(LC_ALL, "ru");

	/*
	Çàäàíèå ¹1
Íàïèñàòü ôóíêöèþ, êîòîðàÿ âûâîäèò â êîíñîëü êóáû ïåðâûõ 10 íàòóðàëüíûõ ÷èñåë.
Äîâàâüòå â íàïèñàííóþ ôóíêèþ ïàðàìåòð n, ÷òîáû îíà âûâîäèëà êóáû n ïåðâûõ ïåðâûõ íàòóðàëüíûõ ÷èñåë.
	*/
	cout << "Task 1" << endl;
	int n;
	cout << "Enter n = ";
	cin >> n;
	alesha(n);



	/*
	Çàäàíèå ¹2
Íàïèøèòå ôóíêöèþ, êîòîðàÿ âû÷èñëÿåò îáúåì öèëèíäðà.
Åå ïàðàìåòðàìè äîëæíû áûòü ðàäóñ è âûñîòà, êîòîðûå ââîäÿòñÿ ñ êëàâèàòóðû.
	*/
	cout << "Task 2" << endl;
	int r, h;
	cout << "Enter radius = ";
	cin >> r;
	cout << "Enter height = ";
	cin >> h;
	cout << VMeanVindetta(r, h) << endl;


	/*
	Çàäàíèå ¹3
Íàïèøèòå ôóíêöèþ min(a, b), âû÷èñëÿþùóþ ìèíèìóì äâóõ ÷èñåë.
Çàòåì íàïèøèòå ôóíêöèþ min4(a, b, c, d), âû÷èñëÿþùóþ ìèíèìóì 4 ÷èñåë ñ ïîìîùüþ ôóíêöèè min.
Ñ÷èòàéòå ÷åòûðå öåëûõ ÷èñëà èç êîíñîëè è âûâåäèòå èõ ìèíèìóì.
Òåñòîâûå äàííûå				Îæèäàåìûé ðåçóëüòàò
1 2 3 4						1
4 3 2 1						1
9 5 1 7						1
7 3 5 9						3

	*/
	cout << "Task 3" << endl;
	int c, d, e, f;
	cout << "Ââåäèòå 4 ÷èñëà: " << endl;
	cin >> c;
	cin >> d;
	cin >> e;
	cin >> f;
	cout << "Minimal - ";
	LGMinimal4(c, d, e, f);



/*
Çàäàíèå ¹4
Äîáàâèòü â ïðîåêò ôàéë Date.hpp
Ðåàëèçîâàòü ôóíêöèè êîòîðûå îáúÿâëåíû â ôàéëå Date.hpp
Ïðè âûïîëíåíèè çàäàíèÿ ìîæíî èñïîëüçîâàòü ñâîè âñïîìîãàòåëüíûå ôóíêöèè.
Ïðîäåìîíñòðèðîâàòü ðàáîòû âñåõ íàïèñàííûõ ôóíêöèé â main().*/
	cout << "Task 4" << endl;
	cout << "1)" << endl;
	int yad, mon, raey;
	cout << "Enter dd,mm,year" << endl;	
		Month htnom;
	cin >> yad >> mon>> raey;
	switch (mon)
	{
	case 1:
		htnom = Month::January;
			break;
	case 2:
		htnom = Month::February;
		break;
	case 3:
		htnom = Month::March;
		break;
	case 4:
		htnom = Month::April;
		break;
	case 5:
		htnom = Month::May;
		break;
	case 6:
		htnom = Month::June;
	case 7:
		htnom = Month::July;
		break;
	case 8:
		htnom = Month::August;
		break;
	case 9:
		htnom = Month::September;
		break;
	case 10:
		htnom = Month::October;
		break;
	case 11:
		htnom = Month::Novemver;
		break;
	case 12:
		htnom = Month::December;
		break;		
	default:	
		break;
	}
	Date date;
	date.day = yad;
	date.month = htnom;
	date.year = raey;
	
	
	countJND(date);
	cout << "2)" << endl;
	int mont;
	Date from, to;
	cout << "Enter  date from:(dd.mm.yyyy) " << endl;
	cin >> from.day;
	cin >> mont;
	cin >> from.year;
	Month motecarlo;
	switch (mont)
	{
	case 1:
		motecarlo = Month::January;
		break;
	case 2:
		motecarlo = Month::February;
		break;
	case 3:
		motecarlo = Month::March;
		break;
	case 4:
		motecarlo = Month::April;
		break;
	case 5:
		motecarlo = Month::May;
		break;
	case 6:
		motecarlo = Month::June;
	case 7:
		motecarlo = Month::July;
		break;
	case 8:
		motecarlo = Month::August;
		break;
	case 9:
		motecarlo = Month::September;
		break;
	case 10:
		motecarlo = Month::October;
		break;
	case 11:
		motecarlo = Month::Novemver;
		break;
	case 12:
		motecarlo = Month::December;
		break;
	default:
		break;
	}
	from.month = motecarlo;
	int mont1;	
	cout << "Enter  date to:(dd.mm.yyyy) " << endl;
	cin >> to.day;
	cin >> mont1;
	cin >> to.year;
	Month motecarlo1;
	switch (mont1)
	{
	case 1:
		motecarlo1 = Month::January;
		break;
	case 2:
		motecarlo1 = Month::February;
		break;
	case 3:
		motecarlo1 = Month::March;
		break;
	case 4:
		motecarlo1 = Month::April;
		break;
	case 5:
		motecarlo1 = Month::May;
		break;
	case 6:
		motecarlo1 = Month::June;
	case 7:
		motecarlo1 = Month::July;
		break;
	case 8:
		motecarlo1 = Month::August;
		break;
	case 9:
		motecarlo1 = Month::September;
		break;
	case 10:
		motecarlo1 = Month::October;
		break;
	case 11:
		motecarlo1 = Month::Novemver;
		break;
	case 12:
		motecarlo1 = Month::December;
		break;
	default:
		break;
	}
	to.month = motecarlo1;
	countDistance(from, to);
	cout << "3)" << endl;
	int gromozeka;
	Date agafon;
	cout << "Enter dd.mm.yyyy" << endl;
	cin >> agafon.day;
	cin >> gromozeka;
	cin >> agafon.year;
	Month shelby;
	switch (gromozeka)
	{
	case 1:
		shelby = Month::January;
		break;
	case 2:
		shelby = Month::February;
		break;
	case 3:
		shelby = Month::March;
		break;
	case 4:
		shelby = Month::April;
		break;
	case 5:
		shelby = Month::May;
		break;
	case 6:
		shelby = Month::June;
	case 7:
		shelby = Month::July;
		break;
	case 8:
		shelby = Month::August;
		break;
	case 9:
		shelby = Month::September;
		break;
	case 10:
		shelby = Month::October;
		break;
	case 11:
		shelby = Month::Novemver;
		break;
	case 12:
		shelby = Month::December;
		break;
	default:
		break;
	}
	agafon.month = shelby;
	cout << "Enter date format(1 - MonthAsInt, 2 - MonthAsString):" << endl;
	int form;
	cin >> form;
	DateFormat format;
	switch (form)
	{
	case 1:
		format = DateFormat::MonthAsInt;
		break;
	case 2:
		format = DateFormat::MonthAsString;
		break;

	default:
		break;
	}
	print(agafon,format);
	cout << "4)" << endl;
	cout << "Enter dd.mm.yyyy" << endl;
	Date redo;
	cin >> redo.day;
	int bullet;
	cin >> bullet;
	cin >> redo.year;
	Month shade;
	switch (bullet)
	{
	case 1:
		shade = Month::January;
		break;
	case 2:
		shade = Month::February;
		break;
	case 3:
		shade = Month::March;
		break;
	case 4:
		shade = Month::April;
		break;
	case 5:
		shade = Month::May;
		break;
	case 6:
		shade = Month::June;
	case 7:
		shade = Month::July;
		break;
	case 8:
		shade = Month::August;
		break;
	case 9:
		shade = Month::September;
		break;
	case 10:
		shade = Month::October;
		break;
	case 11:
		shade = Month::Novemver;
		break;
	case 12:
		shade = Month::December;
		break;
	default:
		break;
	}
	redo.month = shade;
	getSeason(redo);
	cout << "5)" << endl;
	int gh;
	Date lhs, rhs;
	cout << "Enter  date from:(dd.mm.yyyy) " << endl;
	cin >> lhs.day;
	cin >> gh;
	cin >> lhs.year;
	Month loop;
	switch (gh)
	{
	case 1:
		loop = Month::January;
		break;
	case 2:
		loop = Month::February;
		break;
	case 3:
		loop = Month::March;
		break;
	case 4:
		loop = Month::April;
		break;
	case 5:
		loop = Month::May;
		break;
	case 6:
		loop = Month::June;
	case 7:
		loop = Month::July;
		break;
	case 8:
		loop = Month::August;
		break;
	case 9:
		loop = Month::September;
		break;
	case 10:
		loop = Month::October;
		break;
	case 11:
		loop = Month::Novemver;
		break;
	case 12:
		loop = Month::December;
		break;
	default:
		break;
	}
	lhs.month = loop;
	int gh1;
	cout << "Enter  date to:(dd.mm.yyyy) " << endl;
	cin >> rhs.day;
	cin >> gh1;
	cin >> rhs.year;
	Month loop1;
	switch (gh1)
	{
	case 1:
		loop1 = Month::January;
		break;
	case 2:
		loop1 = Month::February;
		break;
	case 3:
		loop1 = Month::March;
		break;
	case 4:
		loop1 = Month::April;
		break;
	case 5:
		loop1 = Month::May;
		break;
	case 6:
		loop1 = Month::June;
	case 7:
		loop1 = Month::July;
		break;
	case 8:
		loop1 = Month::August;
		break;
	case 9:
		loop1 = Month::September;
		break;
	case 10:
		loop1 = Month::October;
		break;
	case 11:
		loop1 = Month::Novemver;
		break;
	case 12:
		loop1 = Month::December;
		break;
	default:
		break;
	}
	rhs.month = loop1;
	isSame(lhs, rhs);
	cout << "6)" << endl;

 

}
