//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/* print the name of the parties along with seats
   they got in election and print the maximum seat
   received
*/
void Election2019(char party[], int seats[], int n)
{
    //Your code here
    map<char,int> m;
    for(int i=0;i<n;i++){
        m[party[i]]=seats[i];
    }
    for(auto &x : m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    
    
    int MAX=INT_MIN;
    for(int i=0;i<n;i++){
        MAX=max(MAX,seats[i]);
    }
    cout<<MAX;
}

//{ Driver Code Starts.
    
int main() {
	
		int t; 
		cin>>t;
		while(t--)
		{
		    int n; 
		    cin>>n;
		    char party[n];
		    int seats[n];
		    for(int i = 0; i < n; i++)
		        cin>>party[i]; 
		     
		    for(int i = 0; i < n; i++)
		        cin>>seats[i];
		     
		    Election2019(party, seats, n);
		}
}
// } Driver Code Ends