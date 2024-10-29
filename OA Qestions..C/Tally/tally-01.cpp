// C++ program to implement above approach

#include <bits/stdc++.h>
// #define n 3
using namespace std;

// 2d array to store
// states of dp
int dp[n][n];

// array to determine whether
// a state has been solved before
int v[n][n];
int N,M;

// Function to find the minimum number of
// steps to reach the end of matrix
int minSteps(int i, int j, int arr[][N])
{
	// base cases
	if (i == N - 1 and j == N - 1)
		return 0;

	if (i > N - 1 || j > n - 1)
		return 9999999;

	// if a state has been solved before
	// it won't be evaluated again.
	if (v[i][j])
		return dp[i][j];

	v[i][j] = 1;

	// recurrence relation
	dp[i][j] = 1 + min(minSteps(i + arr[i][j], j, arr),
					minSteps(i, j + arr[i][j], arr));

	return dp[i][j];
}

// Driver Code
int main()
{
    int n=3,m=3;
    N = n; M = m;
	int arr[n][M] = { { 2, 1, 2 },
					{ 1, 1, 1 },
					{ 1, 1, 1 } };

	int ans = minSteps(0, 0, arr);
	if (ans >= 9999999)
		cout << -1;
	else
		cout << ans;

	return 0;
}
