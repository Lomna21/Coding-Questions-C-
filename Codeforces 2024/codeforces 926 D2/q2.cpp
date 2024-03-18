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
    int n,k;
    cin>>n>>k;
    int diagonal=4*n-2;
    int ans;
    if(k==diagonal){
        ans=2*n;
        cout<<ans<<endl;
        return;
    }
    else if(k%2==0){
        ans=k/2;
        cout<<ans<<endl;
    }
    else{
        ans=k/2+1;
        cout<<ans<<endl;
    }
    /*
    else {
        if(2*n>=k){
            if(k%2==0){
                ans=k/2;
                cout<<ans<<endl;
                return;
            }
            else{
                ans=k/2;
                cout<<ans+1<<endl;
                return;
            }
        }
        else{
            int middle=n-2;
            int remaning=k-2*n;
            if(middle*2>=remaning){
                if(remaning%2==0){
                    ans=n+(remaning/2);
                    cout<<endl;
                    return;
                }
                else{
                    ans=n+(remaning/2)+1;
                    cout<<ans<<endl;
                    return;
                }
            }
            else{
                int extra = remaning-2*middle;
                ans=n+middle+extra;
                cout<<ans<<endl;
                return;
            }
        }
    }*/
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}