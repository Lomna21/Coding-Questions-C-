#include <vector>
#include <iostream>

using namespace std;

int solution(int A[], int N, int X, int Y) {
    vector<int> dp(N, 0);

    for (int i = 0; i < N; i++) {
        dp[i] = A[i];
        for (int j = 1; j <= X; j++) {
            if (i - j * Y >= 0) {
                dp[i] = min(dp[i], dp[i - j * Y] + A[i]);
            }
        }
    }

    return dp[N - 1];
}

int main() {
    // Example usage:
    int A[] = {1, 2, 3, 4, 5};
    int N = 5;
    int X = 3;
    int Y = 2;
    int minCost = solution(A, N, X, Y);
    cout << "Minimum cost of rehabilitation: " << minCost << endl;
    return 0;
}