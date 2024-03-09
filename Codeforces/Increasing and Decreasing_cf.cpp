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
    int x,y,n;
    cin>>x>>y>>n;
    //vector<int> v(n,0);
    int sub=y-x;
    int ar[n];
    ar[0]=x;ar[n-1]=y;
    if(sub>=n*(n-1)/2){
        int j=2;
        for(int i=n-2;i>=1;i--){
            ar[i]=(y-j*(j-1)/2);
            j++;
            //cout<<ar[i]<<endl;
        }
        for(int i=0;i<n;i++){
            cout<<ar[i]<<" ";
        }
        cout<<endl;
        
    }
    else{
        cout<<-1<<endl;
    }
    // v[n-1]=y;
    // v[0]=x;
    // int j=1;
    // int curr=y-1;
    // int difference=0;
    // int val=0;
    // for(int i=n-2;i>=1;i--){
    //     difference=curr-x;
    //     if(difference>j){
    //         v[i]=curr;
    //         ++j;
    //         curr=curr-j;

    //     }
    //     else{
    //         cout<<-1<<endl;
    //         return;
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }cout<<endl;
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}