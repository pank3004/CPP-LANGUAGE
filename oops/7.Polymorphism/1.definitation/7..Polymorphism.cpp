/*
polymorphism:-
Polymorphism is the ability of an entity, such as an object or method, to take on multiple forms. It can be
thought of as the ability of a message to be expressed in multiple ways.
For example, a person may exhibit the roles of a father, husband, and employee in different situations and
contexts, each with its own set of characteristics and behaviors. Similarly, in object-oriented programming, an
object can take on multiple forms and exhibit different behaviors depending on the context in which it is used.

Polymorphism is a powerful feature of object-oriented programming that allows for greater flexibility and code
reuse. It enables a single interface to be used to invoke methods defined in multiple classes, making it easier to
add new functionality to a program without requiring extensive modifications to existing code.
Here is an example of polymorphism in C++.

1.Compile-time Polymorphism:-

Compile-time polymorphism, also known as static polymorphism, is a type of polymorphism that is resolved
during the compilation of a program. It is achieved through function overloading.It basically has a number of
functions with the same name but different number or type of arguments.

*Function Overloading:-
Function overloading is a type of compile-time polymorphism in which multiple methods in a class have the
same name but different parameter lists. When a function is called, the C++ compiler determines which version
of the method to execute based on the number and type of the arguments passed to the method.

*Operator Overloading: 
Operator overloading gives special meaning and functioning to different operators. For ex: the ‘+’ operator can
be used to add two complex numbers, we will define the function of the operator in such a way that our desired
operation is achieved.

2.Run-time Polymorphism:-

Run-time polymorphism, also known as dynamic polymorphism, is a type of polymorphism that is resolved at
runtime. It is achieved through function overriding in C++, which is the ability of a subclass to override the
methods of its superclass.

*Function Overriding: 
Function Overriding occurs when a derived class has a definition for one of the member functions of the base
class.

*/