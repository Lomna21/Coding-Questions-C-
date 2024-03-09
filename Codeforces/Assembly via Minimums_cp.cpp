//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define NO cout<<NO<<endl
#define YES cout<<YES<<endl
#define all(v) v.begin(),v.end()
#define N_5 100005
#define N_9 1000000000
void solve(){
    int n;cin>>n;
    int arr[n*(n-1)/2];
    for(int i=0;i<n*(n-1)/2;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n*(n-1)/2);
    int j=0;
    for(int i=0;i<n-1;i++){
        cout<<arr[j]<<" ";
        j=j+n-i-1;
    }
    cout<<N_9<<endl;
   
    
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}