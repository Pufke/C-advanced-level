#include <iostream>
using namespace std;

class B
{
public:
	B(const char* str = "\0") //default constructor
	{
		cout << "Constructor called" << endl;
	}

	B(const B &b) //copy constructor
	{
		cout << "Copy constructor called" << endl;
	}
};

int main()
{
	B ob = "copy me";
	//OUTPUT IS "Constructor called"
	//We expect output "Copy constructor called" but Copy elision prevent
	//invoking of copy costructors
	return 0;
}
