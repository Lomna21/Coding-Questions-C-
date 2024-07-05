
// Static methods are declared with the static keyword. They belong to the class itself rather than any particular object instance.
// Access: Static methods can be called using the class name directly, without needing to create an object of the class first.

// Non-static methods do not use the static keyword. They operate on data specific to each instance of the class.
// Access: Non-static methods can only be called through an instance (object) of the class.

#include <iostream>
using namespace std;

class MyClass {
public:
    static void staticMethod() {
        cout << "This is a static method." << endl;
    }
    void nonStaticMethod() {
        cout << "This is a non-static method." << endl;
    }
};

int main() {
    // Calling the static method using the class name
    MyClass::staticMethod();

    // Creating an object of MyClass
    MyClass obj;

    // Calling the non-static method using the object
    obj.nonStaticMethod();
    return 0;
}
