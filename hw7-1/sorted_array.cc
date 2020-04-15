#include <iostream>
#include <vector>
#include <algorithm>
#include "sorted_array.h"

using namespace std;

SortedArray::SortedArray()
{

}

SortedArray::~SortedArray()
{
	
}

void SortedArray::AddNumber(int num)
{
	numbers_.push_back(num);
	sort(numbers_.begin(), numbers_.end());
}

vector<int> SortedArray::GetSortedAscending() const
{
	return numbers_;
}

vector<int> SortedArray::GetSortedDescending() const
{
	vector<int> k(numbers_);
	sort(k.begin(), k.end(),greater<int>());
	return k;
}

int SortedArray::GetMax() const
{
	return numbers_.back();
}
int SortedArray::GetMin() const
{
	return numbers_.front();
}
