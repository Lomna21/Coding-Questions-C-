//jaato ki maa ki choot...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define NO cout<<NO<<endl
#define YES cout<<YES<<endl
#define all(v) v.begin(),v.end()
#define N_5 100005
#define N_9 1000000009
void solve(){
    /*
    int n;cin>>n;
    vector <int,int> v;
    vector <int,int> va;
    int arr[n];
    int value_p=0;
    int value_n=0;
    //map<int,int,greater<int>> m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        //v.push_back((arr[i],i));
        //m[v[i]]=0;
    }
    for(int i=0;i<n;i++){
        v.push_back((arr[i],i));
    }
    sort(v.begin(), v.end());
    int count=1;
    int ans=0;
    for(int i=0;i<n;i+2){
        ans+= 
    }
    int arr_ans[n];
    for(int i=0;i<n;i++){
        if(i%2==0){
            arr_ans[i]=value_p++;
        }
        else{
            arr_ans[i]=value_n--;
        }
    }
    for(int i=0;i<n;i++){
        va[i].second=arr_ans[i];
        va[i].first=v[i].second;
    }
    sort(va.begin(),va.end());
    cout<<"0"<<" ";
    for(int i=0;i<n;i++){
        cout<<va[i].second<<" ";
    }
    cout<<endl;
    */
   int n;cin>>n;
   vector<int> v;
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   vector<int> temp;
   for(int i=0;i<n;i++){
    temp[i]=v[i];
   }
   map<int,int> m;
   for(int i=0;i<n;i++){
    m[v[i]]=i;
   }
   int positive_no=1;
   int negative_no=-1;
   sort(v.begin(),v.end(),greater<int>());
   for(int i=0;i<n;i++){
    if(i%2==0){
        m[v[i]]=positive_no;
        positive_no++;
    }
    else{
        m[v[i]]=negative_no;
        negative_no--;
    }
   }
   cout<<"0"<<" ";
   /*
   for(auto i:m){
    cout<<i.second<<" ";
   }*/
   for(int i=0;i<n;i++){
    cout<<m[temp[i]]<<" ";
   }
   cout<<endl;



    

    

}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}