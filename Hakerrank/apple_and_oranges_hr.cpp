#include <bits/stdc++.h>
using namespace std;
int main(){
    int s,t,a,b,m,n,i,x=0,y=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    if((a<s)&&(s<t)&&(t<b)){
        
    int apple[m];
    int orange[n];
    int apple_d[m];
    int orange_d[n];
    for(i=0;i<m;i++){
        cin>>apple[i];
    }
    for(i=0;i<n;i++){
        cin>>orange[i];
    }
    for(i=0;i<m;i++){
        apple_d[i]=apple[i]+a;        
    }
    for(i=0;i<n;i++){
        orange_d[i]=orange[i]+b;
    }
    for(i=0;i<m;i++){
        if((apple_d[i]>=s)&&(apple_d[i]<=t)){
          x++;  
        }
    }
    for(i=0;i<n;i++){
        if((orange_d[i]>=s)&&(orange_d[i]<=t)){
            y++;
        }
    }
    }
    cout<<x<<endl<<y;
}
