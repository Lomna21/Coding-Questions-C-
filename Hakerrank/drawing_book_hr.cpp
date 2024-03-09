#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,p,front=0,endE=0,endO=0,i;
    int pageF, pageE=n;
    cin>>n>>p;
    
    if(p<=n/2){
        for(pageF=1;pageF<p;pageF=pageF+2)
        front++;        
    }
    else{
        if(n%2==0){
            for(pageE=n;pageE>p;pageE=pageE-2){
                endE++;
            }           
        }
        if(n%2!=0){
            for(pageE=n;pageE>p;pageE=pageE-2){
                endO++;                
            }
        }
        
    }
    if((front<end)&&(front!=0)){
        cout<<front;
    }
    if((end<front)&&(end!=0)){
        cout<<end;
    }
}