#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> v ,int a, int n){
    int count=0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i]*v[j]==a && i!=j){
                count++;
                count++;
            }
            if(v[i]*v[j]==a && i==j){
                count++;
            }
        }
    }
    cout<<count<<endl;
}
int main(){
    int n;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }

    int q;cin>>q;
    vector<int> Q;
    for(int i=0;i<q;i++){
        int a;cin>>a;

        solve(v,a,n);
    }



}