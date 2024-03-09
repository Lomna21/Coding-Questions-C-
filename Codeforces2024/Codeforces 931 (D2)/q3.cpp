//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
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
//..........................................
//Bits
string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
int binaryToDecimal(string n){string num = n;int dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}
//..........................................
//Check
bool isPrime(int n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(int x){if (x >= 0) {int sr = sqrt(x);return (sr * sr == x);}return false;}
//..........................................

ll query(ll x, ll y){
    cout<<"? "<<x<<" "<<y<<endl;
    ll res;
    cin>>res;
    return res;      
}
void solve(){
    ll n,m;
    cin>>n>>m;
    ll res=query(1,1);
    ll res2=0,res3=0;
    ll x2=0,y2=0,x3=0,y3=0;
    if(res<=n-1){
        x2=res+1;
        y2=1;
        res2=query(res+1,1);
    }
    else{
        x2=n;
        y2=res-n+2;
        res2=query(n,res-n+2);
    }
    if(res<=m-1){
        x3=1;
        y3=res+1;
        res3=query(1,res+1);
    }
    else{
        x3=res-m+2;
        y3=m;
        res3=query(res-m+2,m);
    }
    x3+=(res3/2);
    y3-=(res3/2);
    x2-=(res2/2);
    y2+=(res2/2);
    ll res4=query(x3,y3);
    if(res4==0){
        cout<<"! "<<x3<<" "<<y3<<endl;
    }
    else{
        cout<<"! "<<x2<<" "<<y2<<endl;
    }
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