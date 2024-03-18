#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,k,p=1,t;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++){
        t=i;
        for(j=p;j>0;j--){
            if(ar[t]>ar[j]){
                swap(ar[t],ar[j]);
                t--;
            }
        }
        p++;
        for(k=0;k<n;k++){
            cout<<ar[k]<<" ";
        }
        cout<<endl;
    }
}