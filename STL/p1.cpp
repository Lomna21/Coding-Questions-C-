//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define int long long



int main(){
    int arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    sort(arr,arr+3);
    while(arr[0]!=arr[1] && arr[1]!=arr[2]){
        arr[2]=arr[2]-arr[0];
        sort(arr,arr+3);
    }
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}