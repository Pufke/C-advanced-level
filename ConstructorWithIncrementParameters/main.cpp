#include <iostream>

using namespace std;

int id = 1;

class A{
private:
    int objectID;
    int objectVAL;

public:
    A(int objectNumber, int objectCode)
            : objectID(objectNumber), objectVAL(objectCode) {
        cout << objectID << " " << objectVAL << " constructor" << endl;
    }

};
int main()
{
    A a1(id, id+1);
    cout<<id<<endl;
    A a2(id, ++id);
    cout<<id<<endl;
    A a3(id, id++);
    cout<<id<<endl;
}
