#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)


bool isPrime(int n)
{
     if (n == 1)
         return false;
     if (n == 3|n == 2)
         return true;
     if (n % 2 == 0 | n % 3 == 0)
         return false;
     for (int i = 5; i * i <= n; i = i + 6)
         if (n % i == 0 | n % (i + 2) == 0)
             return false;
     return true;
}
void solve(){
    int n;
    cin>>n;
    int arr[n];
    rep(i,n){
        cin>>arr[i];
    }
    if(n==1){
        cout<<"YES"<<endl;
        return;
    }
    vector<int>v;
    rep(i,n){
        if(arr[i]<10){
            v.push_back(arr[i]);
        }
        if(i==n-1){
            v.push_back(arr[i]);break;
        }
        if(arr[i]>=10 && arr[i]>arr[i+1]){
            int temp1 = arr[i]/10;
            int temp2 = arr[i]%10;
            v.push_back(temp1);
            v.push_back(temp2);

        }
        if(arr[i]>=10 && arr[i]<=arr[i+1]){
            
            v.push_back(arr[i]);

        }

    }
    int l = v.size();
    // for(auto it:v){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    for(int i=1;i<l;++i){
        if(v[i]<v[i-1]){
            cout<<"NO"<<endl;return;
        }
    }
    cout<<"YES"<<endl;
}
signed main(){
   fast;
   int t=1;
   cin>>t;

   while(t--){
    solve();
   }

}
