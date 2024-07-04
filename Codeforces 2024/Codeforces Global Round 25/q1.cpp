
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define float double
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define nextline cout<<endl
#define all(v) v.begin(),v.end()
#define min3(a,b,c) min(c,min(a,b))
#define min4(a,b,c,d) min(d,min(c,min(a,b)))
#define FOR_0(i,n) for(int i=0;i<n;i++)
#define FOR_N(n,i) for(int i=n-1;i>=0;i--)
#define FOR_AB(a,b) for(int i=a;i<b;i++)
#define pi (3.141592653589)
#define N_5 100005
#define N_9 1000000009
//------------------------------------------
// Mathematical functions
int moduloMultiplication(int a,int b,int mod){int res = 0;a %= mod;while (b){if (b & 1)res = (res + a) % mod;b >>= 1;}return res;}
int powermod(int x, int y, int p){int res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
//------------------------------------------
//Sorting vector pair according to second element
// --> time complexity  O(N*logN)
bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);} //ascending
bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);} //descending
//..........................................
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            count++;
        }
    }
    if(count%2!=0){
        cout<<"NO"<<endl;
        return;
    }
    // if(s=="00"){
    //     cout<<"YES"<<endl;
    //     return;
    // }
    if(count==2){
        for(int i=0;i<n-1;i++){
            if(s[i]=='1' && s[i+1]=='1'){
                cout<<"NO"<<endl;
                return;
            }
        }   
    }
    cout<<"YES"<<endl;
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    //cout<<"CASE: "<<t<<endl;
    solve();
    }
    return 0;
}