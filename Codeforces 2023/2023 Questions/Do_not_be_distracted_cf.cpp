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
    int n;
    cin>>n;
    string task;
    string check;
    cin>>task;
    int j=0;
    for(int i=0;i<n-1;i++){
        if(task[i]!=task[i+1]){
            check+=task[i];
        }
        else{
            continue;
        }
    }
    check+=task[n-1];
    unordered_set<char> s;
    //cout<<check<<endl;
    // Loop to traverse the string
    for (int i = 0; i < check.size(); i++) {
 
        // Insert current character
        // into the set
        //cout<<check[i];
        s.insert(check[i]);
    }
    if(s.size()!=check.size()){
        cout<<"no"<<endl;
    }
    else{
        cout<<"yes"<<endl;
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