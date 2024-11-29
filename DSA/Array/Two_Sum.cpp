// Two Sum : Check if a pair with given sum exists in Array
// Problem Statement: Given an array of integers arr[] and an integer target.

// -----------Better Approach(using Hashing)------------

// We will select the element of the array one by one using a loop(say i).
// Then we will check if the other required element(i.e. target-arr[i]) exists in the hashMap.

// Time Complexity: O(N* logN) as the map data structure takes logN time to find an element.


// ---------Optimized Approach(using two-pointer)-----------

// In this approach, we will first sort the array and will try to choose the numbers in a greedy way.
// We will keep a left pointer at the first index and a right pointer at the last index. Now until left < right, we will check the sum of arr[left] and arr[right]. Now if the sum < target, we need bigger numbers and so we will increment the left pointer. But if sum > target, we need to consider lesser numbers and so we will decrement the right pointer. 

// If sum == target we will return either “YES” or the indices as per the question.
// But if the left crosses the right pointer, we will return “NO” or {-1, -1}.

// Time Complexity: O(N) + O(N*logN)

#include <bits/stdc++.h>
using namespace std;

string twoSum(int n, vector<int> &arr, int target) {
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return "YES";
        }
        else if (sum < target) left++;
        else right--;
    }
    return "NO";
}