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
    int count=0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            if(j%i==0){
                count++;
            }
        }
    } 
    cout<<count<<endl;   
}
signed main(){
    fast;
    int T=1;//cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}