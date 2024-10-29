#include <iostream>
#include <cmath>

bool isPerfectSquare(int num) {
    int root = static_cast<int>(sqrt(num));
    return root * root == num;
}

int countPerfectSquarePairs(int N) {
    int count = 0;
    
    for (int a = 1; a < N; ++a) {
        for (int b = a; b < N; ++b) {
            if (isPerfectSquare(a * b)) {
                // Check if both a and b are perfect squares
                count++;
                if(isPerfectSquare(a)){
                    count++;
                }
                if(isPerfectSquare(b)){
                    count++;
                }
                // if (isPerfectSquare(a) && isPerfectSquare(b)) {
                //     count++;
                // } 
            }
        }
    }
    
    return count;
}

int main() {
    int N = 4;
    std::cout << "Number of perfect square pairs <= " << N << ": " << countPerfectSquarePairs(N) << std::endl;
    return 0;
}
