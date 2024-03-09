#include<bits/stdc++.h>
using namespace std;
int position[100000];
int main(){
    int n,t;cin>>n>>t;
    int arr[n-1];
    for(int i=1;i<=n-1;i++){
        cin>>arr[i];
    }
    int cell=1;
    while(cell<n){
        cell=cell+arr[cell];
        //cout<<cell<<" "<<endl;
        if(cell==t ){
            cout<<"YES"<<endl;
            break;
        }
    }
    if(cell!=t){
        cout<<"NO"<<endl;
    }
}