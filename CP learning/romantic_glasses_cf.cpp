#include <bits/stdc++.h>
using namespace std;
int main() 
{
int t;
cin>>t;
while(t--)
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum_odd=0,sum_even=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            sum_odd+=arr[i];
        }
        else{
            sum_even+=arr[i];
        }
    }
    for(int i=0,j=1;i<n;){
        if(sum_odd>sum_even){
            sum_odd=sum_odd-arr[i];
        }



    }

}

}