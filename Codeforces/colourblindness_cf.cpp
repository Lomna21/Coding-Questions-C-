#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        bool ans=true;
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i]){
                continue;
            }
            else if(s1[i]=='G'&& s2[i]=='B'){
                continue;
            }
            else if( s1[i]=='B' && s2[i]=='G'){
                continue;
            }
            else{
                ans=false;
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}