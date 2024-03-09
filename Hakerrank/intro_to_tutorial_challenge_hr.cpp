#include<bits/stdc++.h>
using namespace std;
int main(){
    int v,n,ar[n],count=0;
    cin>>v>>n;
    for ( int i=0;i<n;i++){
        cin>>ar[i];
    }
    for (int i=0;i<n;i++){
        if(ar[i]==v){
            cout<<count;
            break;
        } 
        count++;               
    }
}