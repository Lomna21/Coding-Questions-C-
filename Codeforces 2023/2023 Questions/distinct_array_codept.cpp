//lets begin...
//run time error
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define NO cout<<NO<<endl
#define YES cout<<YES<<endl
#define all(v) v.begin(),v.end()
#define N_5 1e5
#define N_9 1000000007

int fact(int n, vector<int>& dp) {
    if (n == 0 || n == 1)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    else {
        dp[n] = n * fact(n - 1, dp);
        return dp[n];
    }
}

void solve() {
    int n, k;
    cin >> n >> k;
    int ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    if (k == 0) {
        cout << 1 << endl;
        return;
    }
    vector<int> dp(n+1, -1);
    int ans = 0;
    while (k > -1) {
        ans += fact(n, dp) / (fact(k, dp) * fact(n - k, dp));
        k--;
    }
    ans = ans % N_9;
    cout << ans << endl;
}

signed main() {
    fast;
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        solve();
    }
    return 0;
}
