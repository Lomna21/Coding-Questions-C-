// https://codeforces.com/contest/1539/problem/C
// Codeforces Round 727 (Div. 2)
// C. Stable Groups


#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n,k,x;cin>>n>>k>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int diff_arr[n+1];
    diff_arr[0]=0;
    for(int i=1;i<n;i++){
        diff_arr[i] = arr[i] - arr[i-1];
    }
    int count = 1;
    sort(diff_arr,diff_arr+n);
    // for(int i=0;i<n;i++){
    //     cout<<diff_arr[i]<<" ";
    // }
    // cout<<endl;
    for(int i=0;i<n;i++){
        if(k>0){
            if(diff_arr[i]>x && k>0){
                int sub = diff_arr[i]/x;
                if(diff_arr[i] % x == 0){
                    sub--;
                }
                diff_arr[i] -= x*sub;
                if(k-sub>=0){
                    k = k-sub;
                }
                else{
                    cout<<n-i+1<<endl;
                    return 0;
                }
            }
        }
        else if(diff_arr[i]> x && k<=0){
            cout<<n-i+1<<endl;
            return 0;
        }
        
    }
    cout<<count<<endl;
}