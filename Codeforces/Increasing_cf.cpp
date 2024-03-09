//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define all(v) v.begin(),v.end()
#define N_5 100005
#define N_9 1000000009
void solve(){
    int n;cin>>n;
    int ar[n];
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        s.insert(ar[i]);
    }
    if(s.size()==n){
        YES;
    }
    else{
        NO;
    }
    // if(n==1){
    //     YES;
    //     return;
    // }
    // for(int i=0;i<n;i++){
    //     cin>>ar[i];
    // }   
    // sort(ar,ar+n);
    // bool ans =true;
    // for(int i=0;i<n-1;i++){
    //     if(ar[i+1]<=ar[i]){
    //         ans=false;
    //         break;
    //     }
    // }
    // if(ans){
    //     YES;
    // }
    // else{
    //     NO;
    // }

}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}