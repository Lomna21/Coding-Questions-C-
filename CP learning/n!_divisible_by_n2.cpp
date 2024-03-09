//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define NO cout<<NO<<endl
#define YES cout<<YES<<endl
#define all(v) v.begin(),v.end()
#define N 100005
void solve(){
    int n;cin>>n;
    int x=1;
    bool ans=false;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            x*=i;
            if(x>=n){
                /*if(n*n/x==n){
                    ans=true;
                    break;
                }*/
                break;
            }
        }
    }
    if(ans){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
signed main(){
    fast;
    int T=1;//cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}