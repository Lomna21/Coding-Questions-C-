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
int minElementsToRemove(std::vector<int>& a) {
    int n = a.size();
    int minRemovals = n - 1; // Maximum possible removals

    for (int i = 1; i < n - 1; ++i) {
        if (a[i - 1] == a[i + 1]) {
            // If a[i-1] == a[i+1], we can remove a[i]
            minRemovals--;
        }
    }

    // Check if the first and last elements can be removed
    if (a[0] == a[1]) {
        minRemovals--;
    }
    if (a[n - 1] == a[n - 2]) {
        minRemovals--;
    }

    if (minRemovals == n - 1) {
        return -1; // It's not possible to make the array not beautiful
    }

    return minRemovals;
}

void solve(){
     int n;cin>>n; 
        vector<int> v; 
           map<int,int> ma; 
        for(int i=0;i<n;i++){ 
            int x;cin>>x; 
            v.push_back(x); 
            ma[x]++; 
        } 
        if(ma.size()==1){ 
            cout<<-1<<endl; 
            return; 
        } 
        int x=v[0]; 
        int ix=0; 
        int ans=n; 
 
        for(int i=0;i<n;i++){ 
            if(v[i]==v[0]){ 
                ix++; 
            } 
            else{ 
                
                ans=min(ans,ix); 
                ix=0; 
            } 
 
        } 
        ans=min(ans,ix); 
 
        cout<<ans<<endl; 
 
     


    // int x = arr[0];
    // int count=1;
    // for(int i=1;i<n;i++){
    //     if(arr[i]==x){
    //         count++;

    //     }
    //     else{
    //         break;
    //     }
    // }
    // int count2=1;
    // for(int i=n-1;i>=0;i--){
    //     if(arr[i]==x){
    //         count2++;
    //     }
    //     else{
    //         break;
    //     }
    // }
    // if(count == n){
    //     cout<<-1<<endl;
    // }
    // else{
    //     cout<<min(count,count2)<<endl;
    // }
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