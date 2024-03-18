#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;cin>>n>>q;
    vector<vector<int>> v(n);
        //int arr[n][100000];
            for(int i=0;i<n;i++){
                int k;cin>>k;
                v[i].resize(k);
                for(int j=0;j<k;j++){
                    cin>>v[i][j];            
                }
            } 
            while(q--){
                int a,b;cin>>a>>b;
                cout<<v[a][b]<<endl;
            }
    
    
}
