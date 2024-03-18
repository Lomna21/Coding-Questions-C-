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
    string s1,s2;
    cin>>s1>>s2;
    int n1=s1.size(); int n2=s2.size();
    int lcm=(n1*n2)/__gcd(n1,n2);
    string r1=s1,r2=s2;
    for(int i=n1;i<lcm;i+=n1){
        r1=r1+s1;
        if(r1.size()==lcm){
            break;
        }
    }
    for(int i=n2;i<lcm;i+=n2){
        r2=r2+s2;
        if(r2.size()==lcm){
            break;
        }
    }
    if(r1==r2){
        cout<<r1<<endl;
    }
    else{
        cout<<"-1"<<endl;
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