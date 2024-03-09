#include<bits/stdc++.h>
using namespace std;

vector<long long> maxMin(vector<string> operations, vector<int> x) {
    vector<long long> result;
    int n = x.size();
    long long max_val = INT_MIN;
    long long min_val = INT_MAX;
    queue<long long> q;

    for (int i = 0; i < n; i++) {
        long long val=x[i];
        if (operations[i] == "push") {
            q.push(x[i]);
            
            max_val = max(max_val, val);
            min_val = min(min_val, val);
            result.push_back(min_val * max_val);  // Push the product to the result vector
        } else {
            q.pop();
            if (!q.empty()) {
                // Recalculate min_val and max_val based on remaining elements in the queue
                max_val = INT_MIN;
                min_val = INT_MAX;
                queue<long long> temp = q;
                while (!temp.empty()) {
                    max_val = max(max_val, temp.front());
                    min_val = min(min_val, temp.front());
                    temp.pop();
                }
            } else {
                max_val = INT_MIN;
                min_val = INT_MAX;
            }
            result.push_back(min_val * max_val);  // Push the product to the result vector
        }
    }
    return result;
}

int main() {
    // vector<string> operations = {"push", "push", "push", "push","pop"};
    // vector<int> x = {1, 2, 3, 4, 5};

    // vector<long long> result = maxMin(operations, x);

    // // Print the products after each operation
    // for (int i = 0; i < result.size(); i++) {
    //     cout << result[i] << " ";
    // }
    int n;
    cin>>n;
    
        vector<string> operations;
        vector<int> x;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            operations.push_back(s);
        
        }
        for(int i=0;i<n;i++){
            
            int a;
            cin>>a;
            x.push_back(a);
        }
        for(int i=0;i<n;i++){
            cout<<operations[i]<<" ";
        }cout<<endl;
        for(int i=0;i<n;i++){
            cout<<x[i]<<" ";
        }
        // vector<long long> result = maxMin(operations, x);
        // for (int i = 0; i < result.size(); i++)
        // cout << result[i] << " ";
    

    return 0;
}
