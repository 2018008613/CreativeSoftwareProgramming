#include "calendar.h"
#include <cstring>
#include <string>

using namespace std;

ostream& operator<<(ostream& os, const Date& c)
{
	os << c.year() << "." << c.month() << "." << c.day() << endl;
	return os;
}
istream& operator>>(istream& is, Date& c)
{
	string s1, s2;
	int s3;
	getline(is, s1, '.');
	getline(is, s2, '.');
	is >> s3;
	c.SetDate(atoi(s1.c_str()), atoi(s2.c_str()), s3);
	return is;
}

Date::Date()
{
	year_ = 0;
	month_ = 1;
	day_ = 1;
}
Date::Date(int year, int month, int day)
{
	year_ = year;
	month_ = month;
	day_ = day;
}
void Date::NextDay(int n)
{
	int days = ComputeDaysFromYearStart(year_, month_, day_) + n;
	while (days <= 0)
	{
		year_ -= 1;
		days += GetDaysInYear(year_);
	}
	while (days > GetDaysInYear(year_))
	{
		days -= GetDaysInYear(year_);
		year_ += 1;
	}
	int a = 0;
	for (int i = 1;a == 0;i++)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
		{
			if (days > 31)
				days -= 31;
			else
			{
				day_ = days;
				month_ = i;
				a++;
			}
		}
		else if (i == 4 || i == 6 || i == 9 || i == 11)
		{
			if (days > 30)
				days -= 30;
			else
			{
				day_ = days;
				month_ = i;
				a++;
			}
		}
		else if (i == 2)
		{
			if (GetDaysInYear(year_) == 366)
			{
				if (days > 29)
					days -= 29;
				else
				{
					day_ = days;
					month_ = i;
					a++;
				}
			}
			else
			{
				if (days > 28)
					days -= 28;
				else
				{
					day_ = days;
					month_ = i;
					a++;
				}
			}
		}
	}
}
bool Date::SetDate(int year, int month, int day)
{
	int a = 0;
	if (month >= 1 && month <= 12 && day >= 1)
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			if (day <= 31)
				a = 1;
		}
		if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			if (day <= 30)
				a = 1;
		}
		if (month == 2)
		{
			if (GetDaysInYear(year) == 366)
			{
				if (day <= 29)
					a = 1;
			}
			else
			{
				if (day <= 28)
					a = 1;
			}
		}
	}
	if (a == 1)
	{
		year_ = year;
		month_ = month;
		day_ = day;
		return true;
	}
	else
	{
			cout << "Invalid date: " << year << "." << month << "." << day << endl;
			return false;
	}
		
}
int Date::year() const
{
	return year_;
}
int Date::month() const
{
	return month_;
}
int Date::day() const
{
	return day_;
}

int Date::GetDaysInYear(int year)
{
	int day = 365;
	if (year % 4 == 0 && year % 100 != 0)
		day = 366;
	if (year % 400 == 0)
			day = 366;
	return day;
}

int Date::ComputeDaysFromYearStart(int year, int month, int day)
{
	int n = 0;
		for (int i = 1;i <= month;i++)
		{
			if (i != month)
			{
				if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
					n += 31;
				else if (i == 4 || i == 6 || i == 9 || i == 11)
					n += 30;
				else if (i == 2)
				{
					if (GetDaysInYear(year) == 365)
						n += 28;
					else
						n += 29;
				}
			}
			else
				n += day;
		}
		return n;
}
