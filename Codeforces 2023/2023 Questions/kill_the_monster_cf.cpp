//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define NO cout<<NO<<endl
#define YES cout<<YES<<endl
#define all(v) v.begin(),v.end()
#define N_5 100005
#define N_9 1000000009
void solve(){
    int hc,dc;
    int hm,dm;
    int k,w,a;
    cin>>hc>>dc>>hm>>dm>>k>>w>>a;
    
    /*if(((k*a)+hc)/dm >= hm/dc || ){
        cout<<"YES"<<endl;
        return;
    }
    else if((hc/dm >= hm/((w*k)+dc))){
        cout<<"YES"<<endl;
        return;
    }*/
    int count1,count2;
        for(int i=0;i<=k;i++){
            hc=hc+(i*a);
            dc=dc+(k-i)*w;
            while(hc>0 && hm>0){
                hm=hm-dc;
                if(hm>0){
                    count1++;
                }
                hc=hc-dm;
                if(hc>0){
                    count2++;
                }
            }
            if(count1=0){
                return
            }
            if(count1<=count2){
                cout<<"yes"<<endl;
                return;
            }
            else {
                count1=0;
                count2=0;
            }
        }
        cout<<"NO"<<endl;

}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}