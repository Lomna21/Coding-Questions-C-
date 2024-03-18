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
    int ar[n];
    if(n==3){
        cout<<-1<<endl;
    }
    else if(n%2==0){
        for(int i=1;i<=n;i++){
            cout<<n+1-i<<" ";
        }
        cout<<endl;
    }
    else{
        int mid=n/2;
        for(int i=1;i<=mid;i++){
            cout<<n-i+1<<" ";
        }
        int j=1;
        for(int i=mid+1;i<=n;i++){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
    }
    
    
    
    /*
    else if{
        for(int i=1;i<=n;i++){
            ar[i]=n-i+1;
        }
        int j=1;
        for(int i=1;i<=n;i++){
            if(ar[i]==i){
                int q=i;
                for(i=q;i<=n;i++){
                    ar[i]=j;
                    j++;
                }
            }
            break;
        }
        for(int i=1;i<=n;i++){
            cout<<ar[i]<<" ";
        }
        cout<<endl;
    }*/
    
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}