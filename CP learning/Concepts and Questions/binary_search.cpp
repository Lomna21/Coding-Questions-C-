#include <bits/stdc++.h>
using namespace std;

bool binary_search(int arr[], int n, int element)
{
    int l = 0, h = n - 1;
    while (l <= h) {
        int mid = (l + h) / 2;
        if (arr[mid] == element) {
            return true;
        }
        else if (arr[mid] > element) {
            h = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    return false;
}