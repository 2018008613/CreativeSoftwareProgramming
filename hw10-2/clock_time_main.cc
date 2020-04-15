#include "clock_time.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Clock {
protected:
	ClockTime _clockTime;
	double _driftPerSecond;
	double _totalDrift;
public:
	Clock(int hour, int minute, int second, double driftPerSecond);
	void reset();
	void tick();
	virtual void displayTime() = 0;
};
class NaturalClock : public Clock{
public:
	NaturalClock(int hour, int minute, int second, double driftPerSecond);
	virtual void displayTime();
};
class MechanicalClock : public Clock {
public:
	MechanicalClock(int hour, int minute, int second, double driftPerSecond);
	virtual void displayTime();
};
class DigitalClock : public Clock {
public:
	DigitalClock(int hour, int minute, int second, double driftPerSecond);
	virtual void displayTime();
};
class QuantumClock : public Clock {
public:
	QuantumClock(int hour, int minute, int second, double driftPerSecond);
	virtual void displayTime();
};
class SundialClock : public NaturalClock {
public:
	SundialClock(int hour, int minute, int second);
};
class CuckooClock : public MechanicalClock {
public:
	CuckooClock(int hour, int minute, int second);
};
class GrandFatherClock: public MechanicalClock {
public:
	GrandFatherClock(int hour, int minute, int second);
};
class WristClock : public DigitalClock {
public:
	WristClock(int hour, int minute, int second);
};
class AtomicClock : public QuantumClock {
public:
	AtomicClock(int hour, int minute, int second);
};
Clock::Clock(int hour, int minute, int second, double driftPerSecond)
{
	_clockTime.setTime(hour, minute, second, 1);
	_driftPerSecond = driftPerSecond;
	_totalDrift = 0;
}
NaturalClock::NaturalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) {}
MechanicalClock::MechanicalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) {}
DigitalClock::DigitalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) {}
QuantumClock::QuantumClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) {}
SundialClock::SundialClock(int hour, int minute, int second) : NaturalClock(hour, minute, second, 0.0) {}
CuckooClock::CuckooClock(int hour, int minute, int second) : MechanicalClock(hour, minute, second, 0.000694444) {}
GrandFatherClock::GrandFatherClock(int hour, int minute, int second) : MechanicalClock(hour, minute, second, 0.000347222) {}
WristClock::WristClock(int hour, int minute, int second) : DigitalClock(hour, minute, second, 0.000034722) {}
AtomicClock::AtomicClock(int hour, int minute, int second) : QuantumClock(hour, minute, second, 0.0) {}
void Clock::reset()
{
	_clockTime.reset();
}
void Clock::tick()
{
	_clockTime.increment();
	_totalDrift += _driftPerSecond;
}
void NaturalClock::displayTime()
{
	_clockTime.display();
	cout << ", total drift: " << _totalDrift << endl;
}
void MechanicalClock::displayTime()
{
	_clockTime.display();
	cout << ", total drift: " << _totalDrift << endl;
}
void DigitalClock::displayTime()
{
	_clockTime.display();
	cout << ", total drift: " << _totalDrift << endl;
}
void QuantumClock::displayTime()
{
	_clockTime.display();
	cout << ", total drift: " << _totalDrift << endl;
}

int main()
{
	vector<Clock*> objects;
	objects.push_back(new SundialClock(0, 0, 0));
	objects.push_back(new CuckooClock(0, 0, 0));
	objects.push_back(new GrandFatherClock(0, 0, 0));
	objects.push_back(new WristClock(0, 0, 0));
	objects.push_back(new AtomicClock(0, 0, 0));
	for (Clock *object : objects)
		object->reset();
	int c, a = 0;
	cin >> c;
	cout << "Reported clock times after resetting:" << endl;
	for (Clock *object : objects)
	{
		if (a == 0)
			cout << "SundialClock ";
		if (a == 1)
			cout << "CuckooClock ";
		if (a == 2)
			cout << "GrandFatherClock ";
		if (a == 3)
			cout << "WristClock ";
		if (a == 4)
			cout << "AtomicClock ";
		object->displayTime();
		a++;
	}
	for (int i = 0;i < c;i++)
	{
		for (Clock *object : objects)
			object->tick();
	}
	a = 0;
	cout << endl << "Running the clocks..." << endl << endl << "Reported clock times after running:" << endl;
	for (Clock *object : objects)
	{
		if (a == 0)
			cout << "SundialClock ";
		if (a == 1)
			cout << "CuckooClock ";
		if (a == 2)
			cout << "GrandFatherClock ";
		if (a == 3)
			cout << "WristClock ";
		if (a == 4)
			cout << "AtomicClock ";
		object->displayTime();
		a++;
	}
	for (Clock *object : objects)
		delete object;
}
