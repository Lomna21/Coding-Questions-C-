#include <iostream>
#include <string>

using namespace std;

bool isValid(const string& s, const string& substr, int len) {
    int n = s.length();
    int count =0;
    int count1=0;

    string s1 = s.substr(n-len,n);
    for (int i = 0; i < n; ++i) {
        if (s[i] != s1[i % len]) {
            count++;
            if(count==2){
                // return false;
                break;
            }
            // if (i == n - 1) return true; // reached the end of string, and there's only one difference
            // return false;
        }
    }


    for (int i = 0; i < n; ++i) {
        if (s[i] != substr[i % len]) {
            count1++;
            if(count1==2){
                // return false;
                break;
            }
            // if (i == n - 1) return true; // reached the end of string, and there's only one difference
            // return false;
        }
    }
    if(count >= 2 && count1 >=2){
        return false;
    }
    return true;
}

int shortestRepeatingSubstringLength(const string& s) {
    int n = s.length();
    for (int len = 1; len <= n / 2; ++len) {
        if (n % len == 0) {
            string substr = s.substr(0, len);
            if (isValid(s, substr, len)) {
                return len;
            }
        }
    }
    return n;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    int result = shortestRepeatingSubstringLength(s);
    cout << "Length of the shortest repeating substring: " << result << endl;

    return 0;
}
