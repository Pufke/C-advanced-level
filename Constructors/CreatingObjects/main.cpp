#include <iostream>

using namespace std;

class Human{
public:
    string name;

    void introduce(){
        cout<< "hi "<<name<<endl;
    }


};
int main()
{

    Human anil; //Object is stored on STACK

    Human *bunty = new Human(); //Object will be alocated on the
                                //HEAP and it is dinamick
    //When we create object dinamicli we use NEW word, and
    //then we get address, pointer, that pointer point on object

    anil.name = "anil";
    anil.introduce();

    bunty->name = "bunty";
    bunty->introduce();

}
