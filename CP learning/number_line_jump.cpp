#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,v1,x2,v2;
    int t=1;
    cin>>x1>>v1>>x2>>v2;
    if(v1>v2){
        while(x2>x1){
            x1=x1+v1*t;
            x2=x2+v2*t;
            if(x1==x2){
                cout<<"YES";
                break;
            } 
            if(x1>x2){
                cout<<"NO";
                break;
            }           
        }
    } 
}
