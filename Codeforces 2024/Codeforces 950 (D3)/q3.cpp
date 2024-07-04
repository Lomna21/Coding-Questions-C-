#include <iostream>
#include <vector>
#include <map>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

// Function to fill a vector with input values
void fill(vi &a) {
    for (int &x : a) {
        cin >> x;
    }
}

// Function to print "YES"
void pyes() {
    cout << "YES" << endl;
}

// Function to print "NO"
void pno() {
    cout << "NO" << endl;
}

int main() {
    int n, m;
    cin >> n >> m;
    vvi a(n, vi(m)), b(n, vi(m)), an(n, vi(m));

    // Input matrices a and b
    for (int i = 0; i < n; i++) {
        fill(a[i]);
    }
    for (int i = 0; i < n; i++) {
        fill(b[i]);
    }

    int i1 = -1, i2 = -1;

    // Find the rows i1 and i2 where a[i1][j] == 1 and b[i2][j] == 1
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 1) {
                i1 = i;
            }
            if (b[i][j] == 1) {
                i2 = i;
            }
        }
    }

    if (i1 == -1 || i2 == -1) {
        pno();
        return 0;
    }

    map<int, int> mp1;

    // Create a mapping for b[i2]
    for (int i = 0; i < m; i++) {
        mp1[b[i2][i]] = i;
    }

    map<int, int> mp;

    // Check if all elements in a[i1] are in b[i2] and create mapping mp
    for (int i = 0; i < m; i++) {
        if (mp1.find(a[i1][i]) == mp1.end()) {
            pno();
            return 0;
        }
        mp[i] = mp1[a[i1][i]];
    }

    // Rearrange a based on the mapping mp
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            an[i][mp[j]] = a[i][j];
        }
    }

    map<int, int> mp3;

    // Create a mapping for the first column of b
    for (int i = 0; i < n; i++) {
        mp3[b[i][0]] = i;
    }

    // Check if rearranged an matches b
    for (int i = 0; i < n; i++) {
        if (mp3.find(an[i][0]) == mp3.end()) {
            pno();
            return 0;
        }
        int idx = mp3[an[i][0]];
        for (int j = 0; j < m; j++) {
            if (an[i][j] != b[idx][j]) {
                pno();
                return 0;
            }
        }
    }

    pyes();
    return 0;
}
