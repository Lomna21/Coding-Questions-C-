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
    vector<string> s;
    string s1;cin>>s1;
    string s2;cin>>s2;
    string s3;cin>>s3;
    
    int a=0,b=0,c=0;
    for(int i=0;i<3;i++){
        
        if(s1[i]=='A'){
            a=1;
        }
        if(s1[i]=='B'){
            b=2;
        }
        if(s1[i]=='C'){
            c=3;
        }
    }
    if(a+b+c==6){
        
    }
    else if(a+b+c==3){
        cout<<"C"<<endl;
        return;
    }
    else if(a+b+c==4){
        cout<<"B"<<endl;
        return;
    }
    else{
        cout<<"A"<<endl;
        return;
    }
    int a=0,b=0,c=0;
    for(int i=0;i<3;i++){
        
        if(s2[i]=='A'){
            a=1;
        }
        if(s2[i]=='B'){
            b=2;
        }
        if(s2[i]=='C'){
            c=3;
        }
    }
    if(a+b+c==6){
        
    }
    else if(a+b+c==3){
        cout<<"C"<<endl;
        return;
    }
    else if(a+b+c==4){
        cout<<"B"<<endl;
        return;
    }
    else{
        cout<<"A"<<endl;
        return;
    }
    int a=0,b=0,c=0;
    for(int i=0;i<3;i++){
        
        if(s3[i]=='A'){
            a=1;
        }
        if(s3[i]=='B'){
            b=2;
        }
        if(s3[i]=='C'){
            c=3;
        }
    }
    if(a+b+c==6){
        
    }
    else if(a+b+c==3){
        cout<<"C"<<endl;
        return;
    }
    else if(a+b+c==4){
        cout<<"B"<<endl;
        return;
    }
    else{
        cout<<"A"<<endl;
        return;
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