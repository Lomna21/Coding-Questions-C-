#include<bits/stdc++.h>
using namespace std;
int main(){
    int d1,d2,m1,m2,y1,y2;
    int fine;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;
    if(m1==m2 && y1==y2 && d1>d2){
        fine=(d1-d2)*15;        
    }
    if(d1<d2 && m1==m2 && y1==y2){
        fine=0;
    }
    if(y1<y2){
        fine=0;
    }
    if(y1==y2 && m1<m2){
        fine=0;
    }
    if(m1>m2 && y1==y2){
        fine= (m1-m2)*500;
    }
    if(y1>y2){
        fine=10000;
    }
    cout<<fine;
}
