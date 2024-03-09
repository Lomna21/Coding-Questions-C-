#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;cin>>N;
    int x;cin>>x;
    int temp=x;
    int Y;cin>>Y;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    int ans=INT_MAX;;
    
    for(int i=0;i<N-Y;i++){
        temp=x;
        int index=i;
        int result=0;
        int count=0;
        while(temp--){
            
            result+=A[index];
           
            index+=Y;
            count++;
        }
        if(count<x){
            result=INT_MAX;
        }
        ans=min(ans,result);


    }
    cout<<ans;
    

}