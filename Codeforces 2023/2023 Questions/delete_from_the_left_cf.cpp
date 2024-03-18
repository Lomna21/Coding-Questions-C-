#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;cin>>s1>>s2;
    int ans=0;
    int len1=s1.size();
    int len2=s2.size();
    int len=max(len1,len2);
    for(int i=0;i<len;i++){
        if(s1[len1-1-i]!=s2[len2-1-i]){         
            ans=len1-i+len2-i;
            break;
        }
    }
    cout<<ans;
}