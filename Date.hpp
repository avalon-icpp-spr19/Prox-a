#pragma once
#pragma once
#include <string>

namespace ext
{
	enum Month
	{
		January = 1,
		February,
		March,
		April,
		May,
		June,
		July,
		August,
		September,
		October,
		Novemver,
		December
	};

	enum DateFormat
	{
		MonthAsInt,
		MonthAsString
	};

	enum Season
	{
		Winter,
		Spring,
		Summer,
		Autumn
	};

	struct Date
	{
		int day;
		Month month;
		int year;


	};

	/*
	Âîçâðàùàåò Þëèàíñêóþ äàòó
	https://ru.wikipedia.org/wiki/%D0%AE%D0%BB%D0%B8%D0%B0%D0%BD%D1%81%D0%BA%D0%B0%D1%8F_%D0%B4%D0%B0%D1%82%D0%B0
	ðàçäåë "Âû÷èñëåíèå íîìåðà þëèàíñêîãî äíÿ (JDN) ïî äàòå ãðèãîðèàíñêîãî êàëåíäàðÿ"
	Òåñòîâûå äàííûå					Îæèäàåìûé ðåçóëüòàò
	1.12.2018					2458454
	1.1.2018					2458120
	1.6.2000					2451697
	21.12.2012					2456283
	*/
	unsigned int countJND(Date date)
	{
		int  mo1, ye1, a, JDN;

		a = (14 - date.month) / 12;
		ye1 = date.year + 4800 - a;
		mo1 = date.month + 12 * a - 3;
		JDN = date.day + ((153 * mo1 + 2) / 5) + (365 * ye1)
			+ (ye1 / 4) - (ye1 / 100) + (ye1 / 400) - 32045;
	
		return JDN;
	}

	/*
	Ðàññ÷èòûâàåò êîëè÷åñòâî äíåé ìåæäó äâóìÿ äàòàìè.
	Ïðè ðåàëèçâàöèè èñïîëüçóéòå CountJND
	*/
	int countDistance(Date from, Date to)
	{
		
		return countJND(from) - countJND(to);
	};
	/*
	Âûâîäèò â êîíñîëü äàòó â ôîðìàòå: dd.mm.yyyy (2.10.2001)
	Åñëè ïàðàìåòð DateFormat ðàâåí MonthAsString,
	òî âûâåñòè äàòó â ôîðìàòå: dd monthName yyyy (2 îêòÿáðÿ 2001)
	*/
	void print(Date data, DateFormat format = DateFormat::MonthAsInt)
	{
		if (format == DateFormat::MonthAsInt)
		{
			std::cout << data.day << "." << data.month << "." << data.year << std::endl;
		}
		else
		{
			std::cout << data.day << " ";
			switch (data.month)
			{
			case Month::January:
				std::cout << "January" << " ";
				break;
			case Month::February:
				std::cout << "February" << " ";
				break;
			case Month::March:
				std::cout << "March" << " ";
				break;
			case Month::April:
				std::cout << "April" << " ";
				break;
			case Month::May:
				std::cout << "May" << " ";
				break;
			case Month::June:
				std::cout << "June" << " ";
				break;
			case Month::July:
				std::cout << "July" << " ";
				break;
			case Month::August:
				std::cout << "August" << " ";
				break;
			case Month::September:
				std::cout << "September" << " ";
				break;
			case Month::October:
				std::cout << "October" << " ";
				break;
			case Month::Novemver:
				std::cout << "Novemver" << " ";
				break;
			case Month::December:
				std::cout << "December" << " ";
				break;

			default:
				break;
			}
			std::cout << data.year << std::endl;

		}


	};
	/*
	Âîçâðàùàåò ñåçîí (çèìà, âåñíà, ëåòî, îñåíü) ïåðåäàâàåìîé äàòû
	*/
	Season getSeason(Date date)
	{
		Season sizon;
		switch (date.month)
		{
		case Month::January:
		case Month::December:
		case Month::February:
			sizon = Season::Winter;	
		
			break;
		case Month::March:

		case Month::April:

		case Month::May:
			sizon = Season::Spring;
			break;
		case Month::June:

		case Month::July:

		case Month::August:
			sizon = Season::Summer;
			break;
		case Month::September:

		case Month::October:

		case Month::Novemver:
			sizon = Season::Autumn;
			break;



		default:
			break;
		}
		
		return sizon;
	};

	/*
	Ñðàâíèâàåò äàòû íà ýêâèâàëåíòíîñòü
	*/
	void isSame(Date lhs, Date rhs)
	{
		bool ans = false;
		if (lhs.day == rhs.day && lhs.month == rhs.month &&
			lhs.year == rhs.year)ans = true;
		std::cout << "isSame: " << ans << std::endl;
		

	};

	/*
	Ìåíÿåò äàòû ìåñòàìè
	*/
	void swap(Date * lhs, Date * rhs)
	{
		Date horse;
		Date *ptr = &horse;
		*ptr = *lhs;
		*lhs = *rhs;
		*rhs = *ptr;
		

	};

	/*
	Âîçâðàùàåò óêàçàòåëü íà áîëüøóþ äàòó
	*/
	Date  *max(Date * lhs, Date * rsh)
	{
		
	
		if (countJND(*lhs) > countJND(*rsh))
		{
			return lhs;
			
		}
		
		else 
		{
			return rsh;
		}
		
	}

	/*
	Âîçâðàùàåò óêàçàòåëü íà ìåíüøóþ äàòó
	*/
	Date * min(Date * lhs, Date * rsh)
	{


		if (countJND(*lhs) < countJND(*rsh))
		{
			return lhs;

		}

		else
		{
			return rsh;
		}

	}


	/*
	Âîçâðàùàåò óêàçàòåëü íà ìèíèìàëüíóþ äàòó â ïåðåäàííîì ìàññèâå äàò
	*/
	Date * getMinDate(Date dates[], int size)
	{
		Date min;
		Date *ptr = &min;
		for (int i = 0; i < size; ++i)
		{
			for (int j = 0; j < size; ++j)
			{
				if (countJND(dates[i]) < countJND(dates[j]) && i != j)
				{
					*ptr = dates[i];
				}
			}

		}

		return ptr;
	}

	/*
	Âîçâðàùàåò óêàçàòåëü íà ìàêñèìàëüíóþ äàòó â ïåðåäàííîì ìàññèâå äàò
	*/
	Date * getMaxDate(Date dates[], int size)
	{
		Date max;
		Date *ptr = &max;
		for (int i = 0; i < size; ++i)
		{
			for (int j = 0; j < size; ++j)
			{
				if (countJND(dates[i]) > countJND(dates[j]) && i != j)
				{
					*ptr = dates[i];
				}
			}

		}

		return ptr;
	}

	/*
	Ïðîâåðÿåò ìîæåò ëè ñóùåñòâîâàòü äàòà ñ ïåðåäàâàåìûìè çíà÷åíèÿìè.
	Â ñëó÷àå óñïåõà âîçâðàùàåò true, è çàïîëíÿåò äàòó ïî ïåðåäàííîìó àäðåñó.
	Åñëè äàòà ñ ïåðåäàííûìè ïàðàìåòðàìè ñóùåñòâîâàòü íå ìîæåò,
	âîçâðàùàåò false.
	*/
	bool tryFillDate(Date * date, int y, int m, int d)
	{
		bool ans = false;
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
		if (ans == true)
		{
			date->day = d;			
			date->year = y;
			Month loop;
			switch (m)
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
			date->month = loop;
			return ans;
		
	}
		else
		{
			return ans;
		}
	}
}