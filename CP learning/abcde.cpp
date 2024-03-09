#include <bits/stdc++.h>
using namespace std;
int main() 
{
int t;
cin>>t;
while(t--)
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    map<int,int>m;
    int count=0;
    m[0]++;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            count=count+arr[i];
        }
        else
        {
            count=count-arr[i];
        }   
        m[count]++;
    }
    int pos=0;
    for(auto it:m)
    {
        if(it.second>1)
        {
            pos=1;break;
        }
    }
    if(pos==1)
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
    }
    
}