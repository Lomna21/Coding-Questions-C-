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
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int arr[26][26];
    char new_arr[n];
    int count=0;
    for(int i=0;i<26;i++){
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                new_arr[j]=char('a'+count);
                count++;
            }
        }
        count=0;
    }
    for(int i=0;i<n;i++){
        cout<<new_arr[i];
    }
    cout<<endl;
    
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    //cout<<char('a'+3);
    }
    return 0;
}