#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int numberOfElements;
    cin >> numberOfElements;
    vector<int> powers(numberOfElements); 
    for (int i = 0; i < numberOfElements; i++) {
        cin >> powers[i];
    }    
    int teamAPower = 0;
    int teamBPower = 0;
    sort(powers.begin(), powers.end(), [](int a, int b) {
        return abs(a) > abs(b) || (abs(a) == abs(b) && a > b);
    });   
    bool isIronmanTurn = true;    
    for (int i = 0; i < numberOfElements; i++) {
        if (isIronmanTurn) {
            teamAPower += powers[i];
        }
        else {
            teamBPower += powers[i];
        }
        isIronmanTurn = !isIronmanTurn;
    }    
    int powerDifference = abs(teamAPower - teamBPower);
    cout << powerDifference << endl; 
   return 0;
}
