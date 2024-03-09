#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        nums.push_back(x);
    }
    int k;cin>>k;
        
        //int n = nums.size();
        sort(nums.begin(),nums.end());
        int arr[n];
        for(int i=0;i<n-1;++i){
            arr[i]=nums[i+1]-nums[i];
            //cout<<arr[i]<<" ";
        }
        cout<<endl;
        int ans=1;
        int count=1;
        int sum=0;
        for(int i=0;i<n;i++){
            count=1;
            int multiplier=1;
            for(int j=i;j<n;j++){

                sum+=arr[j]*multiplier;
                multiplier++;
                //cout<<sum<<" ";
                
                if(sum>k){
                    ans=max(ans,count);
                    sum=0;
                    cout<<endl;
                    break;   
                }
                if(sum>=k){
                    count++;
                    ans=max(ans,count);
                    sum=0;
                    cout<<endl;
                    break;
                }
                count++;
            }
        }
        cout<<endl;
        cout<<ans;

}