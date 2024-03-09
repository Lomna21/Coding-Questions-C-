#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n) {
    int ans = n&(n-1);
    if(ans == 0){
        //cout<< (n & (n-1))<<endl;
        return true;
    }
    else{
        return false;
    }

    }
int main(){
    int n;cin>>n;
    cout<<isPowerOfTwo(n);
}