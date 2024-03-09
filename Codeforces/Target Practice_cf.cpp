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
#define next cout<<endl
#define all(v) v.begin(),v.end()
#define min3(a,b,c) min(c,min(a,b))
#define min4(a,b,c,d) min(d,min(c,min(a,b)))
#define FOR_0(i,n) for(int i=0;i<n;i++)
#define FOR_N(n,i) for(int i=n-1;i>=0;i--)
#define FOR_AB(a,b) for(int i=a;i<b;i++)
#define N_5 100005
#define N_9 1000000009
void solve(){
    int n=10;
    char ar[n][n];
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            cin>>ar[i][j];
        }
    }
    int ans=0;
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(ar[i][j]=='.'){
                continue;
            }
            else{
                if((i==1 || i==10) || (j==1 || j==10)){
                    ans+=1;
                    //cout<<1<<" ";
                }
                else if(i==2 || j==2 || i==9 || j==9){
                    ans+=2;
                    //cout<<2<<" ";
                }
                else if(i==3 || j==3 || i==8 || j==8){
                    ans+=3;
                    //cout<<3<<" ";
                }
                else if(i==4 || j==4 || i==7 || j==7){
                    ans+=4;
                    //cout<<4<<" ";
                }
                else if(i==5 || j==5 || i==6 || j==6){
                    ans+=5;
                    
                }
            }
        }
        ////cout<<endl;
    }
    cout<<ans<<endl;
    //cout<<endl<<endl;
    
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}