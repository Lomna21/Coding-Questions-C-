#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is interesting
bool is_interesting(int num) {
    string num_str = to_string(num);
    for (int i = 0; i < num_str.size(); ++i) {
        int digit = num_str[i] - '0';
        if (i % 2 == 0) { // 0-based index, so this is an odd index (1-based)
            if (digit % 2 == 0) // Odd index must have odd digit
                return false;
        } else { // This is an even index (1-based)
            if (digit % 2 == 1) // Even index must have even digit
                return false;
        }
    }
    return true;
}

// Precompute interesting numbers up to a given limit
vector<long long> precompute_interesting_numbers(int limit) {
    vector<long long> interesting_numbers;
    for (int i = 1; i < limit; ++i) {
        if (is_interesting(i)) {
            interesting_numbers.push_back(i);
        }
    }
    return interesting_numbers;
}

// Solve function to find the K-th smallest interesting number
long long solve(int K) {
    static vector<long long> interesting_numbers = precompute_interesting_numbers(100000); 
    return interesting_numbers[K - 1];  // K is 1-based, so return the (K-1)-th element
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;  // Number of test cases

    for (int t_i = 0; t_i < T; t_i++) {
        int K;
        cin >> K;

        long long out_;
        out_ = solve(K);
        cout << out_ << "\n";
    }
}