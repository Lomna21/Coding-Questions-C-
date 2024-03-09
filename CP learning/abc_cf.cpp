#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    vector<string> s(3);
    for(int i=0; i<3; i++) {
        cin >> s[i];
    }

    int r = -1;
    int d = -1;

    for(int i=0; i<3; i++)  {
        for(int j=0; j<3; j++) {
            if(s[i][j] == '?') {
                r = i;
                d = j;
                break;
            }
        }
    }
    int a=0,b=0,c=0;
    for(int i=0;i<3;i++){
        
        if(s[r][i]=='A'){
            a=1;
        }
        if(s[r][i]=='B'){
            b=2;
        }
        if(s[r][i]=='C'){
            c=3;
        }
    }
    
    if(a+b+c==3){
        cout<<"C"<<endl;
        return;
    }
    else if(a+b+c==4){
        cout<<"B"<<endl;
        return;
    }
    else if(a+b+c==5){
        cout<<"A"<<endl;
        return;
    }
   
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}