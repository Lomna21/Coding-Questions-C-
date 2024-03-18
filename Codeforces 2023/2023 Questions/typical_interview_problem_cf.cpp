//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define NO cout<<NO<<endl
#define YES cout<<YES<<endl
#define all(v) v.begin(),v.end()
#define N_5 100005
#define N_9 1000000009
void isSubstring(string str2)
{
	int n;
    cin>>n;
    string str1;
    cin>>str1;
    int M = str1.length();
	int N = str2.length();
	


	/* A loop to slide pat[] one by one */
	for (int i = 0; i <= N - M; i++) {
        int j;
		/* For current index i, check for
pattern match */
		for (j = 0; j < M; j++){
			if (str2[i + j] != str1[j])
				break;
        }
        if (j == M)
			cout<<"no"<<endl;
            
	    else{
            cout<<"yes"<<endl;
        }
        }

        
}

signed main(){
    fast;
    string str2="FBFFBFFBFBFFBFFBFBFFBFFB";
    
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    isSubstring(str2);
    }
    return 0;
}