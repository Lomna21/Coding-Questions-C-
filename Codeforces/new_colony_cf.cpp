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
    int n,k;
    cin>>n>>k;
    int ar[n];
    int bp[k];
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }
    if(k>10000){
        cout<<"-1"<<endl;
        return;
    }
    for(int i=1;i<=k;i++){
        for(int j=1;j<=n;j++){
            if(ar[j]>=ar[j+1]){
                if(j+1==n){
                    cout<<"-1"<<endl;
                    return;
                    //break;

                }
                continue;
            }
            else if(ar[j]<ar[j+1]){
                ar[j]++;
                bp[i]=j;
                break;
            }
        }
    }
    cout<<bp[k]<<endl;
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}