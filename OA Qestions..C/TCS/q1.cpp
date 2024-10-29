// Chocolate question
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int ans_arr[n];
    int j = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            ans_arr[j] = arr[i];  
            j++;
        }
    }
    for(j; j<n;j++){
        ans_arr[j] = 0;
    }
    for(int i=0;i<n;i++){
        cout<<ans_arr[i]<<" ";
    }
    return 0;
}