#include <iostream>

class Date {
public:
	Date();
	Date(int year, int month, int day);
	void NextDay(int n = 1);
	bool SetDate(int year, int month, int day);
	int year() const;
	int month() const;
	int day() const;
private:
	static int GetDaysInYear(int year);
	static int ComputeDaysFromYearStart(int year, int month, int day);
	int year_, month_, day_;
};
std::ostream& operator<<(std::ostream& os, const Date& c);
std::istream& operator>>(std::istream& is, Date& c);
