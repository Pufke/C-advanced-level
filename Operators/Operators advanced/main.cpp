#include <iostream>
using namespace std;

// operatori se mogu preklopiti i preko funkcije i preko metode (svi osim =, [], (), oni moraju preko metode)
// operatori moraju primati dobar broj argumenata
// ali mogu primiti razlicite tipove i mogu vratiti razlicite tipove

class A{
public:


    double operator+(const A& a){
        return 3.7;
    }

    char operator[](char x){
        return x - 1;
    }

    void operator+(int){
        cout << "pozvan+broj" << endl;
    }

    void operator+(char){
        cout << "pozvan+char" << endl;
    }


    void operator()(int x){ // mora metodom
        cout << "pozvan()int" << endl;
    }

    void operator+(float){
        cout << "pozvan+double" << endl;
    }
};

void operator,(A a, char c){
    cout << "pozvan,char" << endl;
}


void a(int x){
    cout << "pozvana slob funkcija-a" << endl;
}
int main()
{
    A a;

    a + 1;
    a + '1';
    a(3);
    ::a(6); // :: oznacava globalni namespace, na taj nacin ga nateramo da uzme slobodnu funkciju umesto metode

    cout << a['c'] << endl;

    a,'d';

    return 0;
}

