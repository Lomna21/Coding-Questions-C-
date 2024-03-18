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
    int temp[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        temp[i]=arr[i];
    }
    sort(temp,temp+n);
    vector<int> odd;
    vector<int> even;
    for(int i=0;i<n;i++){
        if(temp[i]%2==0){
            even.push_back(temp[i]);
        }
        else{
            odd.push_back(temp[i]);
        }
    }
    vector<int> ans;
    int j=0,k=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            ans.push_back(even[j]);
            j++;
        }
        else{
            ans.push_back(odd[k]);
            k++;
        }
    }
    for(int i=0;i<n-1;i++){
        if(ans[i]>ans[i+1]){
            cout<<"no"<<endl;
            return;
        }
    }
    cout<<"yes"<<endl;
    
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}