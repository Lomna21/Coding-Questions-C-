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
    int ar1[n],ar2[n];
    for(int i=0;i<n;i++){
        cin>>ar1[i];
    }
    for(int i=0;i<n;i++){
        cin>>ar2[i];
    }
    int sub[n];
    for(int i=0;i<n;i++){
        sub[i]=ar2[i]-ar1[i];
    }
    sort(sub,sub+n);
    int count=1;
    int ans=0;
    for(int i=0;i<n;i++){
        if(i>=n-count)break;
        if(sub[i]+sub[n-count]>=0){
            ans++;
            count++;
        }
    }
    cout<<ans<<endl;
    /*sort(ar1,ar1+n);
    sort(ar2,ar2+n);
    int count=0;
    for(int i=0;i<n;i++){
        if(ar2[i]>=ar1[i]){
            count++;
        }
    }
    int ans=count/2;
    cout<<ans<<endl;*/
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}