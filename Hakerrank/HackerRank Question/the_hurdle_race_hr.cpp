#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    int height[n];
    cin>>n>>k;
    for (int i=0;i<n;i++){
        cin>>height[i];
    }
    sort(height,height+n);
    if(height[n-1]>=k){
        int max=height[n-1]-k;  
            cout<<max;
        
    }
    else{
        cout<<0;
    } 
}