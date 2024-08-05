// 2. RUNTIME POLYMORPHISM
// This type of polymorphism is achieved by Function Overriding. Late binding and dynamic polymorphism are other names for runtime polymorphism. 

// Function Overriding occurs when a derived class has a definition for one of the member functions of the base class. That base function is said to be overridden.

#include<bits/stdc++.h>
using namespace std;

class parent {
    public:
        string color = "black";
        void print (){
            cout<< "You are in the parent class"<<endl;
        }
        virtual void show (){
            cout<<"You are showing parent class"<<endl;
        }
};
class child : public parent {
    public :
        string color = "green";
        void print (){
            cout<<"You are in the child class"<<endl;
        }
        void show(){
            cout<<"You are showing child class"<<endl;
        }
};

int main(){
    parent *p1,*p2;
    child b1,b2;
    p1 = &b1;
    p2 = &b2;
    p1->print();  // OUTPUT --> Parent class
    // this will show parent class because there is no virtual keyword, so it will show early binding.
    p2->show(); // OUTPUT --> Child class
    // this will show child class because virtual keyword is present.
    p2->parent::show();  // OUTPUT --> Parent class
    // this is showing parent class beacuse we specified it using scope resolution.

    parent A = child(); // OUTPUT --> Black
    // accessing the field by reference variable which refers to derived
    cout<<A.color<<endl;  // We can see that the parent class reference will always refer to the data member of the parent class.

    

    
}