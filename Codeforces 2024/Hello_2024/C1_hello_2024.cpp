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

int penalty(vector<int> &v){
    int count=0;
    for(int i=0;i<v.size()-1;i++){
        if(v[i]<v[i+1]);
        count++;
    }
    return count;
}


void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=INT_MAX;
    int y=INT_MAX;
    int ans=0;
    for(int i=0;i<n;i++){
        if(x>y){
            swap(x,y);
        }
        if(arr[i] <= x){
            x=arr[i];
        }
        else if(arr[i] <= y){
            y=arr[i];
        }
        else{
            x=arr[i];
            ans++;
        }
        
    }
    cout<<ans<<endl;
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