#include <iostream>
#include <string>
#include <stdlib.h>
#include "reply_admin.h"
#define NUM_OF_CHAT 10

using namespace std;

ReplyAdmin::ReplyAdmin()
{
	chats = new string[NUM_OF_CHAT];
	for (int i = 0;i < NUM_OF_CHAT;i++)
	{
		chats[i] = "";
	}
}
ReplyAdmin::~ReplyAdmin()
{
	delete[] chats;
}
int ReplyAdmin::getChatCount()
{
	int num = 0;
	for (int i = 0;i < NUM_OF_CHAT;i++)
	{
		if (chats[i] != "")
			num++;
		else
			break;
	}
	return num;
}
bool ReplyAdmin::addChat(string _chat)
{
	int num = getChatCount();
	if (num > 9)
		return false;
	else
	{
		chats[num] = _chat;
		return true;
	}
}
bool ReplyAdmin::removeChat(int _index)
{
	if (chats[_index] == "")
		return false;
	else
	{
		chats[_index] = "";
		for (int i = _index;i < NUM_OF_CHAT-1;i++)
		{
			chats[i] = chats[i + 1];
			chats[i + 1] = "";
		}
		return true;
	}
}
bool ReplyAdmin::removeChat(int *_indices, int _count)
{
	int num = getChatCount(), n = 0;
	for (int i = 0;i < _count;i++)
	{
		if (_indices[i] < num)
			chats[_indices[i]] = "";
		else
			n++;
	}
	if (_count == n)
		return false;
	else
	{
		for (int i = 0;i < _count - n;i++)
		{
			for (int j = 0;j < num;j++)
			{
				if (chats[j] == "")
				{
					chats[j] = chats[j + 1];
					chats[j + 1] = "";
				}
			}
		}
		return true;
	}
}
bool ReplyAdmin::removeChat(int _start, int _end)
{
	int num = getChatCount(), n = 0;
	if (_start > num - 1)
		return false;
	else if (_end < num)
	{
		for (int i = _start;i <= _end;i++)
			chats[i] = "";
		for (int i = 0;i < _end - _start;i++)
		{
			for (int j = _start;j < num - 1;j++)
			{
				if (chats[j] == "")
				{
					chats[j] = chats[j + 1];
					chats[j + 1] = "";
				}
			}
		}
		return true;
	}
	else
	{
		for (int i = _start;i < num;i++)
			chats[i] = "";
		return true;
	}
}
void ReplyAdmin::print()
{
	int num = getChatCount();
	for (int i = 0;i < num;i++)
	{
		cout << i << " " << chats[i] << endl;
	}
}
