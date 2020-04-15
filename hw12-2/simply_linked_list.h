#include <stdlib.h>

template <class T>
class Node {
public:
	Node() : next(nullptr) {}
	Node(T t) : data(t), next(nullptr) {}
	T data;
	Node<T> *next;
};
template <class T>
class List {
public:
	List() : head(nullptr) {};
	List(T *arr, int n)
	{
		head = new Node<T>;
		head -> data = arr[0];
		Node<T> *a = head;
		for (int i = 1;i < n;i++)
		{
			a->next = new Node<T>;
			a->next->data = arr[i];
			a = a->next;
		}
	}
	~List()
	{
		while (size != 0)
		{
			Node<T> *a = head;
			for (int i = 1;i < size();i++)
			{
				a = a->next;
			}
			delete a;
		}
	}
	List<T>& operator=(const List<T>& rhs)
	{
		while (size() != 0)
		{
			Node<T> *a = head;
			for (int i = 1;i < size();i++)
			{
				a = a->next;
			}
			delete a;
		}
		head = new Node<T>;
		head->data = rhs.head->data;
		Node<T> *a = head;
		Node<T> *b = rhs.head;
		for (int i = 1;i < rhs.size();i++)
		{
			a->next = new Node<T>;
			a->next->data = b->next->data;
			a = a->next;
			b = b->next;
		}
		return *this;
	}
	int size() const
	{
		int n = 0;
		Node<T> *a = head;
		while (a != nullptr)
		{
			n++;
			a = a->next;
		}
		return n;
	}
	void insert_at(int idx, T& data)
	{
		if (idx < size())
		{
			Node<T> *a = head;
			Node<T> *t = new Node<T>;
			for (int i = 1;i < idx;i++)
			{
				a = a->next;
			}
			Node<T> *b = a->next;
			a->next = t;
			t->data = data;
			t->next = b;
		}
		else if (idx == size())
		{
			Node<T> *a = head;
			Node<T> *t = new Node<T>;
			for (int i = 1;i < idx;i++)
			{
				a = a->next;
			}
			a->next = t;
			t->data = data;
		}
	}
	void remove_at(int idx)
	{
		if (idx < size())
		{
			Node<T> *a = head;
			for (int i = 1;i < idx;i++)
			{
				a = a->next;
			}
			Node<T> *b = a->next;
			Node<T> *c = b->next;
			delete b;
			a->next = c;
		}
	}
	void push_back(T& data)
	{
		if (size() == 0)
		{
			head = new Node<T>;
			head->data = data;
		}
		else
		{
			Node<T> *a = head;
			for (int i = 1;i < size();i++)
			{
				a = a->next;
			}
			a->next = new Node<T>;
			a->next->data = data;
		}
	}
	void pop_back()
	{
		Node<T> *a = head;
		for (int i = 1;i < size() - 1;i++)
		{
			a = a->next;
		}
		Node<T> *b = a->next;
		delete b;
		a->next = nullptr;
	}
	void push_front(T& data)
	{
		if (size() == 0)
		{
			head = new Node<T>;
			head->data = data;
		}
		else
		{
			Node<T> *t = new Node<T>;
			t->data = data;
			t->next = head;
			head = t;
		}
	}
	void pop_front()
	{
		Node<T> *a = head->next;
		delete head;
		head = new Node<T>;
		head = a;
	}
	friend std::ostream& operator<<(std::ostream& out, const List<T>& rhs)
	{
		Node<T> *a = rhs.head;
		for (int i = 0;i < rhs.size();i++)
		{
			out << a->data;
			if (i != rhs.size() - 1)
				out << ", ";
			a = a->next;
		}
		return out;
	}

private:
	Node<T> *head;
};


