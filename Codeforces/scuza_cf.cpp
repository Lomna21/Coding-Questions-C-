//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define int long long
#define NO cout<<NO<<endl
#define YES cout<<YES<<endl
#define all(v) v.begin(),v.end()
#define N_5 100005
#define N_9 1000000009
void solve(){
    int n,q;cin>>n>>q;
    int nu[n];int ques[q];
    for(int i=0;i<n;i++){
        cin>>nu[i];
    }
    for(int i=0;i<q;i++){
        cin>>ques[i];
    }
    long long int pre_sum[n];
    pre_sum[0]=nu[0];
    for(int i=1;i<n;i++){
        pre_sum[i]=pre_sum[i-1]+nu[i];
        //cout<<pre_sum[i]<<" ";
    }
    //cout<<endl;
    for(int i=0;i<q;i++){
        for(int j=0;j<n;j++){
            if(nu[j]>ques[i]){
                if(j=0){
                    cout<<"0"<<" ";
                    break;
                }
                cout<<pre_sum[j]<<" ";
                break;
            }
            if(j==n-1){
                cout<<pre_sum[n-1]<<" ";
            }
        }
    }
    cout<<endl;
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}