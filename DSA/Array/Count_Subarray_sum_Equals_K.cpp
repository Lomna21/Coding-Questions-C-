// Count Subarray sum Equals K

// Problem Statement: Given an array of integers and an integer k, return the total number of subarrays whose sum equals k.

// Input Format:
//  N = 4, array[] = {3, 1, 2, 4}, k = 6
//  Result: 2   =>    Explanation: The subarrays that sum up to 6 are [3, 1, 2] and [2, 4].

//--------------Better Approach---------------------------

// Time Complexity: O(N^2), where N = size of the array.

// #include <bits/stdc++.h>
// using namespace std;

// int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
//     int n = arr.size(); // size of the given array.
//     int cnt = 0; // Number of subarrays:

//     for (int i = 0 ; i < n; i++) { // starting index i
//         int sum = 0;
//         for (int j = i; j < n; j++) { // ending index j
//             // calculate the sum of subarray [i...j]
//             // sum of [i..j-1] + arr[j]
//             sum += arr[j];

//             // Increase the count if sum == k:
//             if (sum == k)
//                 cnt++;
//         }
//     }
//     return cnt;
// }

// int main()
// {
//     vector<int> arr = {3, 1, 2, 4};
//     int k = 6;
//     int cnt = findAllSubarraysWithGivenSum(arr, k);
//     cout << "The number of subarrays is: " << cnt << "\n";
//     return 0;
// }

// ----------------Optimal Approach------------------------

// Time Complexity: O(n) 
// Auxiliary Space: O(n)

#include <bits/stdc++.h>
using namespace std;

// Function to find number of subarrays with 
// sum as k.
int findSubarraySum(vector<int>& arr, int sum) {
  
    // unordered_set to store prefix sums.
    unordered_set<int> prefixSums;
    int res = 0;
    int currSum = 0;

    for (int i = 0; i < arr.size(); i++) {
        // Add current element to sum so far.
        currSum += arr[i];

        // If currSum is equal to desired sum, then a new
        // subarray is found. So increase count of subarrays.
        if (currSum == sum)
            res++;

        // If currSum exceeds the desired sum, check if 
        // the difference  exists in the prefixSums set.
        if (prefixSums.find(currSum - sum) != prefixSums.end())
            res++;

        // Add currSum to the set of prefix sums.
        prefixSums.insert(currSum);
    }

    return res;
}


