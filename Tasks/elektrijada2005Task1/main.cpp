#include <iostream>
using namespace std;

int mData = 20;

//the postfix operator has parameter, and he is longer than prefix
//you can remember that with analogy "postfix word is longer postfix operator is longer"

class UPInt {
public:
    UPInt& operator++() {cout << mData-- <<endl; UPInt* p = new UPInt; return *p;} //prefix
    const UPInt operator++(int) {cout << mData++ << endl; return *this;}  //postfix...
    UPInt& operator--() {cout << ++mData << endl; UPInt* p = new UPInt; return *p;}
    const UPInt operator--(int) {cout << mData-- << endl; return *this;}
    UPInt& operator+=(int);
};

int main() {
    UPInt i;
    UPInt j;
    ++i; // print 20 , mdata = 19
    j++; // print 19 , mdata = 20
    --j; // print 21 , mdata = 21
    i++; // print 21 , mdata = 22
    --i; // print 23 , mdata = 23
    ++j; // print 23 , mdata = 22
    j--; // print 22 , mdata = 21
    i--; // print 21 , mdata = 20
}
