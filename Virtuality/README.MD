<h1 align = "center"> VIRTUALITY </h1>

# VIRTUAL FUNCTION IN C++ 
------in progress

# VIRTUAL INHERITANCE
Virtual inheritance is a C++ technique that ensures only one copy of a base class's member variables are inherited by grandchild derived classes. Without virtual inheritance, if two classes B and C inherit from a class A, and a class D inherits from both B and C, then D will contain two copies of A's member variables: one via B, and one via C. These will be accessible independently, using scope resolution.

![Untitled-1](https://user-images.githubusercontent.com/49925421/76122238-e7df0380-5ff5-11ea-99d6-60cfae5d4fc2.jpg)

Instead, if classes B and C inherit virtually from class A, then objects of class D will contain only one set of the member variables from class A.

![image](https://user-images.githubusercontent.com/49925421/76124276-a2710500-5ffa-11ea-9d98-2f732f79b6f7.png)

This feature is most useful for multiple inheritance, as it makes the virtual base a common subobject for the deriving class and all classes that are derived from it. This can be used to avoid the diamond problem by clarifying ambiguity over which ancestor class to use, as from the perspective of the deriving class (D in the example above) the virtual base (A) acts as though it were the direct base class of D, not a class derived indirectly through a base (B or C).

![Untitled-2](https://user-images.githubusercontent.com/49925421/76124674-85890180-5ffb-11ea-8013-dd290f11c27f.jpg)


It is used when inheritance represents restriction of a set rather than composition of parts. In C++, a base class intended to be common throughout the hierarchy is denoted as virtual with the virtual keyword.
