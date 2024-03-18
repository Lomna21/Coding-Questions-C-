#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    long double px, py, ax, ay, bx, by;
    cin >> px >> py >> ax >> ay >> bx >> by;

    long double w = sqrt(pow(abs(bx - ax), 2) + pow(abs(by - ay), 2)) / 2;
    long double ap = sqrt(pow(abs(ax - px), 2) + pow(abs(ay - py), 2));
    long double pb = sqrt(pow(abs(bx - px), 2) + pow(abs(by - py), 2));

    long double home = sqrt(pow(abs(px), 2) + pow(abs(py), 2));
    long double ao = sqrt(pow(abs(ax), 2) + pow(abs(ay), 2));
    long double bo = sqrt(pow(abs(bx), 2) + pow(abs(by), 2));

    long double epsilon = 1e-9;
    long double low = 0, high = 1e15, ans = 0;

    while (high - low >= epsilon) {
        long double mid = (low + high) / 2;

        if ((mid >= w && (ap <= mid || pb <= mid)) ||
            (mid >= ao && ap <= mid) ||
            (mid >= bo && pb <= mid)) {
            ans = mid;
            high = mid - epsilon;
        } else {
            low = mid + epsilon;
        }
    }

    cout << setprecision(11) << ans << endl;

    return 0;
}
