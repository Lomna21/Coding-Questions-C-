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
    sort(arr,arr+n);
    int index=0;
    int last=arr[n-1];
    vector<int> b;
    vector<int> c;
    for(int i=0;i<n;i++){
        if(arr[i]==last){
            index=i;
            break;
        }
    }
    for(int i=0;i<index;i++){
            b.push_back(arr[i]);
            //cout<<b[i]<<" ";
    }
    //cout<<index<<endl;
    //cout<<arr[index]<<endl;
    for(int i=index;i<n;i++){
            c.push_back(arr[i]);
            //cout<<"-->"<<c[0]<<endl;
    }
    
    if(b.size()==0){
        cout<<"-1"<<endl;
    }
    else{
        cout<<b.size()<<" "<<c.size()<<endl;
        for(int i=0;i<index;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
        int j=0;
        for(int i=index;i<n;i++,j++){
            cout<<c[j]<<" ";
        }
        cout<<endl;
    }
    
    
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}