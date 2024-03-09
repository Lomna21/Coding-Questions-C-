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
    int n,t;cin>>n>>t;
    string s;cin>>s;
    for(int i=0;i<t;i++){
        for(int j=0;j<n-1;j++){
            if(s[j]=='B' && s[j+1]=='G'){
                s[j+1]='B';
                s[j]='G';
                j++;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
    cout<<endl;
}
signed main(){
    fast;
    int T=1;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}