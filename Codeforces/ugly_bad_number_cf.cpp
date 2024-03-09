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
    int n;cin>>n;
    list<int> l(n,3);
    if(n==1){
        cout<<"-1"<<endl;
        return;
    }
    l.pop_front();
    l.push_front(2);
    /*if(n%3==0 && n!=1){
        
    }*/
    for(auto x : l){
        cout<<x;
    }
    cout<<"\n";
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}