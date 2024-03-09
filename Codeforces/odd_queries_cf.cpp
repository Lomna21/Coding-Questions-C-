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
    int n,q;
    cin>>n>>q;
    int ar[n];
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }
    int ar_sum[n];
    int count=0;
    for(int i=1;i<=n;i++){
        count+=ar[i];
        ar_sum[i]=count;;
    }
    //cout<<ar_sum[n]<<endl;
    for(int j=1;j<=q;j++){
        int l,r,k;
        cin>>l>>r>>k;
        int ans_sum=0;
        ans_sum+=ar_sum[l-1];
        ans_sum+=ar_sum[n]-ar_sum[r];
        ans_sum+=(r-l+1)*k;
        //cout<<ans_sum<<endl;
        if(ans_sum%2!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
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