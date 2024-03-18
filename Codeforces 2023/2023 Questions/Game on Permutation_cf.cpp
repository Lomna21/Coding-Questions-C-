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
        //cout<<arr[i]<<" ";
    }
    int counter=1;
    int max_count=0;
    int index=0;
    int ans=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            //cout<<" jjj";
            counter++;
            //cout<<counter<<" "<<endl;
            if(counter%2==0){
                ans++;
            }
        }
        else{
            /*
            max_count=max(counter,max_count);
            //cout<<max_count<<" ";
            if(max_count%2==0 && max_count!=0){
                index=i;
                cout<<index<<endl;
                return;
            }
            */
            counter=1;
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