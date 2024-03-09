#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,q,i,j,temp;
    cin>>n>>k>>q;
    int a[n];
    int queries[q];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<q;i++){
        cin>>queries[i];
    }
    k=k%n;
    for (i=0;i<n;i++){
       int b = (i-k+n+1)%n;
       queries[b]=a[i];

       
    }
    for (i=0;i<q;i++){
        cout<<queries[i]<<endl;
    }
}

