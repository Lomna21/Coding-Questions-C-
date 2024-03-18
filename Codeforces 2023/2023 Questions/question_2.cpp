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
    int m,k,a1,ak;
    cin>>m>>k>>a1>>ak;
    if(a1>=m || (m%k<=a1 && m/k<=ak)){
        cout<<0<<endl;
        return;

    }
    int counter=0;

    int fancy_k=min(m/k,ak);
    int fancy_1=min(m-k*fancy_k,a1);
    int f_kk=k*fancy_k;
    int fancy_r=m-fancy_1-f_kk;
    if(fancy_r % k ==0){
        cout<<fancy_r/k<<endl;
        
    }
    else if((k-fancy_r % k) <= fancy_1){
        cout<<(fancy_r/k)+1<<endl;
    }
    else{
        cout<<(fancy_r/k)+(fancy_r%k)<<endl;
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