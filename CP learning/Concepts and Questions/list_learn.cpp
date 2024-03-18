#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l={10,20,30,40,20,40};
    l.erase(l.begin());
    l.remove(40);
    for(auto it=l.begin();it!=l.end();it++){
        cout<<(*it)<<" ";
    }
}