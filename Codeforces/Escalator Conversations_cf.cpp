//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define NO cout<<NO<<endl
#define YES cout<<YES<<endl
#define all(v) v.begin(),v.end()
#define N_5 100005
#define N_9 1000000009
void solve(){
    int n,m,k,h;
    cin>>n>>m>>k>>h;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=abs(arr[i]-h);
        //cout<<arr[i]<<" ";
    }
    //cout<<endl;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%k==0 && arr[i]<m*k  && arr[i]!=0){
            count++;
        }
    }
    cout<<count<<endl;
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}