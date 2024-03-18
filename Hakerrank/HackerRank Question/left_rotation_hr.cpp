#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,d,i,j,temp;
    cin>>n>>d;
    int ar[n];
    for (i=0;i<n;i++){
        cin>>ar[i];
    }
      for(j=1;j<=d;j++){
        for(i=0;i<n-1;i++){
            temp=ar[i];
            ar[i]=ar[i+1];
            ar[i+1]=temp;
        }
      }
    for(i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
}