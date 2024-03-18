//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define all(v) v.begin(),v.end()
#define N_5 100005
#define N_9 1000000009
void solve(){
    int a,b,c;cin>>a>>b>>c;
    if(a+b==c || a+c==b || b+c==a){
        YES;
    }
    else {
        NO;
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