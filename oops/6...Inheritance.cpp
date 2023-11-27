/*
What is inheritance and where is it used?: 

Inheritance is a very useful feature which enables a class to derive the properties of some other class. The class
whose properties are inherited is known as the parent class or the super class. The class which has inherited
properties is called the child class or the sub class. Inheritance is useful since it provides us with the feature of
reusability i.e. if class A inherits class B, then class A can reuse the attributes of class B without those attributes
being defined in class A.

Class Bus            
fuelAmount()
Capacity()
applybarkess()

Class Car
fuelAmount()
Capacity()
applybarkess()

Class Truck
fuelAmount()                                                                                                         
Capacity()
applybarkess()

All these classes have the same properties so instead of writing them again and again we can just write these
properties in one class and derive the other classes from that class.

                Class Vehicle 

                Capacity()
                applybarkess()
                fuelAmount()


Class Bus        Class Car      Class Truck

                
