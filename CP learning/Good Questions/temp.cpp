#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int n;
    cin >> n;

    vector<pair<int, int>> products(n);
    for (int i = 0; i < n; i++) {
        cin >> products[i].first >> products[i].second; // ai, bi
    }

    // Sort products by bi (minimum items needed for discount), ascending
    sort(products.begin(), products.end(), [](pair<int, int>& a, pair<int, int>& b) {
        return a.second < b.second;
    });

    int total_cost = 0;
    int purchased = 0; // Total items purchased so far

    int left = 0, right = n - 1;
    while (left <= right) {
        // Buy items from the leftmost product
        while (purchased < products[left].second && left <= right) {
            int needed = products[left].second - purchased; // Items needed to get the discount
            int to_buy = min(products[right].first, needed); // Take as many as possible from the rightmost product
            purchased += to_buy;
            total_cost += 2 * to_buy; // Full price (2 rubles)
            products[right].first -= to_buy;
            if (products[right].first == 0) {
                right--; // Move to the next rightmost product
            }
        }

        // Buy remaining items of the leftmost product with a discount
        if (purchased >= products[left].second) {
            total_cost += products[left].first; // Discounted price (1 ruble per item)
            purchased += products[left].first;
            left++; // Move to the next product
        }
    }

    cout << total_cost << endl;

    return 0;
}
