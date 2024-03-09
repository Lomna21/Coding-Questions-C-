#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=1,max_count=0;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);

    for(int j=0;j<n;j++){
        
        if(ar[j]==ar[j+1]){
            count++;            
        }
        if(ar[j]!=ar[j+1]){
            if(count>max_count){
                max_count=count;
            }
            count=1;
        }       
    }
    cout<<n-max_count;
    
}
