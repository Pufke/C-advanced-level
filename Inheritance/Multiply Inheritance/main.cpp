#include <iostream>

using namespace std;

class A {
    public :
        A(){ cout << "A-PK" << endl;}
        A(int) { cout << "A-KP" << endl; }
};

class B {
    public :
        B(){ cout << "B-PK" << endl;}
        B(int) { cout << "B-KP" << endl; }
};

class C : public A, public B {
    public :
        C() : B(2), A(2) { cout << "C-PK" << endl;}
};

int main()
{
    C c;

    return 0;
}

