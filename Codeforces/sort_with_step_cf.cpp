//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define int long long
#define NO cout<<NO<<endl
#define YES cout<<YES<<endl
#define all(v) v.begin(),v.end()
#define N_5 100005
#define N_9 1000000009
void solve(){
    int n,k;
    cin>>n>>k;
    int ar[n];
    for(int i=1;i<=n;i++){
        cin>>ar[i];
        //cout<<ar[i]<<" ";
    }
    vector<pair<int,int>> v;
    for(int i=1;i<=n;i++){
        //v[i].first=ar[i];
        //v[i].second=i;
        v.push_back(make_pair(ar[i],i));
    }
    int count=0;
    //cout<<ar[0]<<" ";
    //cout<<v[0].first<<" ";
    for(int i=0;i<n;i++){
        //cout<<v[i].first<<" ";
        //cout<<v[i].second<<" ";
        //int xyz= abs(v[i].first-v[i].second) % k;
        //cout<<xyz<<" ";
        if(abs(v[i].first-v[i].second) % k != 0){
            count++;
        }
    }
    //cout<<count<<endl;
    if(count==0){
        cout<<"0"<<endl;
    }
    else if(count==2){
        cout<<"1"<<endl;
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