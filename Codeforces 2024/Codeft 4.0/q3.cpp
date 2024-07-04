#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = 0;
    int count=1;
    while(arr.size()>0){
        vector<int> rest;
        bool flag = true;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == count) {
                count++;
                if(flag){
                    ans++;
                    flag = false;
                }
            }
            else {
                rest.push_back(arr[i]);
                flag = true;
            }
        }
        if (rest.size() == 0) {
            cout<<ans<<endl;
        }
        arr=rest;
    }
}

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        solve();
    }
    return 0;
}
