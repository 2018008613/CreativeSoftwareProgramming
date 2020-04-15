#include "minimal_fighter.h"

MinimalFighter::MinimalFighter()
{
	mHp = 0;
	mPower = 0;
	mStatus = Invalid;
}

MinimalFighter::MinimalFighter(int _hp, int _power)
{
	mHp = _hp;
	mPower = _power;
	if (mHp <= 0)
		mStatus = Dead;
	else
		mStatus = Alive;
}

int MinimalFighter::hp() const
{
	return mHp;
}

int MinimalFighter::power() const
{
	return mPower;
}

FighterStatus MinimalFighter::status() const
{
	return mStatus;
}

void MinimalFighter::setHp(int _hp)
{
	mHp = _hp;
}

void MinimalFighter::hit(MinimalFighter *_enemy)
{
	if(status()==1)
		_enemy->setHp(_enemy->hp() - mPower);
	if(_enemy->status()==1)
		mHp -= _enemy->power();
	
}

void MinimalFighter::attack(MinimalFighter *_target)
{
	_target->setHp(_target->hp() - mPower);
	mPower = 0;
}

void MinimalFighter::fight(MinimalFighter *_enemy)
{
	while (mHp > 0 && _enemy->hp() > 0)
	{
		hit(_enemy);
	}
}
