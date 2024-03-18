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
    string s;cin>>s;
    bool ar[n],add_ar[n];
    for(int i=1;i<=n;i++){
        ar[i]=true;
        add_ar[i]=true;
    }
    for(int i=1;i<=n;i++){
        if(s[i-1]=='1'){
            ar[i]=false;
            add_ar[i]=false;
        }
    }
    int count=0;
    for(int i=1;i<=n;i++){
        if(ar[i]==false){
            continue;
        }
        if(ar[i]==true && add_ar[i]==true){
            count=count+i;
        }
        for(int j=2*i;j<=n;j+=i){
            if(s[j-1]=='1'){
                //ar[j]=false;
                break;
            }

            if(ar[j]==true && add_ar[j]==true){
                count=count+i;
                //ar[j]=false;
                add_ar[j]=false;
            }
        }

    }
    cout<<count<<endl;

}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}