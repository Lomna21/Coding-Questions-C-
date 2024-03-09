#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ar[n];
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        bool y=true;
        for(int j=0;j<n-1;j++){
            if(ar[j+1]%ar[0]!=0){
                y=false;
                break;
            }
            
        }
        if(y){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}