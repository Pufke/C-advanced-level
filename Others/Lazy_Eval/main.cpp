#include <iostream>
using namespace std;

// Lazy evaluation short-circuit

bool f1(){
    cout << "F1" << endl;
    return true;
}

bool f2(){
    cout << "F2" << endl;
    return true;
}

int main()
{

    if (f1() || f2()){
        cout << "IF" << endl;
    }

    if (f1() | f2()){
        cout << "DRUGI IF" << endl;
    }

    return 0;
}
