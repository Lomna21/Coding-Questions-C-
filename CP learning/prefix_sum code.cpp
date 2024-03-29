//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define nextline cout<<endl

void prefix_sum (){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> pre_sum(n+1,0);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        pre_sum[i+1]=sum;
        // cout<<pre_sum[i+1]<<" ";
    }// nextline;
    // cout<<pre_sum[0]<<" "<<endl;
}

signed main(){
    
    return 0;
}