#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m,s,i,j,chair,r,result;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>m>>s;
          r=m%n;
          if(r==0){
              result=s+r-1;
            }
          else{
              result=s+r-1;
          }
          if(result==0){
            cout<<n;
          } 
          else{
          if(result<=n){
              cout<<result<<endl;
          }
          else{
              cout<<result-n<<endl;
          }
          }           
    }
}

