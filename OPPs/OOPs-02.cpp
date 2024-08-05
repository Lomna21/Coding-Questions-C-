#include<bits/stdc++.h>
using namespace std;

class Complex{
    private :
        int a,b;
    public :
        void set_data(int x, int y){
            a = x;
            b = y;
        }
        void show_data(){
            cout<<" "<<a<<" "<<b<<endl;
        } 

        Complex add(Complex c){
            Complex temp;
            // c3.a = c1.a + c2.a; --> below lines are read like this. 
            // c is c2 cause it is passed as an argument and c1 has called the function so we don't have to specify for that.
            temp.a = a + c.a;
            temp.b = b + c.b;
            return (temp);
        }

        // Operator overloading for '+'
        Complex operator+(Complex c){
            Complex temp;
            temp.a = a + c.a;
            temp.b = b + c.b;
            return temp;
        }
};
int main(){
    Complex c1,c2,c3,c4;  // c1 is an object.
    c1.set_data(3,4);
    c2.set_data(5,6);
    
    c3 = c1.add(c2); // OUTPUT -- 8 10
    c3.show_data();
    // c1 is calling the 'add function' and c2 is going as an argument.

    // c3 = c1 + c2; --> it is not possible because c1,c2 are not primitive data type, they are of Complex type so we need to do it differently. But we can do it in this way by operator overloading.
    c4 = c1 + c3; // Using operator overloading
    c4.show_data(); // OUTPUT -- 8 10
    
    return 0;
}
