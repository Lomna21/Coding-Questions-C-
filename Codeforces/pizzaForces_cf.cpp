#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long int n;cin>>n;
        long long int time=0;
        if(n<=6){
            time=15;
        }
        /*else if(n%6==0 || n%6==5){
            time=(n/6)*15;
        }
        else if(n%6==1 || n%6==2){
            time=(n/6)*15 + 5;
        }
        else{
            time=(n/6)*15 + 10;
        }*/
        else if(n%2==1){
            time=(n/2)*5+5;
        }
        else{
            time=n/2*5;
        }
        cout<<time<<endl;

    }
}