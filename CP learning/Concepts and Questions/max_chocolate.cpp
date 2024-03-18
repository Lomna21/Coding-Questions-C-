#include<bits/stdc++.h>
using namespace std;
int main(){
    int rupee,chocolate,wrappers,extra_chocolate,total_chocolate=0;
    cin>>rupee;
    wrappers=chocolate=rupee;
    while(wrappers>2){
        
        extra_chocolate=wrappers/3;
        wrappers=extra_chocolate + wrappers%3;
        total_chocolate=extra_chocolate+chocolate+total_chocolate;
        chocolate=0;
    }
    cout<<total_chocolate;
}