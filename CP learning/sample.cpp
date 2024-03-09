#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ar[n],p,count=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        for(int i=0;i<n;i++){
            if(ar[i]!=0){
                p=i;
                break;
            }
        }
        for(int j=p;j<n-1;j++){
            if(ar[j]>0){
                count=count+ar[j];
            }
            if(ar[j]==0){
                count++;
            }
        }
        cout<<count<<endl;
    }
}