#include <iostream>
#include <regex>
#include <vector>
#include <string>

using namespace std;

// Function to validate each latitude/longitude pair
string validatePair(const string& s) {
    // Regular expression for matching a valid latitude/longitude pair
    regex pattern(R"(\(([+-]?(90(\.0+)?|[1-8]?\d(\.\d+)?)),([+-]?(180(\.0+)?|1[0-7]\d(\.\d+)?|[1-9]?\d(\.\d+)?))\))");
    if (regex_match(s, pattern)) {
        return "Valid";
    }
    return "Invalid";
}

int main() {
    int N;
    cin >> N;
    vector<string> results;
    string pair;

    // Read and process each pair
    for (int i = 0; i < N; ++i) {
        cin >> pair;
        results.push_back(validatePair(pair));
    }

    // Output results
    for (const string& result : results) {
        cout << result << " ";
    }
    cout << endl;

    return 0;
}
