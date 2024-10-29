// Kadane's Algorithm : Maximum Subarray Sum in an Array

// Problem Statement: Given an integer array arr, find the contiguous subarray (containing at least one number) which has the largest sum and returns its sum and prints the subarray.

// Input: arr = [-2,1,-3,4,-1,2,1,-5,4] 
// Output: 6 

// ----------------Brute Force Approach-----------------
// We will check the sum of every possible subarray and consider the maximum among them. To get every possible subarray sum, we will be using three nested loops. The first loops(say i and j) will iterate over every possible starting index and ending index of a subarray. Basically, in each iteration, the subarray range will be from index i to index j. Using another loop we will get the sum of the elements of the subarray [i…..j]. Among all values of the sum calculated, we will consider the maximum one.

// int maxSubarraySum(int arr[], int n) {
//     int maxi = INT_MIN; // maximum sum
//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             // subarray = arr[i.....j]
//             int sum = 0;
//             //add all the elements of subarray:
//             for (int k = i; k <= j; k++) {
//                 sum += arr[k];
//             }
//             maxi = max(maxi, sum);
//         }
//     }
//     return maxi;
// }

// Time Complexity: O(N^3)
// Space Complexity: O(1) 


// --------------Better Approach -----------------------   
// Using only 2 loops  (Time Complexity: O(N^2))

// for (int i = 0; i < n; i++) {
//     int sum = 0;
//     for (int j = i; j < n; j++) {
//         // current subarray = arr[i.....j]

//         //add the current element arr[j]
//         // to the sum i.e. sum of arr[i...j-1]
//         sum += arr[j];

//         maxi = max(maxi, sum); // getting the maximum
//     }
// }



// -------------Optimal Approach------------------------
// We will iterate the given array with a single loop and while iterating we will add the elements in a sum variable. Now, if at any point the sum becomes less than 0, we will set the sum as 0 as we are not going to consider any subarray with a negative sum. Among all the sums calculated, we will consider the maximum one.

// Time Complexity: O(N)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n) {
    long long maxi = LONG_MIN; // maximum sum
    long long sum = 0;

    int start = 0;
    int ansStart = -1, ansEnd = -1;
    for (int i = 0; i < n; i++) {

        sum += arr[i];

        // Update maximum sum and subarray indices
        if (sum > maxi) {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }

        // If sum is negative, reset it to zero and update the start index
        if (sum < 0) {
            sum = 0;
            start = i + 1;
        }
    }

    // Printing the subarray:
    cout << "The subarray is: [";
    for (int i = ansStart; i <= ansEnd; i++) {
        cout << arr[i] << " ";
    }
    cout << "]\n";

    // To consider the sum of the empty subarray
    // uncomment the following check:

    //if (maxi < 0) maxi = 0;

    return maxi;
}

int main() {
    int arr[] = { 0, 1, -2, 0, 0, 0, 0, 1, 2, 0, 0, -1, 5, -7, 7 };
    // output --> [0 0 0 0 1 2 0 0 -1 5 -7 7]
    int n = sizeof(arr) / sizeof(arr[0]);
    long long maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}

