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
    int n,m;
  cin>>n>>m;
  vector<int> arr(n,0);
//   read(a);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
  string s;
  cin>>s;
  int a=0;
  int b=n-1;
  int val=1;
  // reverse me ? 
  for(int i=0;i<n-1;i++){
   if(s[i]=='L'){
    a++;
    }
   else{
    b--;
    }
  }
  vector<int> ans;
  int cur=arr[b];
  // l,r
  for(int i=n-2;i>=-1;i--){
   val=cur%m;
   cur=cur%m;
   // if(cur%m!=0){cur=cur%m;}
   ans.push_back(val);
   if(s[i]=='L'){
    b--;
    cur=cur*arr[a];
   }
   else{
    b++;
    cur=cur*arr[b];
   }
  }
  
  reverse(ans.begin(),ans.end());
  for(auto it:ans){
   cout<<it<<" ";
  }
  cout<<endl;
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}