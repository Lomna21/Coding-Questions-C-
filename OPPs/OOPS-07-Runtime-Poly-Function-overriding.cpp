// 2. RUNTIME POLYMORPHISM --> Function overriding (virtual function)

// Unlike other languages such as Java where function overriding is strictly done at compile time, C++ supports two types of function overriding:
// 1. Compile Time Overriding (Early Binding) -> Function call and the definition is binded at the compilation of the program.
// 2. Runtime Function Overriding (Late Binding) -> Function call will be binded to its definition during runtime.


// Function Overriding occurs when a derived class has a definition for one of the member functions of the base class. That base function is said to be overridden.

#include<bits/stdc++.h>
using namespace std;

class parent {
    public:
        string color = "Black";
        void print (){
            cout<< "Parent Class"<<endl;
        }
        virtual void show (){
            cout<<"Showing parent class"<<endl;
        }
        void testing(){
            cout<<"Testing in PARENT CLASS"<<endl;
        }
};
class child : public parent {
    public :
        string color = "green";
        void print (){
            cout<<"Child Class"<<endl;
        }
        void show(){
            cout<<"Showing child class"<<endl;
        }
        void testing(){
            cout<<"Testing in CHILD CLASS"<<endl;
            parent::testing();
        }
};

int main(){
    parent *p1,*p2;
    child b1,b2;
    p1 = &b1;
    p2 = &b2;
    p1->print();  // OUTPUT --> Parent Class
    // this will show parent class because there is no virtual keyword, so it will show early binding.

    p2->show(); // OUTPUT --> Showing child class
    // this will show child class because virtual keyword is present (Late binding)

    p2->parent::show();  // OUTPUT --> Showing parent class
    // this is showing parent class beacuse we specified it using scope resolution.

    parent A = child(); // OUTPUT --> Black
    // accessing the field by reference variable which refers to derived

    cout<<A.color<<endl;  // We can see that the parent class reference will always refer to the data member of the parent class.

    child obj;
    obj.testing(); // OUTPUT --> Testing in CHILD CLASS  /n Testing in PARENT CLASS

    obj.print();          // OUTPUT --> Child Class
    obj.parent::print();  // OUTPUT --> Parent Class
}


class A{
    // *vptr;
    public:
        void f1( ) {   }
        virtual void f2( ) {   }
        virtual void f3( ) {   }
        virtual void f4( ) {   }
};

class B{
    public:
        void f1( ) {   }
        void f2( ) {   }
        void f4(int x ) {   }
};

int main(){
    A *p,obj1;
    p = &obj1;

    p -> f1();       // Early binding
    p -> f2();       // Late binding
    p -> f3();       // Late binding
    p -> f4();       // Late binding
    p -> f4(5);      // Early binding --> (complile time error) Error occurs because there is no member function f4 in class A that takes an int parameter.

    B obj2;
    A *p1;
    p1 = &obj2;

    p1 -> f1();       // Early binding --> A
    p1 -> f2();       // Late binding  --> B
    p1 -> f3();       // Late binding  --> A
    p1 -> f4();       // Late binding  --> A
    p1 -> f4(5);      // Early binding --> (complile time error) Error occurs because there is no member function f4 in class A that takes an int parameter.
}

// --------------------------------------------------------
// A runtime error occurs when the derived class's implementation incorrectly assumes that an object is of the derived type when it might not be.
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function." << endl;
    }
};

class Derived : public Base {
public:
    int* arr;
    Derived(int size) {
        arr = new int[size];
    }

    // Overriding the show function
    void show() override {
        cout << "Derived class show function." << endl;
    }

    void accessArray() {
        cout << "Accessing array in Derived class." << endl;
        cout << arr[0] << endl;  // Assuming arr is allocated
    }

    ~Derived() {
        delete[] arr;
    }
};

int main() {
    Base* ptr;
    Derived d(5);
    ptr = &d;

    // Correctly calls Derived's overridden method
    ptr->show();

    // Runtime error: ptr is of type Base* and accessArray is not accessible via Base*
    // Casting to Derived* assuming ptr actually points to a Derived object
    // ptr->accessArray(); // Compilation error: Base has no member named 'accessArray'

    // Incorrect and unsafe cast that may lead to undefined behavior
    Derived* dPtr = dynamic_cast<Derived*>(ptr);
    if (dPtr) {
        dPtr->accessArray(); // This works because ptr actually points to Derived
    } else {
        cout << "Error: Bad cast" << endl;
    }

    return 0;
}
// The code then attempts to safely cast ptr to Derived* using dynamic_cast and calls accessArray() on the resulting pointer. If ptr does not actually point to a Derived object, dynamic_cast will return nullptr, and attempting to dereference nullptr would result in a runtime error (specifically, a segmentation fault or access violation).


 // Why we need virtual function, as object of drived class can access all the member function of parent class and can also access it own function. So we are complexing this by making virtual functions in derived class.--> If we have to make a function for all classes with common functionality outside the class in which it will be accessing the common member function of the classes. Than we can't do it without using virtual class otherwise we have to make each class specific functions which is not efficient way to do. That's why we need virtual function.
#include<bits/stdc++.h>
using namespace std;

class shape{
    protected : // count can't be private cause we can't access private members of a class in derived class
        static int count;
    public :
    virtual void print(){
        cout<<count <<" : shape"<<endl;
        count++;
    }
};
int shape::count = 1;

class circle : public shape{
    public :
        void print(){
            cout<<count <<" : circle"<<endl;
            count++; 

        }
};
class triangle : public shape{
    public :
        void print(){
            cout<<count <<" : triangle"<<endl;
            count++; 
        }
};
class oval : public circle{
    public :
        void print(){
            cout<<count <<" : Oval"<<endl;
            count++; 
        }
};
void func(shape* obj){  // By using a base class pointer (shape*), func() can handle objects of different derived types (circle, triangle, oval), and it will call the appropriate print() method for each object because print() is declared as virtual in the base class.
    obj->print();
}

int main(){
    shape obj_shape;
    obj_shape.print();  // 1 : shape

    circle obj_circle;
    obj_circle.print();  // 2 : circle

    triangle obj_triangle;
    obj_triangle.print();  // 3 : triangle

    shape * obj_shape2 = &obj_circle;
    obj_shape2->print();   // 4 : circle

    obj_shape2->shape::print(); // 5 : shape
    // obj_shape2->circle::print(); // error: 'circle' is not a base of 'shape'

    shape *obj_shape3 = &obj_circle;
    func(obj_shape3);   // 6 : circle

    shape *obj_shape4;
    obj_shape4 = &obj_triangle;
    func(obj_shape4);  // 7 : triangle

    oval obj_oval;
    circle *obj_circle2 = &obj_oval;  // Possible ambiguity in the memory layout
    func(obj_circle2);  // 8 : Oval

    shape* obj_shape5 = &obj_oval;  // Correct, because 'oval' is derived from 'shape'
    func(obj_shape5);  // 9 : Oval
    
}