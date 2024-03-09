#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    string time;
    getline(cin,time);
    //cin>>time;
    //gets(time);
    if(time[8]=='A'){
        if(time[0]=='1'&&time[1]=='2'){
            time[0]=time[1]='0';
        }        
    }
    else{
        if(time[1]=='8'){
            time[0]=2;
            time[1]=0;
        }
        else if(time[1]=='9'){
            time[0]=2;
            time[1]=1;
        }
        else if(time[0]!='1'&&time[1]!='2'){
            time[0]+=1;
            time[1]+=2;
        }
    }
    time[8]='\0';
    time[9]='\0';
    cout<<time;
}
