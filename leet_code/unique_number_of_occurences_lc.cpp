#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        arr.push_back(x);
    }
    vector<int> v;
        for(int i=0;i<arr.size();i++){
            v[arr[i]]++;
        } 
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++){
            if(v[i]==v[i+1]){
                cout<<"0"<<endl;
                return 0;
            }
        }
        cout<<"1"<<endl;
        return 0;
}