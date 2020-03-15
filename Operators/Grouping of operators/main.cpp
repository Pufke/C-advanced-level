#include <iostream>

using namespace std;

// en.cppreference.com/w/cpp/language/operator_precedence, prioriteti operatora
///U ranijim verzijama radilo, u novijim je ovakav redosled izvrsavanja nedefinisan (kad imamo gomilu ++ i --)!
/*
a)prvo razdeliti operatore:
 1. sve postfiksne koje uz promenljivu
 2. sve prefiksne koje uz promenljivu
 3. binarne

 //++a---b+++b---++a; -->  ++a-- - b++ + b-- - ++a;

b)nakon toga grupisati elemente po binarnim operatorima

1. uzeti prvi element sa desne strane (za njega odradimo prvo postfiksne (od blizih promenljivoj ka daljim) pa prefiksne (od blizih promenljivoj ka daljim)), ako je neki izraz u zagradi, celu zagradu odradimo.
   Npr. a + b - (b++ + --a++--), odradi se prvo cela zagrada (b++ + --a++--) pa se onda ide dalje,  u zagradi se prvo odradi --a++--.
2. uzeti drugi element sa desne strane...

*/
class A {
    private:
        char c;
    public:
        A(char x){c = x;}
        A& operator++(){ cout << c <<" pref++" << endl; return *this;}
        A& operator++(int){ cout << c <<" post++" << endl; return *this;}
        A& operator--(){ cout << c <<" pref--" << endl; return *this;}
        A& operator--(int){ cout << c <<" post--" << endl; return *this;}

        A& operator+(const A& x){ cout << c << "+" << x.c << endl; return *this;}
        A& operator-(const A& x){ cout << c << "-" << x.c << endl; return *this;}
};

int main()
{
    A a('a'), b('b');



    ++a---b+++b---++a;

    /*
    a) ++a-- - b++ + b-- - ++a
    b) 1. ++a        // a pref++
       2. b--        // b post--
       3. b++        // b post++
       4. ++a--      // a post--
                     // a pref++
    c) 1.  b1) - b2) // a-b
       2.  b2) + b3) // a+b
       3.  b3) - b4) // a-a
    */

    //++a---b+(++b-(--++a));
    //(--++a---++b--)+b--;
    //--++a--+++b--;
    //++--++a+++b--;


    return 0;
}

