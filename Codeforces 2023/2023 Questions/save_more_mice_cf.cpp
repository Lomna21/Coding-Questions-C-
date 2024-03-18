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
    int n,k;cin>>n>>k;
    int arr[k];
    for(int i=0;i<k;i++){
        cin>>arr[i];
    }
    sort(arr,arr+k);
    int new_arr[k];
    for(int i=0;i<k;i++){
        new_arr[i]=arr[k-i-1];
    }
    int count=0;
    int ans=0;
    int i=0;
    int element_left=k;
    while(count<n and element_left>0){
        count = count + (n-new_arr[i]);
        i++;
        element_left--;
        if(count<n){
            ans++;
        }
    }
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