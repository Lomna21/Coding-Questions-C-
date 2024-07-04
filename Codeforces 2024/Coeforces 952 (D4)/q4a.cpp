#include <iostream>
#include <vector>

using namespace std;

// Global vector to store sums
vector<int> sum;

void precompute_sums() {
    sum.push_back(1); // sum[0] = 1;
    int total = sum[0];
    int i = 1;
    while (total < 200001) {
        sum.push_back(sum[i-1] + 4*i); // Resize and add new element
        total = sum[i];
        i++;
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m));
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == '#') {
                count++;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == '#') {
                // Add your logic here for processing '#' cells
                int it = lower_bound(sum.begin(),sum.end(),count)-sum.begin();
                cout<<i+it+1<<" "<<j+1<<endl;
                return;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); // Fast I/O
    cin.tie(NULL);

    precompute_sums(); // Precompute the sums
    
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        // cout << "CASE: " << t << endl;
        solve();
    }
    
    return 0;
}
