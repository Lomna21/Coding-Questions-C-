#include <bits/stdc++.h>
using namespace std;
int ar[10000000];
int main(){
    int n,m;
    cin>>n>>m;
    int max_val=0;
    for(int i=1;i<=m;i++){
        int a,b,k;
        cin>>a>>b>>k;
        ar[a]=ar[a]+k;
        ar[b+1]=ar[b+1]-k;
    }
    for(int j=2;j<=n;j++){
        ar[j]=ar[j]+ar[j-1];
        max_val=max(max_val,ar[j]);
        //cout<<ar[j]<<" ";
    }
    cout<<max_val;

}