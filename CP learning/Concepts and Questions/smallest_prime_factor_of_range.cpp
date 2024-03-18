//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define NO cout<<NO<<endl
#define YES cout<<YES<<endl
#define all(v) v.begin(),v.end()
#define N 100005
void solve(){
    int n;cin>>n;
    int prime[N];
    int spf[N];
    /*for(int i=2;i<n;i++){
        prime[i]=true;                
    }
    for(int i=2;i*i<n;i++){
        if(prime[i]){
            spf[i]=i;
            for(int j=i*2;j<n;j+=i){
                prime[j]=false;
                if(!prime[j]){
                    spf[j]=i;
                }
            }
        }
    }*/
    for(int i=2;i<=n+1;i++){
        for(int j=2;j<=n+1;j++){
            if(i%j==0){
                spf[i]=j;
                break;
            }
        }
    }
    int count_2=0;
    for(int i=2;i<=n+1;i++){
        if(spf[i]==2){
            //cout<<spf[i]<<" ";
            count_2++;
        }
    }
    cout<<"\n";
    cout<<count_2<<endl;
}
signed main(){
    fast;
    int T=1;//cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}