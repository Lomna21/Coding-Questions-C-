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
   
signed main(){
    fast;
    

    int no=200001;
    int point=0;
    int sum_n=0;
    int ans[no];
    while(point!=no){
        
        int num=point, rem, sum;
        for(sum=0; num>0; num=num/10)
        {
            rem = num%10;
            sum = sum+rem;
        }
        sum_n+=sum;
        ans[point]=sum_n;
        //cout<<ans[point]<<" ";

        point++;
    }
    int T;cin>>T;
    while(T--){
        int n;cin>>n;
        cout<<ans[n]<<endl;
    }
    return 0;
}