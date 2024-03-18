//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define int long long
#define float double
#define pi (3.141592653589)
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
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

    int count=0;
    vector<int> ans;
    for(int i=n-1;i>=0;i--){

        while(count!=ar[i]){
            ans.push_back(i+1);
            count++;
        }
        
    }
    for(int i=0;i<n;i++){
        if(ar[i]!=ans[i]){
            NO;
            return;
        }
    }
    YES;
    
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}