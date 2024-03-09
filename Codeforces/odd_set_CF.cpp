#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int n;
        cin>>n;
        int even=0;
        int odd=0;
        for(int i=0;i<2*n;i++){
            int m;
            cin>>m;
            if(m%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(odd==even){

            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}