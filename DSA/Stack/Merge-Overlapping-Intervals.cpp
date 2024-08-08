// -----------Merge overlapping Intervals-------------

// Problem Statement - Given a set of time intervals in any order, our task is to merge all overlapping intervals into one and output the result which should have only mutually exclusive intervals.

// Input: Intervals = {{1,3},{2,4},{6,8},{9,10}}
// Output: {{1, 4}, {6, 8}, {9, 10}}

// Input: Intervals = {{6,8},{1,9},{2,4},{4,7}}
// Output: {{1, 9}} 


// ----> Brute Force Approach:
// A simple approach is to start from the first interval and compare it with all other intervals for overlapping, if it overlaps with any other interval, then remove the other interval from the list and merge the other into the first interval. Repeat the same steps for the remaining intervals after the first. This approach cannot be implemented in better than O(n^2) time.


// -->Merge Overlapping Intervals using Sorting (Optimized Approach) using stack:
// Time complexity: O(N*log(N))
// Auxiliary Space: O(N)

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

// Function to merge overlapping intervals
vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
	if (intervals.empty()) {
		return vector<vector<int>>();
	}

	// Sort intervals based on start values
	sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
		return a[0] < b[0];
	});

	stack<vector<int>> mergedStack;
	mergedStack.push(intervals[0]);

	for (int i = 1; i < intervals.size(); i++) {
		vector<int> current = intervals[i];
		vector<int>& top = mergedStack.top();

		if (current[0] <= top[1]) {
			// If current interval overlaps with the top of the stack, merge them
			top[1] = max(top[1], current[1]);
		} else {
			// If no overlap, push the current interval onto the stack
			mergedStack.push(current);
		}
	}

	// Convert the stack to a vector
	vector<vector<int>> mergedIntervals;
	while (!mergedStack.empty()) {
		mergedIntervals.insert(mergedIntervals.begin(), mergedStack.top());
		mergedStack.pop();
	}

	return mergedIntervals;
}

// ------------------------------------------------------------
// Merge Overlapping Intervals using Sorting without using stack:
// Time Complexity: O(N*log(N))
// Auxiliary Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

struct Interval {
	int s, e;
};

// Function used in sort
bool mycomp(Interval a, Interval b) { return a.s < b.s; }

void mergeIntervals(Interval arr[], int n)
{
	sort(arr, arr + n, mycomp);

	int index = 0; 
	for (int i = 1; i < n; i++) {
		// If this is not first Interval and overlaps with the previous one
		if (arr[index].e >= arr[i].s) {
			// Merge previous and current Intervals
			arr[index].e = max(arr[index].e, arr[i].e);
		}
		else {
			index++;
			arr[index] = arr[i];
		}
	}

	cout << "\n The Merged Intervals are: ";
	for (int i = 0; i <= index; i++)
		cout << "[" << arr[i].s << ", " << arr[i].e << "] ";
}

