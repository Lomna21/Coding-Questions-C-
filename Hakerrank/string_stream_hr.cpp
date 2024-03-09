#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int initial=0;
    //int till=0;
    for(int i=0;i<s.size()+1;i++){
        if(s[i]==',' || s[i]=='\0'){
            for(int j=initial;j<i;j++){
                cout<<s[j];
                initial=i+1;
            }  
            cout<<endl;
        }
    }
}