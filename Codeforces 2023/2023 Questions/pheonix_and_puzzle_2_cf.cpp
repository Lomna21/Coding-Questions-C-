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
    auto it=find(v.begin(),v.end(),n);
    if(it==v.end()){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
signed main(){
    fast;
    int T;cin>>T;
    vector<int> v;
    for(int i=1;i*i<N_9;i++){
        v.push_back(i*i*2);
        v.push_back(i*i*4);
    }
    for(int i=0;i<T;i++){
        solve(v);
    }

    return 0;
}