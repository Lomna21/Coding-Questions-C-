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
// Mathematical functions
int moduloMultiplication(int a,int b,int mod){int res = 0;a %= mod;while (b){if (b & 1)res = (res + a) % mod;b >>= 1;}return res;}
int powermod(int x, int y, int p){int res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
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
    // int n;cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int pre_sum[n + 1];
    // pre_sum[0] = 0; // Initializing first element to 0
    // for (int i = 1; i <= n; i++) {
    //     pre_sum[i] = pre_sum[i - 1] + arr[i - 1];
    // }
    // map<int,int> mp;
    // for(int i=0;i<n;i++){
    //     mp[arr[i]]++;
    // }
    // int ans=0;
    // // if(arr[0]==0){
    // //     ans++;
    // // }
    // sort(arr,arr+n);
    // for(int i=1;i<=n;i++){
    //     if(pre_sum[i]%2==0){
    //         int no = pre_sum[i]/2;
    //         if(mp[no]){
    //             ans++;
    //         }
    //     }
    // }
    // cout<<ans<<endl;
    int n;cin>>n;
	vector<int> a(n);
	for(auto &x:a)	cin>>x;
	map<int,int> mp;
	int sum=0;
	int ans=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
		mp[a[i]]++;
		int sm=sum/2;
		if(sum%2==1)	continue;
		if(mp[sm])	ans++;
	}
	cout<<ans<<"\n";

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