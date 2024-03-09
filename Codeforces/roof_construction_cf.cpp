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
void solve(vector<int> v){
    int n;cin>>n;
    auto it=lower_bound(all(v),n);
    int x=*(it);
    x=x/2;
    //cout<<x<<"$"<<endl;
    for(int i=1;i<=n;i++){
        if(n-i>=x){
            cout<<n-i<<" ";
        }
        else{
            break;
        }
    }
    for(int i=0;i<x;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}


signed main(){
    fast;
    int T;cin>>T;
    vector<int> v;
    for(int i=1;i*i*i<3*N_5;i++){
        v.push_back(pow(2,i));
    }
    for(int t=1;t<=T;t++){
    solve(v);
    }
    return 0;
}