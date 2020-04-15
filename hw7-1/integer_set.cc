#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "integer_set.h"

using namespace std;

IntegerSet::IntegerSet()
{

}
IntegerSet::~IntegerSet()
{

}
void IntegerSet::AddNumber(int num)
{
	vector<int>::iterator iter;
	int k = 0;
	for (iter = numbers_.begin();iter != numbers_.end();iter++)
	{
		if (*iter == num)
			k++;
	}
	if (k == 0)
	{
		numbers_.push_back(num);
		sort(numbers_.begin(), numbers_.end());
	}
}
void IntegerSet::DeleteNumber(int num)
{
	vector<int>::iterator iter;
	for (iter = numbers_.begin();iter != numbers_.end();iter++)
	{
		if (*iter == num)
		{
			numbers_.erase(iter);
			break;
		}
	}
}
int IntegerSet::GetItem(int pos) const
{
	if (numbers_.size() <= pos)
		return -1;
	else
		return *(numbers_.begin() + pos);
}
vector<int> IntegerSet::GetAll() const
{
	return numbers_;
}

