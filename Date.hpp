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
		���������� ��������� ����
		https://ru.wikipedia.org/wiki/%D0%AE%D0%BB%D0%B8%D0%B0%D0%BD%D1%81%D0%BA%D0%B0%D1%8F_%D0%B4%D0%B0%D1%82%D0%B0
		������ "���������� ������ ���������� ��� (JDN) �� ���� �������������� ���������"
		�������� ������					��������� ���������
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
		������������ ���������� ���� ����� ����� ������.
		��� ����������� ����������� CountJND
	*/
	int countDistance(Date from, Date to)
	{
		std::cout << "Between days:" << countJND(from) - countJND(to) << std::endl;
		return 1;
	};
	/*
		������� � ������� ���� � �������: dd.mm.yyyy (2.10.2001)
		���� �������� DateFormat ����� MonthAsString,
		�� ������� ���� � �������: dd monthName yyyy (2 ������� 2001)
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
		���������� ����� (����, �����, ����, �����) ������������ ����
	*/
	int getSeason(Date date)
	{
		switch (date.month)
		{
		case Month::January:
			std::cout << "winter" << " ";
			break;
		case Month::February:
			std::cout << "winter" << " ";
			break;
		case Month::March:
			std::cout << "spring" << " ";
			break;
		case Month::April:
			std::cout << "spring" << " ";
			break;
		case Month::May:
			std::cout << "spring" << " ";
			break;
		case Month::June:
			std::cout << "summer" << " ";
			break;
		case Month::July:
			std::cout << "summer" << " ";
			break;
		case Month::August:
			std::cout << "summer" << " ";
			break;
		case Month::September:
			std::cout << "autumn" << " ";
			break;
		case Month::October:
			std::cout << "autumn" << " ";
			break;
		case Month::Novemver:
			std::cout << "autumn" << " ";
			break;
		case Month::December:
			std::cout << "winter" << " ";
			break;

		default:
			break;
		}
		cout << endl;
		return 1;
	};

	/*
		���������� ���� �� ���������������
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
		������ ���� �������
	*/
	void swap(Date * lhs, Date * rhs)
	{
		

		
	};

	/*
		���������� ��������� �� ������� ����
	*/
	Date * max(Date * lhs, Date * rsh);

	/*
		���������� ��������� �� ������� ����
	*/
	Date * min(Date * lhs, Date * rsh);

	/*
		���������� ��������� �� ����������� ���� � ���������� ������� ���
	*/
	Date * getMinDate(Date dates[], int size);

	/*
		���������� ��������� �� ������������ ���� � ���������� ������� ���
	*/
	Date * getMaxDate(Date dates[], int size);

	/*
		��������� ����� �� ������������ ���� � ������������� ����������.
		� ������ ������ ���������� true, � ��������� ���� �� ����������� ������.
		���� ���� � ����������� ����������� ������������ �� �����,
		���������� false.
	*/
	bool tryFillDate(Date * date, int year, int month, int day);
}