#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> pair_sum (vector<int> &arr,int s){
    vector<vector<int>> ans;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==s){
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    vector<int> arr;
    int n;cin>>n;
    int s;cin>>s;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        arr.push_back(x);
    }
    vector<vector<int>> ans = pair_sum(arr,s);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}