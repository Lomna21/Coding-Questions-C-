#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=1;i<n;i++){
        ar[i]=ar[i]+ar[i-1];
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    int q;cin>>q;
    while(q--){
        int a,b;cin>>a>>b;
        cout<<ar[b]-ar[a-1]<<endl;

    }
}