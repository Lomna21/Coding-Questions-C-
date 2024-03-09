#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,i,j,sum,t=0;
    cin>>n>>k;
    int ar[n];
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            sum=ar[i]+ar[j];
            if(sum%k==0){  
                t++;
            }
            sum=0;
        }        
    }
    cout<<t;
}