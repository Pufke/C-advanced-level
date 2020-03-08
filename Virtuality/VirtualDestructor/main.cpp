#include <iostream>
using namespace std;

// Virtualni destruktor

class A {
public:
     A() { cout << "KA ";}
    //~A() { cout << "DA ";}
    virtual ~A() { cout << "DA ";}
};

class B : public A {
public:
     B() { cout << "KB ";}
    ~B() { cout << "DB ";}
};

int main()
{
    A* pa = new B;

    delete pa; // poziva se destruktor

    return 0;
}

