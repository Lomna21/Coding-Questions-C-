#include<bits/stdc++.h>
using namespace std;
void replace(int number,list<int> &l, list<int> &l2){
    auto it = find(l.begin(), l.end(), number); 
    if(it==l.end()){
        return;
    }
    l.erase(it);
    l.insert(it,l2.begin(),l2.end()); 
    for(int i : l){
        cout<<i<<" ";
    }    
}

int main(){
    list<int> l;
    int n;cin>>n;
    auto it = l.begin();
    for(int i=0;i<n;i++){
        int t;cin>>t;
        l.insert(it,t);
    }
    int number=20;
    int k;cin>>k;
    list<int> l2;
    for(int i=0;i<k;i++){
        int replace_to;
        l2.push_back(replace_to);        
    }
    replace(number,l,l2);
}