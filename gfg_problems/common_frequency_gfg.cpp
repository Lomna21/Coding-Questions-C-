#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
    int n,m;

    cin>>n;
    int ar[n];
    
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    cin>>m;
    int ar2[m];

    for(int i=0;i<m;i++){
        cin>>ar2[i];
    }
    map<int,int> m1;
    map<int,int> m2;

    for(int i=0;i<n;i++){
        m1[ar[i]]++;
    }
    for(int i=0;i<m;i++){
        m2[ar2[i]]++;
    }
    /*for(auto it=m1.begin();it!=m1.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }*/
    vector<int> v;
    for(int i=0;i<n;i++){
        if(m1[ar[i]]!=0 && m2[ar[i]]!=0){
            //cout<<ar[i]<<" ";
            v.push_back(ar[i]);
            m1[ar[i]]--;
            m2[ar[i]]--;
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}