class Account
{
public:
	int ID;
	int money;
};

class Manager
{
private:
	Account a[10];
	int num;
public:
	void mgets(int n);
	void input(int n, int m);
	void output(int n, int m);
	void toss(int n1, int n2, int m);
	void g();
	void see(int n);
};
