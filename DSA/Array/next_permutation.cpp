// next_permutation : find next lexicographically greater permutation

// Problem Statement: Given an array Arr[] of integers, rearrange the numbers of the given array into the lexicographically next greater permutation of numbers.

// If such an arrangement is not possible, it must rearrange to the lowest possible order (i.e., sorted in ascending order).

// Input format: Arr[] = {1,3,2}
// Output : Arr[] = {2,1,3}
// Explanation: 
// All permutations of {1,2,3} are {{1,2,3} , {1,3,2}, {2,13} , {2,3,1} , {3,1,2} , {3,2,1}}. So, the next permutation just after {1,3,2} is {2,1,3}.


// ---------Brute Force: Finding all possible permutations.---------------

// Approach :
// Step 1: Find all possible permutations of elements present and store them.
// Step 2: Search input from all possible permutations.
// Step 3: Print the next permutation present right after it.

// Time complexity of O(N!xN) :- N represents the number of elements present in the input array. Also for searching input arrays from all possible permutations will take N!.

// Code for storing all permutations of an array.

// class Solution {
// private:
//     // Recursive helper function to generate permutations
//     void solve(vector<int> nums, int index, vector<vector<int>>& ans) {
//         // Base case: if the current index is equal to the size of nums
//         if (index == nums.size()) {
//             // Add the current permutation to the answer list
//             ans.push_back(nums);
//             return;
//         }

//         // Iterate over the elements starting from the current index
//         for (int j = index; j < nums.size(); j++) {
//             // Swap the current element with the element at position j
//             swap(nums[index], nums[j]);
//             // Recursively generate permutations for the next index
//             solve(nums, index + 1, ans);
//             // Backtrack: swap the elements back to their original positions
//             swap(nums[index], nums[j]);
//         }
//     }

// public:
//     // Public function to generate permutations
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>> ans;  // Vector to store all permutations
//         int index = 0;            // Start from the first index
//         solve(nums, index, ans);  // Call the recursive helper function
//         return ans;               // Return the result
//     }
// };




//------------Using in-built function-------------------

// C++ provides an in-built function called next_permutation() which directly returns the lexicographically next greater permutation of the input.

// int main() {
//     int arr[] = {1,3,2};
    
//     next_permutation(arr,arr+3);//using in-built function of C++
//     cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    
//     return 0;
// }


 //-----------Optimal Solution------------------------

// Time Complexity: O(3N), where N = size of the given array
// Finding the break-point, finding the next greater element, and reversal at the end takes O(N) for each
 
// Example :-
// arr[] = {2,1,5,4,3,0,0}
// Step 1 - So break point in this is 1 which is smaller than 5, while we were finding the break point from the last all were in increasing order till 1. 
// break point = 1.

// Step 2 - For next permutation we have to find the next smallest number from which we can swap this break point. And that number must be after this break point in the array cause then only we will get next permutation as by modifing previous index's element will give some other permutation. 
// next smallest = 3.

// Step 3 - After finding that smallest element we will swap that with out break point. And we will again find that element from back of the array and the first number which we get smaller then break point will be our smallest element.
// After swap => arr[] = {2,3,5,4,1,0,0}

// Step 4 - Now to make it the next permutation we just to reverse our array from break point till end then it will be the smallest permutation(next permutation).
// After reverse => arr[] ={2,3,0,0,1,4,5}.

#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterPermutation(vector<int> &A) {
    int n = A.size(); // size of the array.

    // Step 1: Find the break point:
    int ind = -1; // break point
    for (int i = n - 2; i >= 0; i--) {
        if (A[i] < A[i + 1]) {
            // index i is the break point
            ind = i;
            break;
        }
    }

    // If break point does not exist:
    if (ind == -1) {
        // reverse the whole array:
        reverse(A.begin(), A.end());
        return A;
    }

    // Step 2: Find the next greater element
    //         and swap it with arr[ind]:

    for (int i = n - 1; i > ind; i--) {
        if (A[i] > A[ind]) {
            swap(A[i], A[ind]);
            break;
        }
    }

    // Step 3: reverse the right half:
    reverse(A.begin() + ind + 1, A.end());

    return A;
}

int main()
{
    vector<int> A = {2, 1, 5, 4, 3, 0, 0};
    vector<int> ans = nextGreaterPermutation(A);

    cout << "The next permutation is: [";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << "]\n";
    return 0;
}


