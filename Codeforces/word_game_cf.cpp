#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        map<string,int> mp;
        string s[4][1001];
        int n;cin>>n;
        for(int i=1;i<=3;i++){
            for(int j=1;j<=n;j++){
                cin>>s[i][j];
                mp[s[i][j]]++;
            }
        }
        for(int i=1;i<=3;i++){
            int count=0;
            for(int j=1;j<=n;j++){
                if(mp[s[i][j]]==1){
                    count+=3;
                }
                else if(mp[s[i][j]]==2){
                    count+=1;
                }
            }
            cout<<count<<" ";
        }
        cout<<endl;
        
    }
}