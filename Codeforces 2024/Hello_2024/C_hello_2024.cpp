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
    int n;cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    //for 1 or 2 numbers
    if(n==1 || n==2){
        cout<<"0"<<endl;
        return;
    }
    //for all in increasing
    int count=0;
    for(int i=0;i<n-1;i++){
        if(ar[i]<ar[i+1]){
            count++;
        }
    }
    if(count==n-1){
        cout<<n-2<<endl;
        return;
    }
    //for all decreading or all equal
    if(count==0){
        cout<<0<<endl;
        return;
    }

    //for mixed array
    int min_val=ar[0];
    vector<int> A,B;

    A.push_back(ar[0]);
    for(int i=0;i<n-1;i++){
        if(min_val>=ar[i+1]){
            A.push_back(ar[i+1]);
        }
        else{
            B.push_back(ar[i+1]);
        }
        min_val=min(min_val,ar[i+1]);
    }
    int ans=0;
    for(int i=0;i<B.size()-1;i++){
        //cout<<B[i]<<" ";
        if(B[i]<B[i+1]){
            ans++;
        }
    }//cout<<B[B.size()-1]<<endl;
    cout<<ans<<endl;
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}