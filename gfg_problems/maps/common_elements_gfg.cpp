#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
/*
int main(){
    //method 1
    //time complexity --> O(n1+n2+n3)
    //space complexity --> O(n1+n2+n3)

    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int a[n1],b[n2],c[n3];
    for(int i=0;i<n1;i++) cin>>a[i];
    for(int i=0;i<n2;i++) cin>>b[i];
    for(int i=0;i<n3;i++) cin>>c[i];

    map<int,int> m1,m2,m3;
    
    for(int i=0;i<n1;i++) m1[a[i]]++;
    for(int i=0;i<n2;i++) m2[b[i]]++;
    for(int i=0;i<n3;i++) m3[c[i]]++;

    vector<int> v;

    for(int i=0;i<n1;i++){
        if(m1[a[i]] && m2[a[i]] && m3[a[i]]){
            v.push_back(a[i]);
            m1[a[i]]=0; // this line will help in getting only unique elements. 
            //If this line is not present then we will get all common elements with repetition.
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}*/

    //method 2
    //time complexity--> O(n1+n2+n3)
    //space complexity--> O(1)
    //this code is applicable if all three arrray are sorted 
    int main(){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        int a[n1],b[n2],c[n3];
        for(int i=0;i<n1;i++) cin>>a[i];
        for(int i=0;i<n2;i++) cin>>b[i];
        for(int i=0;i<n3;i++) cin>>c[i];

        vector<int> v;
        int i=0,j=0,k=0;
        while(n1>i && n2>j && n3>k){
            if(a[i]==b[j] && b[j]==c[k]){
                v.push_back(a[i]);
                i++;j++;k++;
            }
            else if(a[i]<b[j]){
                i++;
            }
            else if(b[j]<c[k]){
                j++;
            }
            else{
                k++;
            }
            int xx=a[i-1];
            while(xx==a[i]) i++;

            int yy=b[j-1];
            while(yy==b[i]) j++;

            int zz=c[k-1];
            while(zz==c[k]) k++;
        }
        if(v.size()==0){
            cout<<"-1"<<endl;
        }
        else{
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
        }
    } 