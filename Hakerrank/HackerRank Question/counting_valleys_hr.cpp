#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,height=0,valley=0;
    cin>>n;
    for(i=0;i<n;i++){
        char input;

        cin>>input;
        if(input=='U'){
            height ++;
        }
        if(input=='D'){
            height --;            
        }
        if(height== -1){
            valley++;
        }
    }
    
    }