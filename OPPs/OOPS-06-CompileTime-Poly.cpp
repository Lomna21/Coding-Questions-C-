// POLYMORPHISM
// a. Compile Time polymorphism 
//     1. Function overloading 
//     2. Operator overloading 

// b. Runtime Polymorphism
//     1. Virtual Function (Method overriding)

// A. FUNCTION OVERLOADING
// When there are multiple functions with the same name but different parameters, then the functions are said to be overloaded, hence this is known as Function Overloading. Functions can be overloaded by changing the number of arguments or/and changing the type of arguments. In simple terms, it is a feature of object-oriented programming providing many functions that have the same name but distinct parameters when numerous tasks are listed under one function name.

// C++ program to demonstrate function overloading or Compile-time Polymorphism
#include <bits/stdc++.h>
using namespace std;
class Geeks {
public:
	// Function with 1 int parameter
	void func(int x){
		cout << "value of x is " << x << endl;
	}

	// Function with same name but 1 double parameter
	void func(double x){
		cout << "value of x is " << x << endl;
	}

	// Function with same name and 2 int parameters
	void func(int x, int y){
		cout << "value of x and y is " << x << ", " << y << endl;
	}
};

int main()
{
	Geeks obj1;

	// Function being called depends on the parameters passed
	// func() is called with int value
	obj1.func(7);

	// func() is called with double value
	obj1.func(9.132);

	// func() is called with 2 int values
	obj1.func(85, 64);
	return 0;
}

// B. OPERATOR OVERLOADING
// C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading. For example, we can make use of the addition operator (+) for string class to concatenate two strings. We know that the task of this operator is to add two operands. So a single operator ‘+’, when placed between integer operands, adds them and when placed between string operands, concatenates them.

// addition operator “+” is predefined to operate only on built-in data types. But here, “class A” is a user-defined type, so the compiler generates an error. This is where the concept of “Operator overloading” comes in.

// Operator functions are the same as normal functions. The only differences are, that the name of an operator function is always the operator keyword followed by the symbol of the operator, and operator functions are called when the corresponding operator is used. 

// Almost all operators can be overloaded except a few. Following is the list of operators that cannot be overloaded. 
// 1. sizeof
// 2. typeid
// 3. Scope resolution (::)
// 4. Class member access operators (.(dot), .* (pointer to member operator))
// 5. Ternary or conditional (?:)

// C++ program to demonstrate Operator Overloading or Compile-Time Polymorphism
class Complex {
private:
	int real, imag;

public:
	Complex(int r = 0, int i = 0){
        // The constructor Complex can take two integers, r and i, which default to 0. It initializes the real and imaginary parts of the complex number.
		real = r;
		imag = i;
	}

	// This is automatically called when '+' is used with between two Complex objects
	Complex operator+(Complex const& obj){
		Complex res;
        // The real part of res is the sum of the real parts of the two Complex objects (this and obj).
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}

	Complex operator-(){
		Complex temp;
		temp.real = -real;
		temp.imag = -imag;
	}

	void print() { cout << real << " + i" << imag << endl; }
};

class Integer {
	private :
		int x;
	public :
		void setData (int a){
			x=a;
		}
		void showData(){
			cout<<"x"<<x;
		}
		Integer operator++(){		  // Pre Increment
			Integer i;
			i.x = ++x;
			return i;
		}
		Integer operator++(int){      // Post Increment
			Integer i;
			i.x = x++;
			return i;
		}
};

// Driver code
int main(){
	Complex c1(10, 5), c2(2, 4);

	// An example call to "operator+"
	// Binary operator overloading
	Complex c3 = c1 + c2; //  Works as --> c3 = c1.operator+(c2);
	c3.print();

	// Unary operator overloading
	Complex c4 =-c1;     // Works as --> c2 = c1.operator-();
	
	Integer i1,i2,i3,i4;
	i1.setData(3);
	i2 = i1++;          // Works as i2 = i1.operator++(); 

	i3.setData(6);
	i4=++i3;			// Works as i4 = i3.operator++();

	
}





