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
    char t;cin>>t;
    vector<string> v;
    string arr[2*n];
    set<string> s;
    for(int i=0;i<2*n;i++){
        string s;
        cin>>s;
        // cin>>v[i];
        arr[i]=s;
        //cout<<arr[i]<<" ";
    }
    //cout<<endl;
    set<string> st,sc,sd,sh,ss;
    int sst=0,ssc=0,ssd=0,ssh=0,sss=0;
    int count_t=0;
    int count_c=0,count_d=0,count_h=0,count_s=0;
    
    for(int i=0;i<2*n;i++){
        if(arr[i][1]==t){
            count_t++;
            st.insert(arr[i]);
        }
        else if(arr[i][1]=='C'){
            count_c++;
            sc.insert(arr[i]);
        }
        else if(arr[i][1]=='D'){
            count_d++;
            sd.insert(arr[i]);
        }
        else if(arr[i][1]=='H'){
            count_h++;
            sh.insert(arr[i]);
        }
        else{
            count_s++;
            ss.insert(arr[i]);
        }
    }
    int sst=st.size(),ssc=sc.size(),ssd=sd.size(),ssh=sh.size(),sss=ss.size();
    
    //not possible cases
    if( (ssc % 2 !=0) && (ssd % 2 !=0) && (ssh % 2 !=0) && (sss % 2 !=0) ){
        cout<<"NOT POSSIBLE"<<endl;
    }


}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}