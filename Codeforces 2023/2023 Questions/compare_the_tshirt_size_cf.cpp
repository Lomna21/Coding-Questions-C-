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
    string a,b;
    cin>>a>>b;
    int l1=a.length();
    int l2=b.length();
    int count_xs=0;
    if(a[l1-1]=='S' && (b[l2-1]=='M' || b[l2-1]=='L')){
        cout<<"<"<<endl;
    }
    else if(a[l1-1]=='S' && b[l2-1]=='S'){
        if(l1>l2){
            cout<<"<"<<endl;
        }
        else if(l1=l2){
            cout<<"="<<endl;
        }
        else{
            cout<<">"<<endl;
        }
    }
    else if(a[l1-1]=='M' && (b[l2-1]=='M')){
        cout<<"="<<endl;
    }
    else if(a[l1-1]=='M' && ( b[l2-1]=='L')){
        cout<<"<"<<endl;
    }
    else if(a[l1-1]=='M' && ( b[l2-1]=='S')){
        cout<<">"<<endl;
    }
    else if(a[l1-1]=='L' && ( b[l2-1]=='M' || b[l2-1]=='S')){
        cout<<">"<<endl;
    }
    else if(a[l1-1]=='L' && ( b[l2-1]=='L')){
        if(l1>l2){
            cout<<">"<<endl;
        }
        else if(l1=l2){
            cout<<"="<<endl;
        }
        else{
            cout<<"<"<<endl;
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