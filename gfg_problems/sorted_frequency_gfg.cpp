#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    int n;cin>>n;
    int ar[n];
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    /*
    sort(ar,ar+n);
    int count=1;
    for(int i=1;i<n;i++){
        if(ar[i]==ar[i-1]){
            count++;
            continue;
        }
        m[ar[i-1]]=count;
        if(ar[n-1]==ar[n-2]){
            m[ar[n-1]]=count++;
        }
        if(ar[n-1]!=ar[n-2]){
            m[ar[n-1]]=1;
        }
        count=1;
    }
    */
    for(int i=0;i<n;i++){
        m[ar[i]]++;
    }
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    
}