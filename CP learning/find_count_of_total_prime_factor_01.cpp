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
    bool prime[N];
    int n;cin>>n;
    int count=0;
    for(int i=2;i<n;i++){
        prime[i]=true;
    }
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            //method --> 1
            if(n%prime[i]==0){
                count++;
            }
            for(int j=2*i;j<=n;j+=i){
                /* method --> 2
                if(j==n){
                    count++;
                }*/
                prime[j]=false;
            }
        }
    }
    cout<<count;
}
signed main(){
    fast;
    int T=1;//cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}