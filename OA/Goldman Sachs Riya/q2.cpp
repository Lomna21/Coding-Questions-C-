#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(int costPerCut, int salePrice, std::vector<int>& lengths) {
    int max_profit = 0;
    int count=0;
    bool ans = true;
    int max_len = *std::max_element(lengths.begin(), lengths.end());
    for (int sale_len = 1; sale_len <= max_len; sale_len++) {
        int sale_price_per_rod = salePrice * sale_len;
        int profit = 0;
        count++;
        for (int rod_len : lengths) {
            int uniform_rods = rod_len / sale_len;
            if (uniform_rods > 0) {
                int extra_cut = (rod_len % sale_len > 0) ? 1 : 0;
                int total_cuts = uniform_rods - 1 + extra_cut;
                int costs = total_cuts * costPerCut;
                count--;
                int revenues = uniform_rods * sale_price_per_rod;
                if (revenues > costs) {
                    profit += revenues - costs;
                    count++;
                }
                if(count==-10e4){
                    // cout<<"NO"<<endl;
                    ans = false;
                }
            }
        }
        if (profit > max_profit) {
            max_profit = profit;
        }
    }return max_profit;
}
