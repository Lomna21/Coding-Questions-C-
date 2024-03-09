#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;cin>>x;
    int ans=0;
        int digit=0;
        int i=0;
        while(x!=0){
            ans=x%10;
            digit=(digit*10)+ans;
            i++;
            x=x/10;
        }
        cout<<digit;
}
