#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>> ans;
        int count=0;
        //cout<<"ffff"<<endl;
            
        for(int i=0;i<n-1;i++){
            // cout<<intervals[i][1]<<" "<<intervals[i+1][0]<<" ";
            

            if((intervals[i][1]>=intervals[i+1][0])){
                //cout<<"true";
                vector<int> v(2);
                v[0]=intervals[i][0];
                v[1]=intervals[i+1][1];
                ans.push_back(v);
                //cout<<v[0]<<" "<<v[1]<<" ";
                count++;
                // ans[i][1]=intervals[i+1][1];
            }
            else if((ans[count-1][1] > intervals[i+1][0]) && count>0){
                cout<<"hello";
                vector<int> v(2);
                v[0]=ans[count-1][0];
                v[1]=intervals[i+1][1];
                ans.push_back(v);
                //cout<<v[0]<<" "<<v[1]<<" ";
                count++;
            }
            else{
                if(ans[count-1][1]!=intervals[i][1] ){
                    vector<int> v(2);
                    v[0]=intervals[i][0];
                    v[1]=intervals[i][1];
                    ans.push_back(v);
                     //cout<<v[0]<<" "<<v[1]<<" ";
                    count++;
                    //cout <<2;
                }
            }
        }
        if(ans[count-1][1]< intervals[n-1][0]){
            vector<int> v(2);
            v[0]=intervals[n-1][0];
            v[1]=intervals[n-1][1];
            ans.push_back(v);
        }
        return ans;
    }
};

int main(){
    vector<vector<int>> intervals,ans;
    intervals = {{ 1, 3 }, { 2, 6 }, { 8, 10 }, {11,15},{14,18},{17,21} };
    Solution sol;
    ans = sol.merge(intervals);

    // Print the merged intervals
    for(int i=0;i<ans.size();i++){
        cout<<"["<<ans[i][0]<<" "<< ans[i][1]<< "]"<<endl;
    }
    cout << endl;

    return 0;

}
