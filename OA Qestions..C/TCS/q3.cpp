#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;
int arr[MAX][MAX];
int R, C;

// Helper function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;  // 1 is not prime, and neither are numbers < 2
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Helper function to find the nearest prime number
int nearestPrime(int num) {
    if (isPrime(num)) return num;
    
    int dist = 1;
    while (true) {
        if (isPrime(num - dist)) return num - dist;
        if (isPrime(num + dist)) return num + dist;
        dist++;
    }
}

// Function to modify matrix based on prime rules
void processMatrix() {
    // We'll store the result in a copy to avoid modifying the matrix while iterating
    int result[MAX][MAX];
    memcpy(result, arr, sizeof(arr));

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (arr[i][j] == 1) {
                // If the current element is 1, we leave it as is.
                result[i][j] = 1;
            } else if (isPrime(arr[i][j])) {
                // Current element is prime
                result[i][j] = arr[i][j] * 2;  // Double the prime number

                // Modify neighboring elements
                if (i > 0) {  // Up
                    if (isPrime(arr[i-1][j])) {
                        result[i-1][j] = arr[i-1][j] * 2;
                    } else if (arr[i-1][j] != 1) {
                        result[i-1][j] = nearestPrime(arr[i-1][j]);
                    }
                }
                if (i < R-1) {  // Down
                    if (isPrime(arr[i+1][j])) {
                        result[i+1][j] = arr[i+1][j] * 2;
                    } else if (arr[i+1][j] != 1) {
                        result[i+1][j] = nearestPrime(arr[i+1][j]);
                    }
                }
                if (j > 0) {  // Left
                    if (isPrime(arr[i][j-1])) {
                        result[i][j-1] = arr[i][j-1] * 2;
                    } else if (arr[i][j-1] != 1) {
                        result[i][j-1] = nearestPrime(arr[i][j-1]);
                    }
                }
                if (j < C-1) {  // Right
                    if (isPrime(arr[i][j+1])) {
                        result[i][j+1] = arr[i][j+1] * 2;
                    } else if (arr[i][j+1] != 1) {
                        result[i][j+1] = nearestPrime(arr[i][j+1]);
                    }
                }
            }
        }
    }

    // Copy result back to arr
    memcpy(arr, result, sizeof(result));
}

// Function to print the modified matrix
void printMatrix() {
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    cin >> R >> C;

    // Input the matrix

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> arr[i][j];
        }
    }

    // Process the matrix according to the rules
    processMatrix();

    // Print the result
    printMatrix();

    return 0;
}