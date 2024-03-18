//lets begin...
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
//Sorting vector pair according to second element
// --> time complexity  O(N*logN)
bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);} //ascending
bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);} //descending
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
void solve(){
    int n,k;
    cin>>n>>k;
    int a[n],b[n];
    map<int,int> m1,m2;
    vector<int> v1,v2,ans;
    vector<pair<int,int>> c1,c2;
    for (int i = 0; i < n; i++){
        cin>>a[i];
        m1[a[i]]++;
    }
    for (int i = 0; i < n; i++){
        cin>>b[i];
        m2[b[i]]++;
    }
    for(auto x: m1){
        c1.push_back({x.second,x.first});
    }
    for(auto x: m2){
        c2.push_back({x.second,x.first});
    }
    sort(all(c1));
    sort(all(c2));
    for (int i = c1.size()-1; i>=0; i--){
        if(c1[i].first==c2[i].first&&c1[i].first==2){
            v1.push_back(c1[i].second);
            v2.push_back(c2[i].second);
            v1.push_back(c1[i].second);
            v2.push_back(c2[i].second);
            m1.erase(c1[i].second);
            m2.erase(c2[i].second);
        }
    }
    for (int i = 0; i < n; i++){
        if(m2.find(a[i])!=m2.end()){
            v1.push_back(a[i]);
            v2.push_back(a[i]);
            m2.erase(a[i]);
        }
    }
    for (int i = 0; i < 2*k; i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
     for (int i = 0; i < 2*k; i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;
 
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