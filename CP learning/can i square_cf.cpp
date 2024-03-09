//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

bool isPerfectSquare(int x)
{
    
    if (x >= 0) {
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}

void solve(){
    int n;cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=ar[i];
    }
    //cout<<sqrt(10);
    if (isPerfectSquare(sum))
        cout << "Yes"<<endl;
    else
        cout << "No"<<endl;
    



}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}