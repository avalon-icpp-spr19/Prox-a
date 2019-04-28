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
		std::cout << JDN << std::endl;
		return JDN;
	}

	/*
		Ðàññ÷èòûâàåò êîëè÷åñòâî äíåé ìåæäó äâóìÿ äàòàìè.
		Ïðè ðåàëèçâàöèè èñïîëüçóéòå CountJND
	*/
	int countDistance(Date from, Date to)
	{
		std::cout << "Between days:" << countJND(from) - countJND(to) << std::endl;
		return 1;
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
				std::cout << "January" << " " ;
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
	int getSeason(Date date)
	{
		switch (date.month)
		{
		case Month::January:
			case Month::December:
		case Month::February:
			std::cout << "winter" << " ";
			break;
		case Month::March:
			
		case Month::April:
			
		case Month::May:
			std::cout << "spring" << " ";
			break;
		case Month::June:
			
		case Month::July:
			
		case Month::August:
			std::cout << "summer" << " ";
			break;
		case Month::September:
			
		case Month::October:
			
		case Month::Novemver:
			std::cout << "autumn" << " ";
			break;
		
			

		default:
			break;
		}
		cout << endl;
		return 1;
	};

	/*
		Ñðàâíèâàåò äàòû íà ýêâèâàëåíòíîñòü
	*/
	bool isSame(Date lhs, Date rhs)
	{
		bool ans = false;
		if (lhs.day == rhs.day && lhs.month == rhs.month &&
			lhs.year == rhs.year)ans = true;
		std::cout << "isSame: "<< ans << std::endl;
		return 1;
		
	};

	/*
		Ìåíÿåò äàòû ìåñòàìè
	*/
	void swap(Date * lhs, Date * rhs)
	{
		

		
	};

	/*
		Âîçâðàùàåò óêàçàòåëü íà áîëüøóþ äàòó
	*/
	Date * max(Date * lhs, Date * rsh);

	/*
		Âîçâðàùàåò óêàçàòåëü íà ìåíüøóþ äàòó
	*/
	Date * min(Date * lhs, Date * rsh);

	/*
		Âîçâðàùàåò óêàçàòåëü íà ìèíèìàëüíóþ äàòó â ïåðåäàííîì ìàññèâå äàò
	*/
	Date * getMinDate(Date dates[], int size);

	/*
		Âîçâðàùàåò óêàçàòåëü íà ìàêñèìàëüíóþ äàòó â ïåðåäàííîì ìàññèâå äàò
	*/
	Date * getMaxDate(Date dates[], int size);

	/*
		Ïðîâåðÿåò ìîæåò ëè ñóùåñòâîâàòü äàòà ñ ïåðåäàâàåìûìè çíà÷åíèÿìè.
		Â ñëó÷àå óñïåõà âîçâðàùàåò true, è çàïîëíÿåò äàòó ïî ïåðåäàííîìó àäðåñó.
		Åñëè äàòà ñ ïåðåäàííûìè ïàðàìåòðàìè ñóùåñòâîâàòü íå ìîæåò,
		âîçâðàùàåò false.
	*/
	bool tryFillDate(Date * date, int year, int month, int day);
}
