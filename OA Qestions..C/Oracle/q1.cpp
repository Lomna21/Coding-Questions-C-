#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

int drawingEdge(int n) {
    long long total_edges = (1LL * n * (n - 1)) / 2;
    long long base = 2;
    long long result = 1;
    if(n == 1){
        return 1;
    }
    else if(n == 2){
        return 2;
    }
    else{
        while (total_edges > 0) {
            if (total_edges % 2 == 1) {  
                result = (result * base) % MOD;
            }
            base = (base * base) % MOD;  
            total_edges /= 2;
        }
        return result;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << drawingEdge(n) << endl;
    return 0;
}

