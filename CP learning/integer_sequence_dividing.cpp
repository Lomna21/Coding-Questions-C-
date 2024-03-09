#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,i;
    cin>>n;
    int sumA=0,sumB=0;
    /*while(n>0){
        sumA = sumA + n;
        n--;
        if(n==0){
            break;
        }
        sumB = sumB + n;
        n--;
        if(n==0){
            break;
        }
        sumB = sumB +n;
        n--;
        if(n==0){
            break;
        }
        sumA= sumA + n;
        n--;
    }*/
    for(n;n>=1;){
         sumA = sumA + n;
        n--;
        if(n==0){
            break;
        }
        sumB = sumB + n;
        n--;
        if(n==0){
            break;
        }
        sumB = sumB +n;
        n--;
        if(n==0){
            break;
        }
        sumA= sumA + n;
        n--;
    }
    cout<<abs(sumA-sumB);
}