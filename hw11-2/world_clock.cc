#include <cstring>
#include <string>
#include "world_clock.h"

using namespace std;

ostream& operator<<(ostream& os, const WorldClock& c)
{
	os << c.hour() << ":" << c.minute() << ":" << c.second() << endl;
	return os;
}

istream& operator>>(istream& is, WorldClock& c)
{
	string s1, s2;
	int s3;
	getline(is, s1, ':');
	getline(is, s2, ':');
	is >> s3;
	c.SetTime(atoi(s1.c_str()), atoi(s2.c_str()), s3);
	return is;
}

WorldClock::WorldClock()
{
	_second = 0;
}

void WorldClock::Tick(int seconds)
{
	_second += seconds;
	while (_second < 0)
			_second += 3600 * 24;
}
bool WorldClock::SetTime(int hour, int minute, int second)
{
	if (hour >= 0 && hour <= 23 && minute >= 0 && minute < 60 && second >= 0 && second < 60)
	{
		_second = hour * 60 * 60 + minute * 60 + second;
		return true;
	}
	else
	{
		cout << "Invalid time: " << hour << ":" << minute << ":" << second << endl;
		return false;
	}
}
int WorldClock::hour() const
{
	return (_second / 3600) % 24;
}
int WorldClock::minute() const
{
	return ((_second - this ->hour() * 3600) / 60) % 60;
}
int WorldClock::second() const
{
	return ((_second - (this -> hour()) * 3600 - (this -> minute()) * 60)) % 60;
}
