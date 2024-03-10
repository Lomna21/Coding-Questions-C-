#include<bits/stdc++.h>
using namespace std; //if we don't add this then we can use cout
// and cin without using std:: ---> eg:- std::cout<<val<<endl;

namespace raj{
    int val = 5;
    int getVal(){
        return val*10;
    }
}
 int main(){
    //------------------------------------------------------
    
    int val = 50; 
    double val=10.0;
    cout<<val<<endl;
    //this will thorw error kyuki same variable 
    //name with two different data types

    //------------------------------------------------------
     
     double val=10.0;
     cout<<val<<endl;        // prints 10.0
     cout<<raj::val<<endl;
     cout<<raj::getVal<<endl;   //prints 50;
     //this is correct method

     //------------------------------------------------------

    //  PAIRS
    pair<int,int> p ={1,3};
    cout<<p.first <<" "<<p.second<<endl; // prints --> 1 3
    pair<int,pair<int,int>> p1 ={1,{3,4}};
    cout<<p.first<<" "<<p1.second.second<<" "<<p1.second.first<<endl; //prints --> 1 4 3
    pair<int,int> arr[] = {{1,2},{2,5},{5,1}};
    cout<<arr[1].second<<endl; // prints --> 2

    // VECTORS
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);  // emplace_back is faster then push_back

    vector<pair<int,int>> vec;
    vec.push_back({1,2}); 
    vec.emplace_back(1,2); // automatically takes both value as pair input

    vector<int> v1(5,100); // {size,value} --> {100,100,100,100,100}
    vector<int> v2(100,0); // {0,0,0,0,........}
    vector<int> v3(v2);    // v3 is copy of v2 vector.

    vector<int>::iterator it = v.begin(); // indecates to the start of vector.
    it++;  // increment of iterator.
    cout<<*(it)<<" ";
    
    vector<int> :: iterator it = v.end(); // indicates to the end of vector.
    // vector<int> :: iterator it = v.rend(); // reverse end 
    // vector<int> :: iterator it = v.rbegin(); // reverse begin

    cout<<v.back()<<" "; // prints --> last element of vector

    // vector<int>::iterattor --> auto

    for(auto it = v.begin() ; it!= v.end();it++){
        cout<<*(it)<<" ";
    } 
    for(auto it : v){
        cout<<it<<" ";
    }//We can write either way

    //{10,20,12,23}
    v.erase(v.begin()+1); // {10,12,23}

    //{10,20,12,23,35}
    v.erase(v.begin()+2,v.begin()+4); // {10,20,35} [start,end)

    // Insert Function
    vector<int> v(2,100);  // {100,100}
    v.insert(v.begin(),300); // {300,100,100}
    v.insert(v.begin()+1,2,10); // {300,10,10,100,100}

    vector<int> copy(2,50); // {50,50}
    v.insert(v.begin(),copy.begin(),copy.end()); // {50,50,300,10,10,100,100}

    // v1 --> {10,20}
    // v2 --> {30,40}
    v1.swap(v2); // v1 --> {30,40} , v2 --> (10,20)
    v.pop_back(); //remove last element
    v.clear(); // erases the entire vector

    // LISTS and DEQUE
    // Insert function is costly in vector as singly linkedlist is maintained while in list doubly linkedlist is maintained so it is cheap.
    
    // All features of list and deque are similar to vector.
    
    list<int> ls;
    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2,4}
    ls.push_front(5); //{5,2,4}

    deque<int> dq;

    // STACK
    // First In Last Out
    // only push , pop , top functions are available in stack
    // all operations happen in O(1)
    stack<int> st;
    st.push(1);
    st.push(2);
    st.pop();
    st.top();
    st.size();
    stack<int>st1,st2; 
    st1.swap(st2);  // swap two stack

    // QUEUE
    // First In First Out
    queue<int> q; 
    q.push(1);
    q.push(2);
    q.pop();
    q.front();

    //PRIORITY_QUEUE
    // push --> log n 
    // pop --> log n
    // top --> O(1)
    priority_queue<int> pq;
    pq.push(5); // {5}
    pq.push(2); // {5,2}
    pq.push(8); // {8,5,2}
    pq.emplace(10); //{10,8,5,2}
    cout<<pq.top(); // prints 10
    pq.pop(); // {8,5,2}
    
    priority_queue<int,vector<int>,greater<int>> pq;
    // stores in descending order
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10); // {2,5,8,10}
    cout<<pq.top(); // prints 2

    // SET
    // stores element in order and only unique elements are present
    set<int> set1;
    set1.insert(1);
    set1.emplace(2);
    set1.insert(10);
    set1.insert(35);
    auto it = set1.find(3); // if 3 is not present then iterator will go to a number greater then 3
    set1.erase(5);  // take O(log n) time
    int count = set1.count(1); //give 1 if present or 0 if absent as output
    auto it = set1.find(3);
    // set1.erase(it); // it takes O(1) time

    // lower_bound() and upper_bound() function works in the same way as in vector it does.

    auto it = set1.lower_bound(2);
    auto it = set1.upper_bound(3);
    
    // MULTISET
    // stores only elements in sorted order but not unique elements.
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1); // {1,1,1}
    ms.erase(1); // all 1's erased
    int count = ms.count(1); // gives count of 1
    ms.erase(ms.find(1)); // erase value at iterator 

    // UNORDERED SET
    // lower_bound and upper_bound function does not work, rest all function are same as above, itfoes not stores in any particullar order it has a better complexity than set in most cases, except some when collision happens.
    unordered_set<int> ust;

    // MAP
    // map<key,value>   --> key is always unique and values  can be same
    // map stores unique keys in sorted order
    map<int,int> mp;
    map<int,pair<int,int>> mp1;
    map<pair<int,int>,int> mp2;

    mp[1]=2;
    mp.insert({3,1});
    mp.insert({2,4});
    mp2[{2,3}]=10;  // for mp2
    // [{1,2},{2,4},{3,1}] in sorted order
    for(auto it :mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<mp[1]; // 2
    cout<<mp[5]; // 0 cause it s not present

    auto it = mp.find(3);  
    cout<<*(it).second;

    auto it = mp.lower_bound(2);
    auto it = mp.upper_bound(5);

    //erase,swap,size,empty are same as above

    //MULTIMAP
    // everything same as map, only it can store multiple keys
    // only mp[key] cannot be used here

    //UNORDERED MAP
    // same as set and unordered_set difference


    // FUNCTIONS
    int n;
    int a[n]; vector<int> v;
    sort(a,a+n);    // [begin,end) last index is not considered
    sort(v.begin(),v.end());
    sort(a+2,a+4);
    sort(a,a+n,greater<int>); // sorts in descending order
    
    pair<int,int> a[]={{1,2},{2,1},{4,1}};
    //sort in according to second element if second is same, then sort it according to first element but in descending order
    sort(a,a+n,comp);
    bool comp(pair<int,int> p1, pair<int,int> p2){
        if(p1.second<p2.second) return true;
        if(p1.second>p2.second) return false;
        if(p1.first>p2.first) return true; // if second are same
        return false;
    } 

    int num = 7;
    int count=__builtin_popcount(); // gives the number of set bits in the number
    long long num = 168894373290;
    int count = __builtin_popcountll(); // for long long 

    // FOR ALL PERMUTATIONS
    string s="123";
    // if not sorted then sort first
    sort(s,s+n);
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
    // this will return all permutations of a string but string has to be sorted
    








 }