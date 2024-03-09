#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,t=0;
    int ar[n];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(ar[i]==ar[j]){
                t++;
            }
        }
        cout<<t;
        t=0;
    }
}