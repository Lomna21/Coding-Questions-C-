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
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int presum_ar[n];
    presum_ar[0]=ar[0];
    for(int i=1;i<n;i++){
        presum_ar[i]=presum_ar[i-1]+ar[i];
    }
    vector<int> v;
    for(int i=0;i<n;i++){
        v.push_back(presum_ar[i]);
    }
    int j=2;
    while(int x =presum_ar[n-1]/j>1){
        auto it=find(all(v),x);
        if(it==v.end()){
            j++;
        }
        else{
            break;
        }
    }
    int len=1;
    while(j>0){
        int x=presum_ar[n-1]/j;
        auto it=find(all(v),x);
        len=max(len,it);
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