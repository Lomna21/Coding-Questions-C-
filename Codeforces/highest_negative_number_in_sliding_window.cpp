//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
    
    
    deque<long long> dq;
    vector<long long> ans;
    for(long long int i=0;i<N;i++){
        if( !dq.empty() && dq.front()==(i-K) ){
            dq.pop_front();
        }
        while( (!dq.empty()) && ( (A[dq.back()]>0)
        ||  ( (A[dq.back()]<0) && (A[i]>A[dq.back()]) && A[i]<0 ) ) ){
            dq.pop_back();
        }
        dq.push_back(i);
        if(i>=K-1){
            if(A[dq.front()]<0){
               ans.push_back(A[dq.front()]); 
            }
            else{
               ans.push_back(0);
            }
            
        }
    }
    return ans;
                                                 
                                                 
                                                 
                                                 
                                                 
 }