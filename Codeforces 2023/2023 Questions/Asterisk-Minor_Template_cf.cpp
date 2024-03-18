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
    string a;
    string b;
    cin>>a>>b;
    int count=0;
    int temp=0;
    int place;
    for(int i=0;i<a.size();i++){
        if(count==2){
            break;
        }
        for(int j=0;j<b.size();j++){
            if(a[i]==b[j]){
                count++;
                if(a[i+1]==b[j+1]){
                    count++;
                    place=i;
                    break;
                }
                temp=count;
                count=0;
            }
        }
    }
    
    if(a[0]==b[0]){
        cout<<"YES"<<endl;
        cout<<a[0]<<"*"<<endl;
    }
    else if(a[a.size()-1]==b[b.size()-1]){
        cout<<"YES"<<endl;
        cout<<"*"<<a[a.size()-1]<<endl;
    }
    else if(count==2){
        cout<<"YES"<<endl;
        cout<<"*"<<a[place]<<a[place+1]<<"*"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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