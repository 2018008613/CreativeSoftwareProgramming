#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stdlib.h>
#include "message_book.h"

using namespace std;

MessageBook::MessageBook()
{
	messages_.empty();
}
MessageBook::~MessageBook()
{

}
void MessageBook::AddMessage(int number, const string& message)
{
	int count = 0;
	string s;
	map<int, string>::iterator iter;
	for (iter = messages_.begin();iter != messages_.end();iter++)
	{
		if (iter->first == number)
		{
			iter->second = message;
			count++;
		}
	}
	if (count == 0)
		messages_.insert(make_pair(number, message));
}
void MessageBook::DeleteMessage(int number)
{
	map<int, string>::iterator iter;
	for (iter = messages_.begin();iter != messages_.end();iter++)
	{
		if(iter->first==number)
			messages_.erase(number);
	}
}
vector<int> MessageBook::GetNumbers() const
{
	map<int, string> x = messages_;
	vector<int> a;
	map<int, string>::iterator iter;
	for (iter = x.begin();iter != x.end();iter++)
	{
		a.push_back(iter->first);
	}
	return a;
}
const string MessageBook::GetMessage(int number) const
{
	int count = 0;
	string s;
	map<int, string> x = messages_;
	map<int, string>::iterator iter;
	for (iter = x.begin();iter != x.end();iter++)
	{
		if (iter->first == number)
		{
			s=iter->second;
			count++;
		}
	}
	if (count == 0)
		return "";
	else
		return s;
}
