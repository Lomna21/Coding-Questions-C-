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
//------------------------------------------
//Sorting
bool sorta(const pair<ll,ll> &a,const pair<ll,ll> &b){return (a.second < b.second);}
bool sortd(const pair<ll,ll> &a,const pair<ll,ll> &b){return (a.second > b.second);}
//------------------------------------------
//Bits
string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
int binaryToDecimal(string n){string num = n;int dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}
//..........................................
//Check
bool isPrime(int n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(int x){if (x >= 0) {int sr = sqrt(x);return (sr * sr == x);}return false;}
//..........................................
typedef vector<ll> vll;
void solve(){
    ll n;
    cin>>n;
    // vector <int> v(n);
    // cin(v,n);

    ll v[n];
    // cin>>v;
    for(int i=0;i<n;i++){
        ll x;cin>>x;
        v[i]=x;
        // cout<<v[i]<<" ";
    }
    // nextline;return;
    unordered_map<ll,ll>mp;
    for(int i=0;i<n;i++){
        mp[v[i]]=1;
    }
    ll mex=0;
    for(int i=0;i<1e5+5;i++){
        if(mp[i]==0){
            mex=i;
            break;
        }
    }
    if(mex==0){
        cout<<"2\n";
        cout<<"1 1\n";
        cout<<"2 "<<n<<"\n";
        return;
    }
    mp.clear();
    ll left=0;
    vector<pair<ll,ll>>ans;
    for(int i=0;i<n;i++){
        if(v[i]<mex){
            mp[v[i]]=1;
        }
        if(mp.size()==mex){
            ans.push_back({left+1,i+1});
            left=i+1;
            mp.clear();
        }
    }
    ans[ans.size()-1].second=n;
    if(ans.size()<2){
        cout<<"-1\n";
    }
    else{
        cout<<ans.size()<<"\n";
        for(int i=0;i<ans.size();i++){
            cout<<ans[i].first<<" "<<ans[i].second<<"\n";
        }
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