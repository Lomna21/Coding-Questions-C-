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
    string s;cin>>s;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        v.push_back({ar[i],s[i]});
    }
    int ans[n];
    int count=1;
    sort(all(v));
    for(int i=0;i<n;i++){
        if(v[i].second=='0'){
            ans[i]=count;
            count++;
        }
    }
    for(int i=0;i<n;i++){
        if(v[i].second=='1'){
            ans[i]=count;
            count++;
        }
    }
    for(int i=0;i<n;i++){
        //cout<<"hello";
        cout<<ans[ar[i]-1]<<" ";
    }
    cout<<endl;
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}