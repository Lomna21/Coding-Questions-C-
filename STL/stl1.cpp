#include<bits/stdc++.h>
using namespace std; //if we don't add this then we can use cout
// and cin without using std:: ---> eg:- std::cout<<val<<endl;

namespace raj{
    int val = 50;
    int getVal(){
        return val*10;
    }
}
 int main(){
    //------------------------------------------------------
    
    int val = 50; 
    double val=10.0;
    cout<<val<<endl;
    //this will thorw error kyuki same variable 
    //name with two different data types

    //------------------------------------------------------
     
     double val=10.0;
     cout<<val<<endl;        // prints 10.0
     cout<<raj::val<<endl;
     cout<<raj::getVal<<endl;   //prints 50;
     //this is correct method

     //------------------------------------------------------

     

 }