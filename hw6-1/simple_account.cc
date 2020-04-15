#include <iostream>
#include <string>
#include "simple_account.h"

using namespace std;

void Manager::g()
{
	num = 0;
}
void Manager::input(int n, int m)
{
	if (num <= n)
		cout << "Account does not exist" << endl;
	else
	{
		if (a[n].money + m > 1000000)
		{
		cout << "Failure: Deposit to user " << n << " " << m << endl;
		see(n);
		}
		else
		{
			cout << "Success: Deposit to user " << n << " " << m << endl;
			a[n].money += m;
			see(n);
		}
	}
}
void Manager::output(int n, int m)
{
	if (num <= n)
		cout << "Account does not exist" << endl;
	else
	{
		if (a[n].money - m < 0)
		{
			cout << "Failure: Withdraw from user " << n << " " << m << endl;
			see(n);
		}
		else
		{
			a[n].money -= m;
			cout << "Success: Withdraw from user " << n << " " << m << endl;
			see(n);
		}
	}
}
void Manager::toss(int n1, int n2, int m)
{
	if (num <= n1 || num <= n2)
		cout << "Account does not exist" << endl;
	else
	{
		if (a[n1].money - m < 0 || a[n2].money + m > 1000000)
		{
			cout << "Failure: Transfer from user " << n1 << " to user " << n2 << " " << m << endl;
		see(n1);
		see(n2);
		}
		else
		{
			a[n1].money -= m;
			a[n2].money += m;
			cout << "Success: Transfer from user " << n1 << " to user " << n2 << " " << m << endl;
			see(n1);
			see(n2);
		}
	}
}
void Manager::see(int n)
{
		cout << "Balance of user " << n << ": " << a[n].money << endl;
}

void Manager::mgets(int n)
{
	a[n].ID= n;
	a[n].money = 0;
	num = n + 1;
	cout << "Account for user " << n << " registered" << endl;
	see(n);
}
