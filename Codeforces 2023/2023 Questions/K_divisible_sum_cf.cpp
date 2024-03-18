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
    int n,k;cin>>n>>k;
    if(n>=k){
        if(n%k==0){
            cout<<"1"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
    }
    else{
        if(k%n==0){
            cout<<k/n<<endl;
        }
        else{
            cout<<(k/n)+1<<endl;
        }
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