#include<utility>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    char b[n];
    for(int j=0;j<n;j++){
        cin>>a[j]>>b[j];
    }
    pair <int ,char> p[n];
    for(int i=0;i<n;i++){
        p[i]={a[i],b[i]};
    }
    sort(p,p+n);
    for(int j=0;j<n;j++){
        cout<<p[j].second<<" ";
    }

}