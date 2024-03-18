//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define float double
#define pi (3.141592653589)
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define NO cout<<NO<<endl
#define YES cout<<YES<<endl
#define all(v) v.begin(),v.end()
#define min3(a,b,c) min(c,min(a,b))
#define min4(a,b,c,d) min(d,min(c,min(a,b)))
// #define FOR(i,n) for(int i=0;i<n;i++)
// #define FOR(n,i) for(int i=n-1;i>=0;i--)
// #define FOR(a,b) for(int i=a;i<b;i++)
#define N_5 100005
#define N_9 1000000009
void solve(){
    int n;cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    //cout<<n*2-1<<endl;
    // vector<int> v;
    // for(int i=0;i<n;i++){
    //     v.push_back(ar[i]);
    //     v.push_back(0);

    // }
    vector<int> ans;
    ans.push_back(ar[0]);
    for(int i=1;i<n;i++){
        if(ar[i-1]<=ar[i]){
            ans.push_back(ar[i]);
            continue;
        }
        if(ar[i]==1){
            ans.push_back(ar[i]);
            ans.push_back(ar[i]);
        }
        else{
            ans.push_back(ar[i]-1);
            ans.push_back(ar[i]);
        }
        
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;




    //cout<<v.size()<<endl;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}