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
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int q;cin>>q;
    vector<int> pre_sum (n);    
    //cout<<pre_sum[0]<<" ";
    pre_sum[0]=v[0];
    for(int i=1;i<n;i++){
        //pre_sum[i]=pre_sum[i-1] + v[i-1];
        pre_sum[i]=pre_sum[i-1]+v[i];
        //cout<<pre_sum[i]<<" ";
    }
    while(q--){
        int l,u;
        cin>>l>>u;
        l--;
        int x=u;
        if(l>0)x+=pre_sum[l-1];
        int lb=(lower_bound(pre_sum.begin(),pre_sum.end(),x)-pre_sum.begin());
        if(lb<=l){
            cout<<l+1<<" ";
        }
        else if(lb>=n){
            cout<<n<<" ";
        }
        else{
            if(abs(pre_sum[lb]-x)<=abs(pre_sum[lb-1]-x)){
                cout<<lb+1<<" ";
            }
            else{
                cout<<lb<<" ";
            }
        }
    }
    cout<<"\n";
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