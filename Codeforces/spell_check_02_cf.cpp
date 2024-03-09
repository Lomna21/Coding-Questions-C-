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
        if(s.size()!=5){
            cout<<"NO"<<endl;
        }
        else{
        int count =0;
        int c1=0,c2=0,c3=0,c4=0,c5=0;
        for(int i=0;i<5;i++){
            if(s[i]=='T'){
                count++;
                c1++;
            }
            if(s[i]=='i'){
                count++;
                c2++;
            }
            if(s[i]=='m'){
                count++;
                c3++;
            }
            if(s[i]=='u'){
                count++;
                c4++;
            }
            if(s[i]=='r'){
                count++;
                c5++;
            }
        }
        if(count==5 && c1==1 && c2==1 && c3==1 && c4==1 && c5==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
    }
}