#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,a,b,c,d;
    for(i=0;i<n;i++){
        cin>>a>>b>>c>>d;
        if((a==b)&&(a>=c)&&(a>d)){
            cout<<a+d;
        }
        else if((a==b)&&(a>=c)&&(a<d)){
            cout<<a;
        } 
        else if((a==b)&&(a<c)){
            cout<<c+a;
        }
        else if((c==d)&&(a>=c)){
            cout<<a;            
        }
        else if((c==d)&&(a<=c)&&(c<=b)){
            cout<<c;
        }
        else if((c==d)&&(a<=c)&&(c>b)){
            cout<<a+c;
        }
        else if((a!=b)&&(a<=c)&&(b>c)){
            cout<<c;
        }
        else if((a!=b)&&(a<=c)&&(b<c)){
            cout<<c+a;
        }
        else if((a!=b)&&(a>=c)&&(a<d)){
            cout<<a;
        }
        else if((a!=b)&&(a>=c)&&(a>d)){
            cout<<a+c;
        }
        else if((c!=d)&&(a>=c)&&(a<d)){
            cout<<a;
        }
        else if((c!=d)&&(a>=c)&&(a>d)){
            cout<<a+c;
        }
        else if((c!=d)&&(a<=c)&&(c>b)){
            cout<<a+c;
        }
        else if((c!=d)&&(a<=c)&&(c<b)){
            cout<<c;
        }

    } 
}
   
    
    
