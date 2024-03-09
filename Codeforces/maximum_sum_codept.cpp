//lets begin...
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define NO cout<<NO<<endl
#define YES cout<<YES<<endl
#define all(v) v.begin(),v.end()
#define N_5 100005
#define N_9 1000000009
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    //int ans=max(a+c,b+d,a+d,a,b,c,d);
    //cout<<ans<<endl;
    int a1,a2,a3,a4,a5,a6;
    int ans=0;
    a1=max(a,b);
    a2=max(c,d);
    a3=max(a1,a2);
    a4=max(a+c,b+d);
    a5=max(a4,a+d);
    a6=max(a3,a5);
    ans=max(ans,a6);

    cout<<ans<<endl;
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}