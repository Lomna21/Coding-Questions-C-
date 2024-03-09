#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int count=1;
        int matrix[n][n];
        if(n==1){
            cout<<"1"<<endl;
        }
        else if(n==2){
            cout<<"-1"<<endl;
        }
        
        else{
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    matrix[i][i]=count; 
                }
                count++;
            }
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(i!=j){
                        matrix[i][j]=count;
                        count++;
                        matrix[j][i]=count;
                        count++;
                    }
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<matrix[i][j]<<" ";
                }
                cout<<"\n";
            }
        }

    }
}