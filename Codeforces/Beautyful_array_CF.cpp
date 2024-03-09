#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,k,b,s;
        cin>>n>>k>>b>>s;
        int arr[n];
        for(int j=0;j<n;j++){
            arr[j]=0;
        }
        int r;
        int i;

        if((k*b)==s){
                arr[n-1]=k*b;
            }
       
        if(((n*k)+(k*b)>s) && ((k*b)<=s)){
            if(k*b==s){
                arr[n-1]=k*b;
            }
            if(((k*b)<s)){
                arr[n-1]=k*b+1;
                r = s - arr[n-1];
                i=2;
                while(r>0){
                    if(r>k){
                        arr[n-i]=k-1;
                        r=r-k+1;
                    }
                    else{
                        arr[n-i]=r;
                        r=0;
                    }
                    i++;
                }
            }
            for(int j=0;j<n;j++){
                cout<<arr[j]<<" ";
            }
            
            cout<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
}
