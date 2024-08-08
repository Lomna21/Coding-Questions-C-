// C++ implementation of efficient algorithm to find smaller element on left side
// Input:  arr[] = {1, 6, 4, 10, 2, 5}
// Output:         {-1, 1, 1,  4, 1, 2}

#include <bits/stdc++.h>
#include <stack>
using namespace std;

vector<int> printPrevSmaller(int arr[], int n){

	stack<int> S;
	vector<int> ans;
	S.push(-1);

	for (int i=0; i<n; i++)
	{
		// Keep removing top element from S while the top element is greater than or equal to arr[i]
		while (!S.empty() && S.top() >= arr[i])
			S.pop();

		ans[i]=S.top();

		// Push this element
		S.push(arr[i]);
	}
	return ans;
}

int main()
{
	int arr[] = {1, 3, 0, 2, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	printPrevSmaller(arr, n);
	return 0;
}

