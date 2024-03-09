#include <cmath>
#include<bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.push_back(x);
    }
    int q;cin>>q;
    int size=v.size();
    for(int i=0;i<q;i++){
        int input;cin>>input;
        auto it = lower_bound(v.begin(),v.end(),input);
        if(it!=v.end()){
            int index = it - v.begin();
            if((*it)==input){
                cout<<"Yes "<<index+1<<endl;
            }
            else{
                cout<<"No "<<index+1<<endl;
            }
        }
    }
    return 0;
}
