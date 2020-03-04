// A C++ program to demonstrate need of
// constructor delegation.
#include <iostream>
using namespace std;

class A {
	int x, y, z;

public:
	A()
	{
		x = 0;
		y = 0;
		z = 0;
	}
	A(int z)
	{
		// The below two lines are redundant
		x = 0;
		y = 0;

		/* Only initialize z by passing an argument,
		while all the other arguments are
		initialized the same way they were,
		as in the previous constructor*/
		this->z = z;
	}

	void show()
	{
		cout << x << '\n'
			<< y << '\n'
			<< z;
	}
};

int main()
{
	A obj(3);
	obj.show();
	return 0;
}
