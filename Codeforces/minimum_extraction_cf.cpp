//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define NO cout<<NO<<endl
#define YES cout<<YES<<endl
#define all(v) v.begin(),v.end()
#define N_5 100005
#define N_9 1000000009
void solve(){
    int n,i,s=0;
    cin>>n;
    int a[n];
    for(auto &i : a){
        cin>>i;
    }
    sort(a,a+n);
    int reverse=a[0];
    for(i=0;i<n;i++){
        a[i]=a[i]-s;
        s+=a[i];
    }
    for(i=0;i<n;i++){
        reverse=max(reverse,a[i]);
    }
    cout<<reverse<<endl;
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}