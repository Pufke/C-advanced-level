#include <iostream>

class A {
public:
  virtual void fun() = 0;
  virtual void fun2();
  void fun3();
};

class B : public A {
public:
  B();
  B(int);
  void fun();
  void fun2();
};

class C : virtual public B {
public:
  using B::B;
  void fun();
};

class D : virtual public B {
public:
  D();
  D(int);
  void fun();
};

class E : public C, public D {
public:
  using D::D;
  void fun();
};

void A::fun2() {}
void A::fun3() {}
B::B() { std::cout << "B\n"; }
B::B(int v1) { std::cout << "B int v\n"; }
void B::fun() {}
void B::fun2() {}
void C::fun() {}

D::D() { std::cout << "D\n"; }
D::D(int v1) : B(v1) { std::cout << "D\n"; }
void D::fun() {}

/*E::E(int v1): D::B(v1){  std::cout <<"E\n";}  */ void E::fun() {}

int main() {
  E Eob(1);
  return 0;
}
