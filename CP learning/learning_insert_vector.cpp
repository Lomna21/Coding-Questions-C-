#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={10,20,30};
    v.insert(v.begin(),20);
    v.insert(v.begin()+2,50);
    v.insert(v.end(),3,60);
    vector<int> v2;
    v2.insert(v2.begin(),v.begin()+2,v.begin()+5);
    for(int x : v){
        cout<<x<<" "<<endl;
    }
    for(const int &x : v2){
        cout<<x<<" ";
    }
}