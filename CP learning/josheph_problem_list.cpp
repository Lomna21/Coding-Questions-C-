#include<iostream>
#include<bits/stdc++.h>
#include<forward_list>
#include<list>
using namespace std;
int main(){
    list<int> l;
    int n;cin>>n;
    int k;cin>>k;
    for(int i=0;i<n;i++){
        l.push_back(i);
    }
    auto it=l.begin();
    while(l.size()>1){
        for(int j=0;j<k-1;j++){
        it++;
        if(it==l.end()){
            it=l.begin();
        }
        l.erase(it);
        if(it==l.end()){
            it=l.begin();
        } 
    }
    
    }
    cout<<l.front();
}