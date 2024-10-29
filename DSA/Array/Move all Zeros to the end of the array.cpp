// Move all Zeros to the end of the array

// Example : -
// Input : 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
// Output :  1 ,2 ,3 ,4 ,1 ,0 ,0 ,0

//------------Brute Force Approach----------------

// Algorithm:
// Suppose, there are N-X zeros and X non-zero elements in the array. We will first copy those X non-zero elements from the original array to a temporary array. 
// Then, we will copy the elements from the temporary array one by one and fill the first X places of the original array. 
// The last N-X places of the original array will be then filled with zero. Now, our task is completed.

// Time Complexity: O(N) + O(X) + O(N-X) ~ O(2*N)

// Space Complexity: O(N)

//--------------Optimal Approach(Using 2 pointers)-----------

// Algorithm:
// First, using a loop, we will place the pointer j. If we don’t find any 0, we will not perform the following steps.
// After that, we will point i to index j+1 and start moving the pointer using a loop.
// While moving the pointer i, we will do the following:
// If a[i] != 0 i.e. a[i] is a non-zero element: We will swap a[i] and a[j]. Now, the current j is pointing to the non-zero element a[i]. So, we will shift the pointer j by 1 so that it can again point to the first zero.

#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    int j = -1;
    //place the pointer j:
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            j = i;
            break;
        }
    }
    //no non-zero elements:
    if (j == -1) return a;

    //Move the pointers i and j and swap accordingly:
    for (int i = j + 1; i < n; i++) {
        if (a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}

int main()
{
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;
    vector<int> ans = moveZeros(n, arr);
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}

