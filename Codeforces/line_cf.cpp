#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        long long length=0,ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='R'){
                s[i]=='L';
            }
            if(s[i]=='L'){
                s[i]=='R';
            }
            for(int j=0;j<n;j++){
            if(s[j]=='L'){
                length+=j;
            }
            if(s[j]=='R'){
                length+=n-j;
            }
            }
            ans=max(ans,length);
            cout<<ans<<" ";
            length=0;
        }
        cout<<endl;
    }
}