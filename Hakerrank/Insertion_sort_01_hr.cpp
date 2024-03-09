#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    int temp=ar[n-1];
    for(i=1;i<n;i++){
        if(ar[n-i]<ar[n-1-i]){
            ar[n-i]=ar[n-i-1];
            for(j=0;j<n;j++){
                cout<<ar[j]<<" ";
            }
            cout<<endl;
            ar[n-1-i]=temp;
        }
    }
    for(i=0;i<n;i++){
        cout<<ar[i]<<" ";        
    }
}
