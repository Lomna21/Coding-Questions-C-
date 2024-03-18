#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to transform the initial state into the goal state
void transform_state(int a, int p, string& S, string& E) {
    vector<string> operations;  // Vector to store operations

    // Function to insert two antiprotons around a proton
    auto insert_antiprotons = [&](int index) {
        operations.push_back("+P " + to_string(index));
        S.insert(index - 1, "A");
        S.insert(index + 1, "A");
    };

    // Function to insert two protons around an antiproton
    auto insert_protons = [&](int index) {
        operations.push_back("+A " + to_string(index));
        S.insert(index - 1, "P");
        S.insert(index + 1, "P");
    };

    // Function to remove a contiguous subsequence of antiprotons
    auto remove_antiprotons = [&](int index) {
        operations.push_back("-A " + to_string(index));
        S.erase(index - 1, a);
    };

    // Function to remove a contiguous subsequence of protons
    auto remove_protons = [&](int index) {
        operations.push_back("-P " + to_string(index));
        S.erase(index - 1, p);
    };

    // Main transformation logic
    for (size_t i = 0; i < E.size(); ++i) {
        if (S[i] == E[i]) {
            continue;
        } else if (E[i] == 'A') {
            size_t found = S.find("P", i);
            if (found != string::npos && found - i <= 2) {
                insert_antiprotons(found + 1);
            } else {
                cout << -1 << endl;
                return;
            }
        } else if (E[i] == 'P') {
            size_t found = S.find("A", i);
            if (found != string::npos && found - i <= 2) {
                insert_protons(found + 1);
            } else {
                cout << -1 << endl;
                return;
            }
        }
    }

    // Output the sequence of operations
    cout << operations.size() << endl;
    for (const auto& operation : operations) {
        cout << operation << endl;
    }
}

// Main function to read input and call the transform_state function
int main() {
    int t;
    cin >> t;  // Number of test cases
    for (int i = 0; i < t; ++i) {
        int a, p;
        string S, E;
        cin >> a >> p >> S >> E;
        transform_state(a, p, S, E);
    }
    return 0;
}
