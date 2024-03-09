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
    /*
    int n;cin>>n;
    string s;cin>>s;
    vector<int> v;
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            for(int j=n-1;j>=0;i--){
                if(s[j]=='0'){
                    swap(s[i],s[j]);
                    count+=2;
                    v.push_back(i+1);
                    v.push_back(j+1);
                    break;
                }
            }
        }    
    }
    if(count!=0){
        cout<<"1"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    cout<<count<<" ";
    sort(v.begin(),v.end());
    for(auto x : v){
        cout<<x<<" ";
    }
    cout<<endl;
    */
   int n;cin>>n;
   string s;cin>>s;
   string s1;
   s1=s;
   sort(s1.begin(),s1.end());
   vector<int> v;
   for(int i=0;i<n;i++){
    if(s[i]!=s1[i]){
        v.push_back(i+1);
    }
   }
   if(v.size()==0){
    cout<<"0"<<endl;
   }
   else{
    cout<<"1"<<endl<<v.size()<<" ";
    for(auto x : v){
        cout<<x<<" ";
    }
    cout<<endl;
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