#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,i,j,count=0,pre_count=0;
    cin>>a>>b;
    int ar1[a];
    int ar2[b];
    for(i=0;i<a;i++){
        cin>>ar1[a];
    }
    for (i=0;i<b;i++){
        cin>>ar2[b];
    }
    sort(ar1,ar1+a);
    sort(ar2,ar2+b);   
    
    for(j=ar1[a-1];j<=ar2[0];j++){
        bool ans=true;
        for(i=0;i<a;i++){
            if(j%ar1[i]!=0){
                ans=false;
            }
        }
        for(int k=0;k<b;k++){
               if(ar2[k]%j!=0){
                ans=false;
            }
         }
        if(ans){
            count++;
        }
    }
    cout<<count;
}
       
