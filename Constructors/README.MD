<h1 align = "center"> CONSTRUCTORS </h1>

# WAYS TO CREATE OBJECTS

***Myclass *object = new Myclass();*** //object has dynamic storage duration (usually is on the heap)
You create object on this way if you plan on using them throughout (***a long period of time***)

***Myclass object;*** //object has automatic storage duration (usually is on the stack)
You create object on this way if you plan on using them for (***a short lifetime (or scope).***)

# MOVE CONSTRUCTORS

![image](https://user-images.githubusercontent.com/49925421/75827197-6430d700-5da9-11ea-87e4-51869a3bd384.png)

![image](https://user-images.githubusercontent.com/49925421/75827454-0650bf00-5daa-11ea-8762-8273afb66490.png)

# CONSTRUCTOR DELEGATION

![image](https://user-images.githubusercontent.com/49925421/75881367-31c1c100-5e1f-11ea-8c44-15a748bbd3d5.png)

![image](https://user-images.githubusercontent.com/49925421/75881565-9d0b9300-5e1f-11ea-8d23-d684ca750e31.png)

![image](https://user-images.githubusercontent.com/49925421/75881662-cfb58b80-5e1f-11ea-8eb8-13c8adc48c67.png)
![image](https://user-images.githubusercontent.com/49925421/75881799-15725400-5e20-11ea-9a2b-2adac7e1735e.png)

# COPY ELISION (OMISSION)

![image](https://user-images.githubusercontent.com/49925421/75887089-8a965700-5e29-11ea-979f-39e9507f9385.png)
![image](https://user-images.githubusercontent.com/49925421/75887214-bb768c00-5e29-11ea-8588-20303ba93532.png)

# RVO (return value optimization) 

![image](https://user-images.githubusercontent.com/49925421/75895313-c0d9d380-5e35-11ea-9890-71ebc0c0ee3e.png)
![image](https://user-images.githubusercontent.com/49925421/75895142-82441900-5e35-11ea-9fa1-75c4f7652f09.png)
