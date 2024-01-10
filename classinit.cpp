#include <iostream>

using namespace std;

class Base
{
public:
	Base()
	{
		cout << "base" << endl;
	}
	~Base()
	{
		cout << "~base" << endl;
	}
};

class	Derived : public Base
{
public:
	Derived(void)
	{
		cout << "Derived" << endl;
	}
	~Derived()
	{
		cout << "~Derived" << endl;
	}
};

int	main(void)
{
	Derived	derived;
}