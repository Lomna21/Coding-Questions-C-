#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s1;cin>>s1;
        string s2;cin>>s2;   
        int count=0;
        //cout<<s1<<" "<<s2<<endl<<s2[0]<<endl;
        for(int j=0;j<n;j++){
            if((s2[j]=='1') && (s1[j]=='0')){
                count++;
            }
            else if(s2[j]=='1' && (s1[j-1]=='1')){
                count++;
                s1[j-1]='0';
            }
            else if(s2[j]=='1' && (s1[j+1]=='1')){
                count++;
                s1[j+1]='0';
            }
        }
        cout<<count<<endl;
    }
}
