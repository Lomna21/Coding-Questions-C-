#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int k;cin>>k;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int max_val=0;
        sort(v.begin(),v.begin()+k);
        for(int i=0;i<k;i++){
            max_val=max(max_val,v[i]);          
        }
        cout<<max_val<<endl;
    }
    

    
}