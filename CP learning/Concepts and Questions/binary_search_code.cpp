#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>n;
    }
    sort(ar,ar+n);
    int x;cin>>x;//x is the number which we want to find
    int start=ar[0];
    int end=ar[n-1];
    int mid=start+end/2;
    while(end-start>1){
        if(x>=mid){
            start=ar[mid];
        }
        else{
            end=ar[mid-1];
        }
    }
    
}