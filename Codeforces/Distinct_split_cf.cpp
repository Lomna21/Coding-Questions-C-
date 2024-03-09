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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int val=0;
    int count=0;
    int part1=0,part2=0;

    set<char> v;
    set<char> v2;
    v.insert(s[0]);
    for(int i=1;i<n;i++){
        v.insert(s[i]);
        if(v.size()!=i+1){
            part1=v.size();
            val=i;
            break;
        }
    }
    for(int j=val;j<n;j++){
        v2.insert(s[j]);
    }
    val+=v2.size();
    cout<<val<<endl;
    
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}