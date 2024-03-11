//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define float double
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define nextline cout<<endl
#define all(v) v.begin(),v.end()
#define min3(a,b,c) min(c,min(a,b))
#define min4(a,b,c,d) min(d,min(c,min(a,b)))
#define FOR_0(i,n) for(int i=0;i<n;i++)
#define FOR_N(n,i) for(int i=n-1;i>=0;i--)
#define FOR_AB(a,b) for(int i=a;i<b;i++)
#define pi (3.141592653589)
#define N_5 100005
#define N_9 1000000009
//------------------------------------------
//Sorting vector pair according to second element
// --> time complexity  O(N*logN)
bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);} //ascending
bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);} //descending
//..........................................
//Bits
string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
int binaryToDecimal(string n){string num = n;int dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}
//..........................................
//Check
bool isPrime(int n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(int x){if (x >= 0) {int sr = sqrt(x);return (sr * sr == x);}return false;}
//..........................................
void solve(){
    int n, m, x;
    cin >> n >> m >> x;

    vector<pair<int, char>> throws;
    for (int j = 0; j < m; j++) {
        int a;char b;
        cin >> a >> b;
        throws.push_back(make_pair(a, b));
    }

    set<int> players_p;
    players_p.insert(x);

    for (auto& i : throws) {
        set<int> players_newp;
        for (int p : players_p) {
            int new_player;
            if (i.second == '0') {
                new_player = (p + i.first) % n;
                if (new_player == 0){
                    new_player = n;
                }  
            } else if (i.second == '1') {
                new_player = (p - i.first + n) % n;
                if (new_player == 0){
                    new_player = n;
                }
            } else {
                int new_player_cw = (p + i.first) % n;
                if (new_player_cw == 0)
                    new_player_cw = n;
                int new_player_ccw = (p - i.first + n) % n;
                if (new_player_ccw == 0)
                    new_player_ccw = n;
                players_newp.insert(new_player_cw);
                players_newp.insert(new_player_ccw);
                continue;
            }
            players_newp.insert(new_player);
        }
        players_p = players_newp;
    }

    cout << players_p.size() << endl;
    for (int p : players_p)
        cout << p << " ";
    cout << endl;
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    //cout<<"CASE: "<<t<<endl;
    solve();
    }
    return 0;
}