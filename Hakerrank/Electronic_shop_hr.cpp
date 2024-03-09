//solved
#include<bits/stdc++.h>
using namespace std;
int main(){
    int b,n,m,i,j,z=0,p=0;
    cin>>b>>n>>m;
    int ar1[n];
    int ar2[m];
    for(i=0;i<n;i++){
        cin>>ar1[i];
    }
    for(i=0;i<m;i++){
        cin>>ar2[i];
    }
    sort(ar1,ar1+n);
    sort(ar2,ar2+m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(b>=ar1[i]+ar2[j]){
                z=ar1[i]+ar2[j];
            }  
            if(b<=ar1[i]+ar2[j]){
                break;
            }          
        }
        if(z>p){
            p=z;
        }
    }
        if(z>0){
            cout<<p;
        }        
        else {
            cout<<"-1";
        }
    
}
