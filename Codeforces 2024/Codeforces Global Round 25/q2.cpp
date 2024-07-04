//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
 int check(int arr[],int n,int index,int temp){
        int res=0;
        if(index>0) res++;
        for(int i=index+1;i<n;i++){
            if(temp==i)continue;
            if(arr[i]>temp){
                break;
            }
            res++;
        }
        return res;
    }
void solve(){
    int n;cin>>n;
    int k;cin>>k;
    k--;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp=arr[k];
    // initially swap with 0 index
    int ans = 0;
    swap(arr[0],arr[k]);
    ans = check(arr,n,0,temp);
    swap(arr[0],arr[k]);
    int ans2=0;
    for(int i=0;i<k;i++){
        if(arr[i]>arr[k]){
            swap(arr[k],arr[i]);
            ans2 = check(arr,n,i,temp);
            swap(arr[k],arr[i]);
            break;
        }
    }
    cout<<max(ans,ans2)<<endl;
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    //cout<<"CASE: "<<t<<endl;
    solve();
    }
    return 0;
}