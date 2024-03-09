//lets begin...
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int new_ar[n];
    vector<int> new_ar;
    for(int i=0;i<n;i++){
        new_ar[i]=A[i];
    }
    
    int sum_ar[n];
    vector<int> sum_ar;
    for(int i=0;i<n;i++){
        sum_ar[i]=0;
    }
    
    for(int i=0;i<n;i++){
        int r;
        while(A[i]>0){
            r=A[i]%10;
            sum_ar[i]=sum_ar[i]+r;
            A[i]=A[i]/10;
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(sum_ar[i]<sum_ar[j]){
                new_ar[i]=new_ar[j];
                break;
            }
            else if(sum_ar[i]==sum_ar[j]){
                if(new_ar[j]>new_ar[i]){
                    new_ar[i]=new_ar[j];  
                    break;                  
                }
            }
        }
        if(new_ar[i]==sum_ar[i]){
            new_ar[i]=-1;
        }
    }
    new_ar[n-1]=-1;
    
    for(int i=0;i<n;i++){
        cout<<new_ar[i]<<" ";
    }
    return 0;
}