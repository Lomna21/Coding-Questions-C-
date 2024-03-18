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
/*

    int n;cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        //cout<<arr[i]<<" ";
    }
    if(arr[n-2]>n*(n+1)/2){
        cout<<"no"<<endl;
        return;
    }
    //cout<<endl;
    int temp[n-1];
    vector<int> hash_temp(N_5,0);
    for(int i=0;i<n-2;i++){
        temp[i]=arr[i+1]-arr[i];
        if(temp[i]==arr[0] && arr[0]==1){
            cout<<"no"<<endl;
            return;
        }
        //cout<<temp[i]<<" ";
        //hash_temp[temp[i]]++;
    }
    //temp[n-2]==arr[0];
    
    //cout<<endl;
    for(int i=0;i<n-2;i++){
        hash_temp[temp[i]]++;
        //cout<<hash_temp[i]<<" ";
    }
    /*
    for(int i=0;i<n-2;i++){
        //hash_temp[temp[i]]++;
        cout<<hash_temp[i]<<" ";
    }

    cout<<endl;

    cout<<arr[n-2]<<endl;
    //---->>>> 
    

    
    if(arr[n-2]<=n*(n+1)/2){
        for(int i=0;i<n;i++){
            if(hash_temp[i]>=2){
                cout<<"no"<<endl;
                return;
            }
        }
        cout<<"yes"<<endl;
    }

 */   
    


    int n;cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int temp[n]={n,0};
    for(int i=0;i<n-2;i++){
        temp[i]=arr[i-1]-arr[i];
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
