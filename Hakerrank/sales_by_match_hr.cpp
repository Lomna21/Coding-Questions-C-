#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int i,t=1,s=0;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    for(i=0;i<n;i++){
        if(ar[i]==ar[i+1]){
            t++;
            cout<<t<<" ";
            continue;
        }
        if(t>1){
            s=s+t/2;
        }
        if(ar[i]!=ar[i+1]){
            t=1;
        }
    }
    cout<<s;
}