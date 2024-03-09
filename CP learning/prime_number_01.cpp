#include<bits/stdc++.h>
using namespace std;
#define N //10000000;
//bool prime[100000];
int main(){
    int a,b;cin>>a>>b;
    int prime[300010];
    for(int i=2;i<=b;i++){
        prime[i]=true;
    }
    for(int i=2;i<=b;i++){
        if(prime[i]){
            for(int j=2*i;j<=b;j+=i){
                prime[j]=false;
            }            
        }
    }
    int count=0;
    for(int i=a;i<=b;i++){
        if(prime[i]){
            cout<<i<<endl;
            count++;
        }
    }
    if(count==0){
        cout<<"Absent"<<endl;
    }
}