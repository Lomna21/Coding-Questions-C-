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
    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<n;i++){
        int m;cin>>m;
        int arr[m];
        for(int i=0;i<m;i++){
            cin>>arr[i];
            //cout<<arr[i]<<" ";
        }
        //cout<<endl;
        sort(arr,arr+m);
        /*
        for(int i=0;i<m;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        */
        v1.push_back(arr[0]);
        v2.push_back(arr[1]);
        //cout<<arr[0]<<" "<<arr[1]<<endl;

    }
    //sort(all(v1));
    sort(all(v2));
    v1.push_back(v2[0]);
    sort(all(v1));
    int sum=v1[0];
    for(int i=1;i<n;i++){
        //cout<<sum<<" ";
        sum+=v2[i];

    }
    /*cout<<v2[2];
    cout<<endl;*/
    cout<<sum<<endl;
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}