<h1 align = "center"> OPERATORS </h1>

## GROUPING OF OPERATORS 

a) First step is to reorder operators:
 1. all postfix operators that are next to the variable
 2. all prefix operators thar are next to the variable
 3. binary operators

 //++a---b+++b---++a; -->  ++a-- - b++ + b-- - ++a;

b) then group the elements by binary operator

1. take first element from right side (for that element first of all do postfix operators (from closer variable to further) after that prefox (from close to futher variable)), if some expressions are in parentheses , we do parentheses first.
   For example: a + b - (b++ + --a++--), first of all we do whole parntheses (b++ + --a++--) after that we go to the next step,  in parntheses we do --a++--.
2. we take next element from right side...

## OPERATORS ADVANCED 

 operatori se mogu preklopiti i preko funkcije i preko metode (svi osim =, [], (), oni moraju preko metode)   
 operatori moraju primati dobar broj argumenata
 ali mogu primiti razlicite tipove i mogu vratiti razlicite tipove

## MOVE ASSIGNMENT OPERATOR

In the C++ programming language, the move assignment operator = is used for transferring a temporary object to an existing object. The move assignment operator, like most C++ operators, can be overloaded. Like the copy assignment operator it is a special member function.

If the move assignment operator is not explicitly defined, the compiler generates an implicit move assignment operator (C++11 and newer) provided that copy/move constructors, copy assignment operator or destructors have not been declared. The parameter of a move assignment operator is an rvalue reference (T&&) to type T, where T is the object that defines the move assignment operator. The move assignment operator is different than a move constructor because a move assignment operator is called on an existing object, while a move constructor is called on an object created by the operation. Thereafter, the other object's data is no longer valid.

## OPERATOR PRECEDENCE 

![image](https://user-images.githubusercontent.com/49925421/77226242-27215e80-6b77-11ea-910f-65e9f03427e7.png)
