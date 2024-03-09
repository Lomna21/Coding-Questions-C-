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
    string s;
    cin>>s;
    int len=s.size();

    vector<int> prime;
    for(int i = 2; i <= 100; ++i) //loop to check for each number in the range
    {
        int ctr = 0; //to maintain factor count

        for(int j = 2; j <= sqrt(i); ++j) //checking for factors
        {
            if(i % j == 0)
            {
                ctr = 1; //increasing factor count when found
            }
        }
        if(ctr == 0) //checking and printing prime numbers
        {
            //cout << i << " ";
            prime.push_back(i);
        }
    }    
    vector<int> v(len,0);
    int j=0;
    //if()
    int size=len;
    while(size>2){
        for(int i=0;i<len;i++){
        if(size==2){
            break;
        }
        if(s[i]=='1' || s[i]=='4' || s[i]=='6' || s[i]=='8' || s[i]=='9'){
            size--;
            continue;
        }
        else{
            v[j]=s[i];
            j++;
        }
        }
    }
    vector<int> newp;
    for(int i=0;i<v.size()-1;i++){
        newp[i]=v[i]*10+v[i+1];
    }
    for(int i=0;i<newp.size();i++){
        int j=newp[i];
        std::vector<int>::iterator it;
        it = std::find(prime.begin(),prime.end(), j);
        if(it!=prime.end()){
            cout<<j<<endl;
            return;
        }

    }
    cout<<-1<<endl;
    return;
    
    //cout<<v[0]<<endl;
    

}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}