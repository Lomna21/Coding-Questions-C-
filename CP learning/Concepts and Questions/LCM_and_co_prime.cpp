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
    int a,b;cin>>a>>b;
    int first_no,second_no,third_no;
    int min_val=min(a,b);
    for(int i=1;i<=min_val;i++){
        if(a%i==0 && b%i==0){
            first_no=i;
        }
    }
    second_no=a/first_no;
    third_no=b/first_no;
    cout<<first_no+second_no+third_no<<endl;
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}