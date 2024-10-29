#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(vector<int> in_binary){
    reverse(in_binary.begin(),in_binary.end());
    int ans = 0;
    for(int i=0;i<in_binary.size();i++){
        if(in_binary[i] == 1){
            ans+=pow(2,i);
        }
    }
    return ans;
}

int main(){
    int n;cin>>n;
    vector<int> in_binary;
    while(n>0){
        in_binary.push_back(n&1);
        n=n>>1;
    }
    reverse(in_binary.begin(),in_binary.end());
    // for(auto it : in_binary){
    //     cout<<it<<" ";
    // }
    for(int i=0; i < in_binary.size();i++){
        if(in_binary[i] == 1){
            in_binary[i] = 0;
        }            
        else{
            in_binary[i] = 1;
        }
    }
    // for(auto it : in_binary){
    //     cout<<it<<" ";
    // }
    int ans = binaryToDecimal(in_binary);
    cout<<ans;
    return 0;
}