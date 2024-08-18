//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:

    int multiplier(int n,string G){
        int result=0;
        for(int i=n;i>=0;i--){
            result=G[i]^result;
        }
        return result;
    }
    string binToGrey(string B) {
        // code here
        string grey;
        int n=stoi(B);
        /*grey[0]=B[0];
        for(int i=1;i<B.size();i++){
            grey[i]=B[i]^B[i-1];
        }*/
        int ans=0;
        int i=0;
        int digit=0;
        while(n>0){
            digit=(n&1)^((n>>1)&1);
            n=n>>1;
            ans=digit*pow(10,i)+ans; 
            i++;           
        }
        grey=to_string(ans);
        return grey;        
    }
    
    string greyToBin(string G) {
        // code here
        string binary;
        binary[0]=G[0];
        for(int i=1;i<G.size();i++){
            binary[i]=multiplier(i,G);
        }
        return binary;
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string B,G;
        
        cin>>B;
        cin>>G;

        Solution ob;
        cout << ob.binToGrey(B) << endl;
        cout << ob.greyToBin(G) << endl;
    }
    return 0;
}
// } Driver Code Ends