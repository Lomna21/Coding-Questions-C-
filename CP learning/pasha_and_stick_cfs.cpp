#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n,i,p,q=0,s;
    cin>>n;
    for(i=1;i<n/2;i++){
        s=n-2*i;
        p=s/2;
        if((2*p+2*i==n)&&(p!=i)){
            q++;
        }
    }    
    cout<<q/2;
}