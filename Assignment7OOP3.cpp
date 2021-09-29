#include <iostream>
using namespace std;

class A
{
	int a;

	public:
	void get_a()
	{
		cout << "\nEnter A:";
		cin >> a;
	}

	void display_a()
	{
		cout << "Value of A is:" << a;
	}
};

class B : public A
{
	int b;

	public:
	void get_b()
	{
		cout << "\nEnter B: ";
		cin >> b;
	}

	void display_b()
	{
		cout << "Value of B is:" << b;
	}
};

class C : public B
{
	int c;

	public:
	void get_c()
	{
		cout << "\nEnter C: ";
		cin >> c;
	}

	void display_c()
	{
		cout << "Value of C is:" << c;
	}
};

int main()
{
	C obj;
	obj.get_c();
	obj.display_c();
	obj.get_b();
	obj.display_b();
	obj.get_a();
	obj.display_a();
}