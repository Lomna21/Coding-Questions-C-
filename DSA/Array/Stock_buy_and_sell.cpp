// Stock Buy And Sell

// Problem Statement: You are given an array of prices where prices[i] is the price of a given stock on an ith day.

// Example 1:
// Input: prices = [7,1,5,3,6,4]
// Output: 5

//-------------Brute Force Approach-------------------

// Intuition: We can simply use 2 loops and track every transaction and maintain a variable maxPro to contain the max value among all transactions.

// Time complexity: O(n^2)
// Space Complexity: O(1)

// ---------------Optimal Approach-------------------
// Intuition: We will linearly travel the array. We can maintain a minimum from the start of the array and compare it with every element of the array, if it is greater than the minimum then take the difference and maintain it in max, otherwise update the minimum.

int maxProfit(vector<int> &arr) {
    int maxPro = 0;
    int n = arr.size();
    int minPrice = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        minPrice = min(minPrice, arr[i]);
        maxPro = max(maxPro, arr[i] - minPrice);
    }
    return maxPro;
}

// Time complexity: O(n)
// Space Complexity: O(1)