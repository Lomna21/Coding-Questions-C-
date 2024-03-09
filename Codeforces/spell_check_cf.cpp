#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string s2="Timur";
        sort(s.begin(),s.end());
        sort(s2.begin(),s.end());
        if(s==s2){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
        
    }
}