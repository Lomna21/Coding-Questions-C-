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
    /*
    int n;
    cin>>n;
    string s[n];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>s[i][j];
        }
    }
    if(s[1][0]=='1' && s[0][1]=='1'){
        s[n][n-1]=='0';
        s[n-1][n]=='0';
    }
    if(s[1][0]=='0' && s[0][1]=='0'){
        s[n][n-1]=='1';
        s[n-1][n]=='1';
    }
    if(s[1][0]=='1' && s[0][1]=='0' && s[n][n-1]=='1' && s[n-1][n]=='0'){
        //s[n][n-1]=='1';
        s[1][0]=='0';
        s[n-1][n]=='1';
    }
    if(s[1][0]=='1' && s[0][1]=='0' && s[n][n-1]=='0' && s[n-1][n]=='1'){
        s[n][n-1]=='1';
        s[1][0]=='0';
        //s[n-1][n]=='0';
    }
    if(s[1][0]=='1' && s[0][1]=='0' && s[n][n-1]=='0' && s[n-1][n]=='0'){
        //s[n][n-1]=='1';
        s[0][1]=='1';
        //s[n-1][n]=='0';
    }
    if(s[1][0]=='1' && s[0][1]=='0' && s[n][n-1]=='1' && s[n-1][n]=='1'){
        //s[n][n-1]=='1';
        s[1][0]=='0';
        //s[n-1][n]=='0';
    }
    //cout<<endl;



    if(s[1][0]=='0' && s[0][1]=='1' && s[n][n-1]=='1' && s[n-1][n]=='0'){
        s[n][n-1]=='0';
        s[1][0]=='1';
        //s[n-1][n]=='0';
    }
    if(s[1][0]=='0' && s[0][1]=='1' && s[n][n-1]=='0' && s[n-1][n]=='1'){
        //s[n][n-1]=='1';
        s[1][0]=='1';
        s[n-1][n]=='0';
    }
    if(s[1][0]=='0' && s[0][1]=='1' && s[n][n-1]=='0' && s[n-1][n]=='0'){
        //s[n][n-1]=='1';
        s[1][0]=='1';
        //s[n-1][n]=='0';
    }
    if(s[1][0]=='0' && s[0][1]=='1' && s[n][n-1]=='1' && s[n-1][n]=='1'){
        //s[n][n-1]=='1';
        s[0][1]=='1';
        //s[n-1][n]=='0';
    }*/
    int n;
        cin>>n;
 
        string s[n];
 
        for (int i=0; i<n; i++)
        {   
                cin>>s[i];   
        }
        
        char c=s[0][1];
        int x=1;
 
        if(s[1][0]== s[0][1])
        {
            if (s[n - 1][n - 2] == s[n - 2][n - 1] && s[n - 1][n - 2] != s[0][1])
            {
                cout<<0<<"\n";
            }
            else if (s[n - 1][n - 2] == s[n - 2][n - 1] && s[n - 1][n - 2] == s[0][1])
            {
                cout<<2<<"\n";
                cout<<n<<" "<<n-1<<"\n";
                cout << n-1 << " " << n << "\n";
            }
            
            else if (s[n - 1][n - 2] != s[n - 2][n - 1])
            {
                if (s[n - 1][n - 2] == s[0][1] )
                {
                    cout << 1 << "\n";
                    cout << n << " " << n - 1 << "\n";
                }
                else
                {
                    cout << 1 << "\n";
                    cout << n-1 << " " << n << "\n";
                }
                
            }
        }
 
        else
        {
            if (s[n - 1][n - 2] == s[n - 2][n - 1])
            {
                if (s[n - 1][n - 2] == s[0][1])
                {
                    cout << 1 << "\n";
                    cout << 1 << " " << 2 << "\n";
                }
 
                else if (s[n - 1][n - 2] == s[1][0])
                {
                    cout << 1 << "\n";
                    cout << 2 << " " << 1 << "\n";
                }
            }
 
            else
            {
                if (s[n - 1][n - 2] == s[0][1])
                {
                    cout << 2 << "\n";
                    cout << 1 << " " << 2 << "\n";
                    cout << n-1 << " " << n << "\n";
                }
                else if (s[n - 1][n - 2] == s[1][0])
                {
                    cout << 2 << "\n";
                    cout << 2 << " " << 1 << "\n";
                    cout << n-1 << " " << n << "\n";
                }
                
            }
           
            
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