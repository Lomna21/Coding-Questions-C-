// In this question we have to answer that how many number are consecutively smaller than the current number.

#include<bits/stdc++.h>
using namespace std;
 vector<int> stockspan(vector<int> prices){
    vector<int> ans;
    stack<pair<int,int> > s;
    for(auto price : prices){
        int days = 1;
        while(!s.empty() and s.top().first <= price){
            days += s.top().second;
            s.pop();
        }
        s.push({price,days});
        ans.push_back(days);
    }
    return ans;
 }
