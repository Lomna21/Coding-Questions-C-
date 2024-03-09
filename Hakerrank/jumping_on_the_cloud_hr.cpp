#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,e=100,j=0;
    cin>>n>>k;
    int cloud[n];
    for(int i=0; i<n; i++){
        cin>>cloud[i];
    }
    while(true){
        j=j+k;
        if(cloud[j%n]==0){
            e=e-1;
        }
        if(cloud[j%n]==1){
            e=e-3;
        }  
        if(j%n==0){
            break;
        }    
    }
    cout<<e;
}
