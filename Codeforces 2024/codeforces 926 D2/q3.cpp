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
    int k,x,a; cin>>k>>x>>a;
    if(a<=x) {
        cout<<"NO\n";
        return;
    }

    vector<int> arr(x+1,0);
    arr[0]=1;
    
    int lose=1;
    a = a - 1;

    for(int i=0;i<x;i++)
    {
        
        int required=ceil(1.0*(lose+1)/(k-1));
        
        arr[i]=required;
        a = a - required;
        if(a<0){
            cout<<"NO"<<endl;
            return;
        }
        lose = lose + required;
    }

    cout<<"YES"<<endl;
    return;
}

signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}