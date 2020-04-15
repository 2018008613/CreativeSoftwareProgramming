#include <iostream>
#include <string>
#include <set>
#include "simple_int_set.h"

using namespace std;

std::set<int> SetIntersection(const std::set<int>& set0, const std::set<int>& set1)
{
	set<int> a;
	set<int>::iterator iter, iter1;
	for(iter = set0.begin(); iter != set0.end(); iter++)
	{
		for(iter1 = set1.begin(); iter1 != set1.end(); iter1++)
		{
			if(*iter==*iter1)
				a.insert(*iter);
		}
	}
	return a;
}
std::set<int> SetUnion(const std::set<int>& set0, const std::set<int>& set1)
{
	set<int> a(set0);
	set<int>::iterator iter, iter1;
        for(iter = set1.begin(); iter != set1.end(); iter++)
	{
		int count = 0;
		for(iter1 = set0.begin(); iter1 != set0.end(); iter1++)
		{
			if(*iter==*iter1)
				count++;
		}
		if(count==0)
			a.insert(*iter);
	}
	return a;
}
std::set<int> SetDifference(const std::set<int>& set0, const std::set<int>& set1)
{
	set<int> a(set0);
	set<int>::iterator iter, iter1;
	for(iter = set0.begin(); iter != set0.end(); iter++)
	{
		for(iter1 = set1.begin(); iter1 != set1.end(); iter1++)
		{
			if(*iter==*iter1)
				a.erase(*iter);
		}
	}
	return a;
}

