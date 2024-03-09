#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        v.push_back(firstOcc(nums,target));
        v.push_back(lastOcc(nums,target));
        return v;
    }
    int firstOcc(vector<int>& nums, int target){
        int low=0;
        int high=sizeof(nums)-1;
        int mid=low+(high-low)/2;
        vector<int> v;
        int first_index=-1;
        //for finding first index
        while(low<=high){
            if(nums[mid]==target){
                //v.push_back(mid);
                //break;
                first_index=mid;
                high=mid-1;                
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            mid=low+(high-low)/2;
        }
        return first_index;
    }
    int lastOcc(vector<int>& nums, int target){
        int low=0;
        int high=sizeof(nums)-1;
        int mid=low+(high-low)/2;
        vector<int> v;
        int last_index=-1;
        //for finding last index....
        while(low<=high){
            if(nums[mid]==target){
                //v.push_back(mid);
                //break;
                last_index=mid;
                low=mid+1;                
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            mid=low+(high-low)/2;
        }
        return last_index;
    }
};