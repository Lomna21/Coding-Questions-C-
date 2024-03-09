#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<pair<int,int>> s;
    int n;cin>>n;
    int ar[n];
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }
    s.push({0,INT_MAX});
    s.push({1,ar[1]});
    for(int i=2;i<=n;i++){
        if(ar[i]<ar[i-1]){
            s.push({i,ar[i]});
            pair<int,int> top = s.top();
            s.pop();
            
        }
        else{
            int j=i-1;
            while(ar[i]>ar[j]){
                s.pop();
                j--;
            }
            s.push({i,ar[i]});
        }
    }
}