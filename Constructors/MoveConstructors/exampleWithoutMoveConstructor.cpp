#include <iostream>
#include <vector>
using namespace std;

class A{
  int *ptr;
public:
  A(){
    // Default constructor
    cout << "Calling Default constructor\n";
    ptr = new int ;
  }

  A( const A & obj){
    // Copy Constructor
    // copy of object is created
    this->ptr = new int;
    // Deep copying
    cout << "Calling Copy constructor\n";
  }

  ~A(){
    // Destructor
    cout << "Calling Destructor\n";
    delete ptr;
  }

};

int main() {

  vector <A> vec;
  vec.push_back(A());

  return 0;

}
/* Now, when the above code is executed,
 the default constructor is called at the time that
 the temporary object A is created. The copy constructor
 is called as the temporary object of A is pushed back in the vector.
 In the above code, there is a serious performance overhead as the
 temporary object A
 is first created in the default constructor
 and then in the copy constructor. The move constructor is used to
 avoid this performance overhead
*/


