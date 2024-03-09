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
    int n;cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    //int ans[n-2];
    int mn=INT_MAX;
    int ans;
    for(int i=1;i<n-1;i++){
        ans=(ar[i]-ar[i-1])+(ar[i+1]-ar[i]);
        mn=min(ans,mn);
    }
    cout<<mn<<endl;
    

}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}