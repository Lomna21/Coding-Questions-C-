//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define NO cout<<NO<<endl
#define YES cout<<YES<<endl
#define all(v) v.begin(),v.end()
#define N_5 100005
#define N_8 100000008
void solve(){
    /*
    int n,x,t;
    cin>>n>>x>>t;
    int ar1[n];
    ar1[0]=0;
    int ar2[n];
    ar2[0]=t;
    for(int i=1;i<n;i++){
        ar1[i]=ar1[i-1]+x;
        ar2[i]=ar2[i-1]+x;
    }
    int ans=0;
    int count =0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((ar1[j] < ar2[i])){
                count++;
            }
            else{
                break;
            }
        }
    }
    cout<<count<<endl;
    */
    int n,x,t;
    cin>>n>>x>>t;
    int ans=0;
    int temp=n;
    int dis_sat= (t/x);
    int val;
    /*while(n > t/x){
        n--;
        ans+=dis_sat;
    };*/
    if(n > t/x && dis_sat!=0){
        val=n/dis_sat;
        ans=val*x;
    }
    n=dis_sat;
    /*while(n>0){
        ans+=n-1;
        n--;
    }*/
    ans+=(n-1)*n/2;
    //int final_ans;
    if(ans<temp){
        ans=temp;
    }
    cout<<ans<<endl;
    

}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}