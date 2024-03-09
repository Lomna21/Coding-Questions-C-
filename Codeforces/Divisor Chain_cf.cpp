//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define float double
#define pi (3.141592653589)
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define NO cout<<NO<<endl
#define YES cout<<YES<<endl
#define next cout<<endl
#define all(v) v.begin(),v.end()
#define min3(a,b,c) min(c,min(a,b))
#define min4(a,b,c,d) min(d,min(c,min(a,b)))
#define FOR_0(i,n) for(int i=0;i<n;i++)
#define FOR_N(n,i) for(int i=n-1;i>=0;i--)
#define FOR_AB(a,b) for(int i=a;i<b;i++)
#define N_5 100005
#define N_9 1000000009

vector<int> decToBinary(int n)
{
    // array to store binary number
    vector<int> binaryNum (32,0);
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    // printing binary array in reverse order
    // for (int j = i - 1; j >= 0; j--)
    //     cout << binaryNum[j];
    return binaryNum;
}

void solve(){
    int x;
    cin>>x;
    vector<int> binaryNum=decToBinary(x);
    int index=0;
    //int curr=0;
    for(int i=0;i<binaryNum.size();i++){
        //cout<<binaryNum[i];
        if(binaryNum[i]==1){
            index=i;
        }
        //index=max(curr,index);
    }
    int ar[index+1];
    for(int i=0;i<=index;i++){
        ar[i]=binaryNum[i];
        //cout<<ar[i];
    }
    //cout<<endl;
    // int ans[index+3];
    // ans[0]=x;
    // cout<<index;
    // ans[index+3]=1;
    vector<int> ans;
    ans.push_back(x);
    for(int i=0;i<index;i++){
        int val=0;
        if(ar[i]==1){
            val=pow(2,i);
            x=x-val;
            ans.push_back(x);


            //cout<<val<<" ";
        }
    }//next;
    int val=pow(2,index);
    while(val>1){
        val=val/2;
        ans.push_back(val);
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }next;
    //ans.push_back(1);

    //cout<<endl;

}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}