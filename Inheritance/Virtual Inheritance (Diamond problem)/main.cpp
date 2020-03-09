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
    B() : A() { cout << " B " << endl; }
};
class C : virtual public A {
public:
    C() : A(3) { cout << " C " << endl; }
};

class D : public B, public C {
    public:
    D() : A(4), B(), C() { cout << " D " << endl;}
};


int main()
{
    D d;
    return 0;
}

