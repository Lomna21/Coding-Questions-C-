//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define float double
#define pi (3.141592653589)
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define NO cout<<NO<<endl
#define YES cout<<YES<<endl
#define next cout<<endl
#define all(v) v.begin(),v.end()
#define min3(a,b,c) min(c,min(a,b))
#define min4(a,b,c,d) min(d,min(c,min(a,b)))
#define FOR_0(i,n) for(int i=0;i<n;i++)
#define FOR_N(n,i) for(int i=n-1;i>=0;i--)
#define FOR_AB(a,b) for(int i=a;i<b;i++)
#define N_5 100005
#define N_9 1000000009
void solve(){
    int n, q;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i=0;i<n;i++) {
      cin >> a[i];
    }
    b[n - 1] = n;
    for (int i = n - 2; i >= 0 ; i--) {
      if(a[i]==a[i+1]){
        b[i]=b[i+1];
      }
      else{
        b[i]=i+1;
      }
    }
    cin >> q;
    while (q--) {
      int l, r;
      cin >> l >> r;
      --l;--r;
      if (b[l] > r) {
        cout << -1 << ' ' << -1 << '\n';
      }
      else {
        cout << l + 1 << ' ' << 1 + b[l] << '\n';
      }
    }
    cout<<endl;
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}