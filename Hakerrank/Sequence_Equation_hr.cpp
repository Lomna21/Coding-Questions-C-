#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p,i,j,k;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(ar[j]==i+1){
                p=j+1;
            for(k=0;k<n;k++){
                if(ar[k]==p){
                    cout<<k+1<<endl;
                }
            }
            }
        }
    }
    
}