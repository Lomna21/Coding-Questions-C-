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
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    int min_val=INT_MAX;
    for(int i=0;i<n-1;i++){
        min_val=min(arr[i],min_val);
        int res=0;
        int count=0;
        for(int j=i+1;j<n;j++){
            if(ans==2){
                cout<<ans<<endl;
                return;
            }
            if(arr[i]>arr[j]){
                break;
            }
            if(arr[i]<arr[j] && count==0 && arr[i]<=min_val){
                ans++;
                res=arr[j];
                count++;
            }
            if(arr[i]<arr[j]  && arr[j]<res){
                ans++;
                break;
            }
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