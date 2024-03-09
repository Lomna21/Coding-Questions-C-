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
    vector<pair<int,int>> v;
    int n=s.size();
    int l=s[0]-'a';
    int r=s[n-1]-'a';
    int mn=min(l,r);
    int mx=max(l,r);
    for(int i=1;i<n-1;i++){
        v.push_back({s[i]-'a',i+1});
    }
    vector<pair<int,int>> ans;
    for(int i=0;i<v.size();i++){
        //So whats now...:)
        if(v[i].first>=mn && v[i].first<=mx){
            ans.push_back({v[i].first,v[i].second});
        }
    }
    sort(all(ans));
    if(l>r){
        reverse(all(ans));
    }
    int cost=abs(l-r);
    cout<<cost<<" "<<ans.size()+2<<endl;
    cout<<1<<" ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i].second<<" ";
    }
    cout<<n<<endl;


    


}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}