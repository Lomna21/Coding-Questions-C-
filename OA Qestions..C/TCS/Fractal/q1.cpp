#include <iostream>
#include <vector>

int climbStairs(int n) {
    if (n <= 1) return 1;

    std::vector<int> dp(n + 1);
    dp[0] = 1; // Base case: 1 way to stay at the ground
    dp[1] = 1; // Base case: 1 way to climb 1 step

    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2]; // The number of ways to reach step i
    }

    return dp[n];
}

int main() {
    int n;
    std::cout << "Enter the number of steps: ";
    std::cin >> n;

    int ways = climbStairs(n);
    std::cout << "Number of distinct ways to climb to the top: " << ways << std::endl;

    return 0;
}
