#include <iostream>

class WorldClock {
public:
	WorldClock();
	void Tick(int seconds = 1);
	bool SetTime(int hour, int minute, int second);
	int hour() const;
	int minute() const;
	int second() const;
private:
	int _second;
};
std::ostream& operator<<(std::ostream& os, const WorldClock& c);
std::istream& operator>>(std::istream& is, WorldClock& c);
