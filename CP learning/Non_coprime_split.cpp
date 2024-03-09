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
    int l,r;
    cin>>l>>r;
    if(r>l){
        if(l-1 == 0 || l-2 == 0){
            cout<<-1<<endl;
            return;
        }
        if(l%2==0){
            cout<<2<<" "<<l-2<<endl;
            return;
        }
        else{
            cout<<2<<" "<<l-1<<endl;
            return;
        }
    }
    else{
        for(int i=2;i<l;i++){
            if(l%i==0){
                cout<<i<<" "<<l-i<<endl;
                return;
            }
        }
    }
    cout<<-1<<endl;
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}