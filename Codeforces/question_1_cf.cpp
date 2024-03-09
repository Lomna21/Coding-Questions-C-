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
    string s;cin>>s;
    int len=s.length();
    if(len==2 && s=="()"){
        cout<<"no"<<endl;
        return;

    }
    cout<<"yes"<<endl;
    string a(len,'(');
    a+=string(len,')');
    string c ="";
    for(int i=0;i<len;i++){

        c=c+"()";
        
    }
    
    if(a.find(s)!=string::npos){
            cout<<c<<endl;
        }
        else{
            cout<<a<<endl;
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