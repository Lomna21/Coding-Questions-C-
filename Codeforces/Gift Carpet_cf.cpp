//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define float double
#define pi (3.141592653589)
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define NO cout<<NO<<endl
#define YES cout<<YES<<endl
#define all(v) v.begin(),v.end()
#define min3(a,b,c) min(c,min(a,b))
#define min4(a,b,c,d) min(d,min(c,min(a,b)))
// #define FOR(i,n) for(int i=0;i<n;i++)
// #define FOR(n,i) for(int i=n-1;i>=0;i--)
// #define FOR(a,b) for(int i=a;i<b;i++)
#define N_5 100005
#define N_9 1000000009
void solve(){
    int n,m;
    cin>>n>>m;
    char ar[n][m];
    bool ans=true;
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ar[i][j];
            //cout<<ar[i][j];
        }
        //cout<<endl;
    }
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            //cin>>ar[i][j];
            //cout<<ar[i][j]<<" ";
            if(ar[i][j]=='v' && count==1){
                count++;
                break;
            }if(ar[i][j]=='i' && count==2){
                count++;
                break;
            }if(ar[i][j]=='k' && count==3){
                count++;
                break;
            }if(ar[i][j]=='a' && count==4){
                count++;
                break;
            }

        }
        //cout<<endl;
    }
    //cout<<count<<endl;
    if(count==5){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
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