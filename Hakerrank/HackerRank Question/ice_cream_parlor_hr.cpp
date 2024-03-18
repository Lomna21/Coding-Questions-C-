#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,m,n,i,j,x,y;
    int cost[n];
    cin>>t;
    while(t--){
        cin>>m>>n;
        for(i=0;i<n;i++){
            cin>>cost[i];
        }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(cost[i]+cost[j]==m){
                x=i+1;
                y=j+1;
                cout<<x<<" "<<y<<endl;
                break;
            }
        }
    }
    }
}

