#include <bits/stdc++.h> 
using namespace std;
vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {

	//FIRST METHOD (brute force) time complexity is O(n*n*n)

	/*vector<vector<int>> ans;
	set<vector<int>> visited;
	
	for(int i=0;i<arr.size();i++){
		for(int j=i+1;j<arr.size();j++){
			for(int k=j+1;k<arr.size();k++){
				if(arr[i]+arr[j]+arr[k]==K){
					vector<int> temp;
					temp.push_back(arr[i]);
					temp.push_back(arr[j]);
					temp.push_back(arr[k]);
					sort(temp.begin(),temp.end());
					if(visited.find(temp)==visited.end()){
						ans.push_back(temp);
						visited.insert(temp);
					}
				}
			}
		}
	}
	return ans;*/

	//2ND METHOD (using two pointer approach) time complexity O(n*n)

	vector<vector<int>> ans;
	set<vector<int>> visited;
	sort(arr.begin(),arr.end());
	for(int i=0;i<arr.size();i++){
		int j=i+1;
		int k=arr.size()-1;
		while(j<k){		
			if(arr[j]+arr[k]>K-arr[i]){
				k--;
				if(j>=k) break;
			}
			if(arr[j]+arr[k]<K-arr[i]){
				j++;
				if(j>=k) break;
			}
			while(arr[j]==arr[j+1]){
				j++;
			}
			while(arr[k]==arr[k-1]){
				k--;
			}
		
			if(arr[j]+arr[k]==K-arr[i]){
				vector<int> temp;
				temp.push_back(arr[i]);
				temp.push_back(arr[j]);
				temp.push_back(arr[k]);
				j++;k--;
				if(visited.find(temp)==visited.end()){
					ans.push_back(temp);
					visited.insert(temp);
				}
				//ans.push_back(temp);
			}
		}
	}
	return ans;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
    	vector<int> arr;
    	for(int i=0;i<n;i++){
    	    int x;cin>>x;
        	arr.push_back(x);
    	}
    	int k;cin>>k;
    	vector<vector<int>> ans = findTriplets(arr,n,k);
    	for(int i=0;i<ans.size();i++){
        	for(int j=0;j<ans[i].size();j++){
            	cout<<ans[i][j]<<" ";
        	}
        	cout<<endl;
    	}	    
	}
    
}