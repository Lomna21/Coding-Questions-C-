#include<bits/stdc++.h>
using namespace std;
int main(){

    int m,n;
    cin>>m>>n;

    int prime[n]={0};
    for(int i=2;i<=n;i++){
        if(!prime[i]){
            for(int j=2*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    bool flag=false;
    for(int i=m;i<=n;i++){
        if(!prime[i]){
            cout<<i<<endl;
            flag=true;
        }
    }
    if(!flag)cout<<"Absent"<<endl;

    return 0;
}