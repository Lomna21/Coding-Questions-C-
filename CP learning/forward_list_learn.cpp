#include<bits/stdc++.h>
using namespace std;
int main(){
    forward_list<int> l1={11,3,5,5,4,10};
    forward_list<int> l2;
    l2.assign({25,12,10});
    
    l2.insert_after(l2.begin(),11);
    for(auto it =l2.begin(); it !=l2.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    l1.erase_after(l1.begin());
    l1.remove(5);
    l1.erase_after(l1.begin());
    for(auto i=l1.begin();i!=l1.end();i++){
        cout<<(*i)<<" ";
    }
    /*
    l2 = 25 11 12 10
    l1 = 11 10
    */
    l1.assign({5,20,50,30});
    l2.assign({10,15,17,23});
    l1.merge(l2);
    for(auto it =l2.begin(); it !=l2.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl<<endl;
    for(auto i=l1.begin();i!=l1.end();i++){
        cout<<(*i)<<" ";
    }
    cout<<endl;
    



   
   /* vector<int> v={10,20,30};
    auto it = v.insert(v.begin()+2,50);
    */

}