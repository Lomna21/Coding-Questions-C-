#include <iostream>
#include <vector>

using namespace std;

vector<int> ii() {
    vector<int> input;
    string line;
    getline(cin, line);
    size_t pos = 0;
    while ((pos = line.find(' ')) != string::npos) {
        input.push_back(stoi(line.substr(0, pos)));
        line.erase(0, pos + 1);
    }
    input.push_back(stoi(line)); // Adding the last integer
    return input;
}

int main() {
    vector<int> input = ii();
    int t = input[0];

    for (int _ = 0; _ < t; ++_) {
        vector<int> M;
        vector<int> nk = ii();
        int n = nk[0];
        int k = nk[1];
        int i = 1;

        while (true) {
            int cur = n / 2 + (n & 1);
            if (cur >= k) {
                cout << (2 * k - 1) * i << endl;
                break;
            } else {
                k -= cur;
                i *= 2;
                n /= 2;
            }
        }
    }

    return 0;
}
