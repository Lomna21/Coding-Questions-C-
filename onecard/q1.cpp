#include <iostream>
#include <unordered_set>
#include <vector>
#include <climits>
using namespace std;

void solve(int n, const vector<int>& A, const vector<int>& B) {
    // Convert array B into an unordered set for fast lookups
    unordered_set<int> B_set(B.begin(), B.end());
    
    // Find the smallest number in A that is not in B
    int result = INT_MAX;
    for (int num : A) {
        if (B_set.find(num) == B_set.end() && num < result) {
            result = num;
        }
    }
    
    // Print the result, or -1 if no such number exists
    if (result == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << result << endl;
    }
}

int main() {
    int n;
    cin >> n; // Size of the arrays

    vector<int> A(n), B(n);
    
    // Input array A
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    // Input array B
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }
    
    // Solve the problem
    solve(n, A, B);

    return 0;
}