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
#define next cout<<endl
#define all(v) v.begin(),v.end()
#define min3(a,b,c) min(c,min(a,b))
#define min4(a,b,c,d) min(d,min(c,min(a,b)))
#define FOR_0(i,n) for(int i=0;i<n;i++)
#define FOR_N(n,i) for(int i=n-1;i>=0;i--)
#define FOR_AB(a,b) for(int i=a;i<b;i++)
#define N_5 100005
#define N_9 1000000009
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    int ar1[n],ar2[m];
    for(int i=0;i<n;i++){
        cin>>ar1[i];
    }
    for(int i=0;i<m;i++){
        cin>>ar2[i];
    }
    set<int> v1,v2;
    for(int i=0;i<n;i++){
        if(ar1[i]<=k){
            // cout<<ar1[i]<<" ";
            v1.insert(ar1[i]);
        }
    }
    // cout<<endl;
    for(int i=0;i<m;i++){
        if(ar2[i]<=k){
            // cout<<ar2[i]<<" ";
            v2.insert(ar2[i]);
        }
    }
    // cout<<endl;
    // sort(all(v1));
    // sort(all(v2));

    if(v1.size()<k/2 || v2.size()<k/2){
        cout<<"NO"<<endl;
        return;
    }
    v1.insert(v2.begin(), v2.end());
    if(v1.size()==k){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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