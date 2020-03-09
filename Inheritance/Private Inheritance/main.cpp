#include <iostream>

using namespace std;

class A {
private:
    int x;
protected:
    int y;
public:
    int z;
    A() { x = 0; y = 1; z = 2;}

    void ispis(){
        cout << x << " " << y << " " << z << endl;
    }

};

class B : private A{

public:
    B() : A() {}
};

int main()
{
    A a;
    B b;
    //b.ispis(); //error, because method ispis() is now private
    cout << "size(int):" << sizeof(int) << endl;
    cout << "size(A):" << sizeof(A) << endl;
    cout << "size(B):" << sizeof(B) << endl;


    return 0;
}

