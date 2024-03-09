//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define NO cout<<NO<<endl
#define YES cout<<YES<<endl
#define all(v) v.begin(),v.end()
void solve(){
    int n;cin>>n;
    int ans=0;
    int test=1;
    while(true){
        if(test<n){
            test = pow(2,ans);
            ans++;
        }
        else{
            break;
        }
    }
    cout<<ans-1<<endl;
}
signed main(){
    fast;
    int T=1;//cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}