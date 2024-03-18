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
    if(n==2){
        cout<<2<<endl;
        return;
    }
    vector<int> v;
    for(int i=1;i<=n;i++){
        int x=n-i-1;
        if(x<=0){
            break;
        }
        int arr[n+1];
        int temp=1;
        for(int j=1;j<=x;j++){
            arr[j]=temp*j;
            temp++;
        }
        for(int j=n;j>x;j--){
            arr[j]=temp*j;
            temp++;
        }
        arr[0]=INT_MIN;
        sort(arr,arr+n+1);
        for(int i=1;i<=n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        //cout<<arr[n];
        int sum=0;
        int max_val=0;
        for(int i=1;i<=n;i++){
            max_val=max(arr[i],max_val);
        }

        for(int i=1;i<=n;i++){
            sum+=arr[i];
            //cout<<sum<<" ";
        }
        //cout<<endl;
        int ans=sum-max_val;
        //cout<<ans<<endl;
        //cout<<max_val<<endl;
        v.push_back(ans);
        //cout<<v[i]<<" ";
    }
    sort(all(v));
    int ans=0;
    for(int i=0;i<v.size();i++){
        //cout<<v[i]<<" ";
        ans=max(v[i],ans);
    }
    //cout<<ans<<endl;

}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}