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
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(arr[0]==arr[n-1]){
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==arr[0]){
                count++;
                if(count>=k){
                    cout<<"yes"<<endl;
                    return;
                }
            }
        }
        cout<<"no"<<endl;
    }
    else{
        int count_l=0;
        int lower_val=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]==arr[0]){
                count_l++;
                if(count_l==k){
                    lower_val=i;
                    break;
                }
            }
        }
        int count_u=0;
        int upper_val=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(arr[i]==arr[n-1]){
                count_u++;
                if(count_u==k){
                    upper_val=i;
                    break;
                }
            }
        }
        if(lower_val<upper_val){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
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