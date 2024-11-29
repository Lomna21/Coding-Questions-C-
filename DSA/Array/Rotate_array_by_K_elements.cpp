// Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.

// Input: N = 6, array[] = {3,7,8,9,10,11} , k=3 , left 
// Output: 9 10 11 3 7 8
// Explanation: Array is rotated to right by 3 position.

// ------------Approach 1: Using a temp array------------------

// For Rotating the Elements to right
// Step 1: Copy the last k elements into the temp array.
// Step 2: Shift n-k elements from the beginning by k position to the right
// Step 3: Copy the elements into the main array from the temp array.

// Time Complexity: O(n)
// Space Complexity: O(k) since k array element needs to be stored in temp array

#include <iostream>
using namespace std;
void RotateToRight(int arr[], int n, int k)
{
  if (n == 0)
    return;
  k = k % n;
  if (k > n)
    return;
  int temp[k];
  for (int i = n - k; i < n; i++)
  {
    temp[i - n + k] = arr[i];
  }
  for (int i = n - k - 1; i >= 0; i--)
  {
    arr[i + k] = arr[i];
  }
  for (int i = 0; i < k; i++)
  {
    arr[i] = temp[i];
  }
}

// -----------Approach 2: Using ” Reversal Algorithm “------------

// For Rotating Elements to right
// Step 1: Reverse the last k elements of the array
// Step 2: Reverse the first n-k elements of the array.
// Step 3: Reverse the whole array.

// Time Complexity - O(N) where N is the number of elements in an array
// Space Complexity - O(1) since no extra space is required