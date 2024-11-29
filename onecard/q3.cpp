// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

void solution(int N, vector<vector<int>> money) {
    vector<int> atm = {0, 0, 0, 0, 0};
    vector<int> denominations = {500, 200, 100, 50, 20};
    
    for (auto request : money) {
        int request_type = request[0];
        
        if (request_type == -1) {
            for (int i = 0; i < 5; ++i) {
                atm[i] += request[i + 1];
            }
        } else {
            int withdraw_amount = request_type;
            vector<int> temp_atm = atm;
            vector<int> notes_used(5, 0);
            bool possible = true;
            
            for (int i = 0; i < 5; ++i) {
                if (withdraw_amount >= denominations[i]) {
                    int needed = withdraw_amount / denominations[i];
                    if (temp_atm[i] >= needed) {
                        notes_used[i] += needed;
                        withdraw_amount -= needed * denominations[i];
                        temp_atm[i] -= needed;
                    } else {
                        notes_used[i] += temp_atm[i];
                        withdraw_amount -= temp_atm[i] * denominations[i];
                        temp_atm[i] = 0;
                    }
                }
            }
            
            if (withdraw_amount == 0) {
                atm = temp_atm;
                for (int note : notes_used) {
                    cout << note << " ";
                }
                cout << endl;
            } else {
                cout << "-1 -1 -1 -1 -1" << endl;
            }
        }
    }
}

int main() {
    int N;
    cin >> N;
    vector<vector<int>> money(N, vector<int>(6));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 6; ++j) {
            cin >> money[i][j];
        }
    }
    solution(N, money);
    return 0;
}