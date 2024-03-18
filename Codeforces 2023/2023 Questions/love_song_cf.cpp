//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define NO cout<<NO<<endl
#define YES cout<<YES<<endl
#define all(v) v.begin(),v.end()
#define N 100005
// int solve(int arr[], int n){
//     int count=0;
//     int l,r;cin>>l>>r;
//     for(int i=l-1;i<r;i++){
//         count+=arr[i];
//     }
//     cout<<count<<endl;
//     return 0;
//     }
signed main(){
    fast;
    int n,q;cin>>n>>q;
    //int T=1;
    string s;cin>>s;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=s[i]-'a'+1;
    }
    for(int t=1;t<=q;t++){
        int count=0;
        int l,r;cin>>l>>r;
        for(int i=l-1;i<r;i++){
            count+=arr[i];
            cout<<arr[i]<<" ";
        }
        cout<<count<<endl;
        //cout<<solve(arr,n)<<endl;
    }
    return 0;
}