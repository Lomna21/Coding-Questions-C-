#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    int subject[k];
    for(int i=0;i<k;i++){
        cin>>subject[i];
    }
    int n;
    cin>>n;
    int student[n];
    for(int i=0;i<n;i++){
        cin>>student[i];
    }
    sort(subject,subject+k);
    sort(student,student+n);
    int count=0;
    int temp=0;
    for(int i=0;i<k;i++){
        for(int j=temp;j<n;j++){
            if(subject[i]<=student[j]){
                count+=n-j;
                temp=j;
            }
        }
    }
    cout<<count<<endl;
}