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
    int n,x;cin>>n>>x;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    int required=0;
    for(int i=0;i<n;i++){
        required+=ar[n-1]-ar[i];
    }
    int available;
    int ans;
    if(required<x){
        available=x-required;
        
        ans = ar[n-1] + available/x;
        if(available%x!=0){
            ans++;
        }
    }
    else{
        for(int i=0;i<n-1;i++){
            int val=0;
            if(required>x){
                val=ar[n-1-i]-ar[n-2-i];
                required=required-val*ar[n-3-i];
            }
            else{
                if(required==x){
                    cout<<ar[n-4-i]<<endl;
                    return;
                }
                else{
                    cout<<ar[n-4-i]<<endl;
                    return;
                }
            }
        }
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