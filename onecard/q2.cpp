#include <bits/stdc++.h>
using namespace std;

int Resource(int A, int B, int C) {
    int count = 0;

    // Process sets of 3 with all the same type
    count += A / 3;
    count += B / 3;
    count += C / 3;

    // Process sets of 3 with all different types
    while (A > 0 && B > 0 && C > 0) {
        A--;
        B--;
        C--;
        count++;
    }

    return count;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int A, B, C;
    cin >> A >> B >> C;

    int result = Resource(A, B, C);
    cout << result << endl;

    return 0;
}