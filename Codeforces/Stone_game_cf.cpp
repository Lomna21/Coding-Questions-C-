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
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }
    int sf=0,sb=0,gf=0,gb=0;
    for(int i=1;i<=n;i++){
        if(ar[i]==1){
            sf=i;
            sb=n-i+1;
        }
        if(ar[i]==n){
            gf=i;
            gb=n-i+1;
        }
    }
    int a1,a2,a3,a4;
    a1=max(sf,gf);
    a2=max(sb,gb);
    a3=sf+gb;
    a4=sb+gf;
    int ans=min(a1,min(a2,min(a3,a4)));
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