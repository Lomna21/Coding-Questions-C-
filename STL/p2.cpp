#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main(){
    int arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }

    
    int result = gcd(arr[0], gcd(arr[1], arr[2]));

    cout << result << endl;
    
    return 0;
}