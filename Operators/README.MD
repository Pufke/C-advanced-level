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
