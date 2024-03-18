#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,no,i,j,r,count=0;
    cin>>t;
    while(t--){
        cin>>no;
        count=0;
        int main_no=no;
        while(main_no>0){
            r=main_no%10;
            if(no%r==0 && r!=0){
                count++;
            }
            main_no=main_no/10;
        }
        cout<<count<<endl;
    }
}
