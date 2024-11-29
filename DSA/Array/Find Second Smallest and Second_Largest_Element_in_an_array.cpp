// Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

// Example :
// Input:  [1,2,4,7,7,5]
// Output:
//  Second Smallest : 2
//  Second Largest : 5

// ----------Solution 1: (Brute Force) [this approach only works if there are no duplicates]

// Approach:
// Sort the array in ascending order
// The element present at the second index is the second smallest element
// The element present at the second index from the end is the second largest element

// Time Complexity: O(NlogN), For sorting the array
// Space Complexity: O(1)


// ----------------Solution 2: (Best Solution)---------------------

// Approach:
// We would require four variables: small,second_small, large, and second_large. Variable small and second_small are initialized to INT_MAX while large and second_large are initialized to INT_MIN.

// Second Smallest Algo:
// If the current element is smaller than ‘small’, then we update second_small and small variables
// Else if the current element is smaller than ‘second_small’ then we update the variable ‘second_small’
// Once we traverse the entire array, we would find the second smallest element in the variable second_small.

// Second Largest Algo:
// If the current element is larger than ‘large’ then update second_large and large variables
// Else if the current element is larger than ‘second_large’ then we update the variable second_large.
// Once we traverse the entire array, we would find the second largest element in the variable second_large.

// Time Complexity: O(N), Single-pass solution
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;
int secondSmallest(int arr[],int n)
{
    if(n<2)
        return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;

    for(int i = 0; i < n; i++) {
       if(arr[i] < small)
       {
          second_small = small;
          small = arr[i];
       }
       else if(arr[i] < second_small && arr[i] != small)
       {
          second_small = arr[i];
       }
    }
   return second_small;     
}
int secondLargest(int arr[],int n)
{
	if(n<2)
	return -1;
    int large=INT_MIN,second_large=INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > large) 
        {
            second_large = large;
            large = arr[i];
        }
 
        else if (arr[i] > second_large && arr[i] != large) 
        {
            second_large = arr[i];
        }
    }
    return second_large;                
}

int main() {
    int arr[]={1,2,4,7,7,5};  
    int n=sizeof(arr)/sizeof(arr[0]);
        int sS=secondSmallest(arr,n);
        int sL=secondLargest(arr,n);
    cout<<"Second smallest is "<<sS<<endl;
    cout<<"Second largest is "<<sL<<endl;
    return 0;
}

