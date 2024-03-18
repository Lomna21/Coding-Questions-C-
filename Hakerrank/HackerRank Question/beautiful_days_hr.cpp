#include<bits/stdc++.h>
using namespace std;
int reverse(int no){
    int rev=0,r;
    while(no>0){
        r=no%10;
        rev=rev*10+r;
        no=no/10;        
    }
    return rev;
}
int main(){
    int i,j,k;
    int beautiful_days=0;
    cin>>i>>j>>k;

    for(int i;i<=j;i++){
        int num;
        num=i-reverse(i);
        if(num%k==0){
            beautiful_days++;           
        }
    }
    cout<<beautiful_days; 
    }
        
