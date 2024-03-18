//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define NO cout<<NO<<endl
#define YES cout<<YES<<endl
#define all(v) v.begin(),v.end()
#define N_5 100005
#define N_9 1000000009
void solve(){
    ll n;
		cin >> n;
 
		ll a[n + 1];
 
		ll odd_c = 0, even_c = 0;
		for (ll i = 1; i <= n; i++) {
			cin >> a[i];
 
			if (a[i] % 2 == 0)
				even_c++;
			else
				odd_c++;
		}
 
		if (even_c % 2 == 0 || odd_c % 2 == 0) {
			cout << "YES" << "\n";
		} else {
			sort(a + 1, a + n + 1);
 
			ll flag = 0;
			for (ll i = 1; i < n; i++) {
				if (abs(a[i] - a[i + 1]) == 1 ) {
					flag = 1;
				}
			}
 
			if (flag == 1) {
				cout << "YES" << "\n";
			} else {
				cout << "NO" << "\n";
			}
		}
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}