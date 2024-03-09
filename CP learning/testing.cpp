#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=3;
    string x="anmol";
    vector<string> v(n,x);
    for(auto i =v.begin(); i < v.end();i++){
        cout<<(*i)<<" ";
    }
}