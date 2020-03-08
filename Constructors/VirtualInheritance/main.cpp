#include <iostream>

using namespace std;

class A {
public:
    int a;
    A() { cout << " A" << endl; }
    A(int x) { cout << " A" << x << endl; }
};

class B : virtual public A {
public:
    B() : A() { cout << " B " << endl; }                //Output will be A4
};                                                      //               B
class C : virtual public A {                            //               C
public:                                                 //               D
    C() : A(3) { cout << " C " << endl; }               //We have virtual inheritance, class D directly inheritance class A, and
};                                                      //because that we have call of constructor with parameters A(4)

class D : public B, public C {
    public:
    D() : A(4), B(), C() { cout << " D " << endl;}
};


int main()
{
    D d;
    return 0;
}

