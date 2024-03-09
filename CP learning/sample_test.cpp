#include <iostream>
#include <string>
using namespace std;
   
// Function to demonstrate append()
void appendDemo(string str1, string str2)
{
    // Appends 5 characters from 0th index of
    // str2 to str1
    str1.append(str2, 0, 4);
    cout << "Using append() : ";
    cout << str1;
}
   
// Driver code
int main()
{
    string str1("GeeksforGeeks ");
    string str2("Hello World! ");
   
    cout << "Original String : " << str1 << endl;
    appendDemo(str1, str2);
   
    return 0;
}