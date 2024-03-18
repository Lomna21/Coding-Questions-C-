#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int ar[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        for(int i=0;i<n;i++){
            sum=sum+ar[i];
        }
        if(sum<=0){
            cout<<1<<endl;
        }
        else if(sum/n==1 && sum%n==0){
            cout<<0<<endl;
        }
        else{
            int ans=sum-n;
            if(ans<0){
                ans=1;
            }
            cout<<ans<<endl;
        }
    }
}