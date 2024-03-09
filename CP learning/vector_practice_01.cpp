#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int n){
        vector<pair<int ,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({arr[i],i});
        }
        sort(v.begin(),v.end());
        for(auto x:v){
            cout<<x.first<<" "<<x.second<<endl;
        }

    }
int main(){
    int t;cin>>t;
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while (t--);{
        int s = solve(arr,n);
    }
    
}