#include<bits/stdc++.h>
using namespace std;
int count_repeating(int n){
    int r=0;
    int count[10]={0};
    while(n>0){
        int rem=n%10;
        count[rem]++;
        n=n/10;
    }
    for(int i=0;i<10;i++){
        if(count[i]>1){
            r++;
        }
    }
    return r;
}
