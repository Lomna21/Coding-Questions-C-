//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define all(v) v.begin(),v.end()
#define N_9 1000000009
#define N_5 100005
int arr[100];



void solve(int arr[],int size){
    int n;cin>>n;
    int low=1;int high=size;
    int mid;
    while(high-low>1){
        mid=(low+high)/2;
        //cout<<mid<<endl;
        if(n<arr[mid]){
            high=mid-1;
        }
        else{
            low=mid;
        }
    }
    if( arr[low] == n || arr[high] == n){
        YES;
    }
    else{
        NO;
    }
    
}
signed main(){
    fast;
    int T,i;cin>>T;
    list<int> v;
    int n=N_9;
    int sq=sqrt(n);
    for(int i=0;i<100;i++){
        arr[i]=0;
        cout<<arr[i]<<" ";
    }
    //int arr[sq];
    for(i=1;i*i<=n;i++){
        int power_val=pow(2,i);
        //v.push_back(power_val);
        arr[i]=power_val;
        //cout<<arr[i]<<endl;
        if(arr[i]=0){
            break;
        }
    }
    sort(arr,arr+i);
    for(int t=1;t<=T;t++){
    solve(arr,i-1);
    }
    return 0;
}