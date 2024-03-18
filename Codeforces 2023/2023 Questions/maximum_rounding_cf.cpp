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
    string x;cin>>x;
    int S=x.size();
    int index=S;
    
    for(int i=S-1-1;i>=0;i--){
        if(x[i+1]>='5'){
            if(x[i]!='9'){
                x[i]++;
                index=i;
            }
        }
    }

    if(x[0]>='5'){
        cout<<1;
        for(int i=0;i<S;i++){
            cout<<0;
        }
        cout<<endl;
        //return;
    }
    else{
        for(int i=index+1;i<S;i++){
            x[i]='0';
        }
        cout<<x<<endl;
    }
    
}
signed main(){
    fast;
    int T;cin>>T;
    while(T--){
    solve();
    }
}



