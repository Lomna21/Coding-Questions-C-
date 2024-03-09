#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main(){
    map<int,int> m;
    int n;cin>>n;
    int ar[n];
    int x;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cin>>x;
    for(int i=0;i<n;i++){
        m[ar[i]]=i;
    }
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    auto it1=m.find(x);
    if(it1!=m.end()){
        m.erase(it1);
        cout<<"erased"<<x<<endl;
    }
    for(auto it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    
}
