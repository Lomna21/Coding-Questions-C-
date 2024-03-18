#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    stack<int> s;
    s.push(ar[0]);
    cout<<"-1"<<" ";
    for(int i=1;i<n;i++){
        if(ar[i]>s.top()){
            //s.pop();
            s.push(ar[i]);
            cout<<"-1"<<" ";
        }
        else{
            cout<<s.top()<<" ";
        }
    }
}