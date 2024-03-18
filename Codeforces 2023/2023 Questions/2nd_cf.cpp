#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)


bool isPrime(int n)
{
     if (n == 1)
         return false;
     if (n == 3|n == 2)
         return true;
     if (n % 2 == 0 || n % 3 == 0)
         return false;
     for (int i = 5; i * i <= n; i = i + 6)
         if (n % i == 0 || n % (i + 2) == 0)
             return false;
     return true;
}
void solve(){
    long double px,py,ax,ay,bx,by;
    cin>>px>>py>>ax>>ay>>bx>>by;
    long double w,ap,pb;
    w=(sqrt(pow(abs(bx-ax),2)+pow(abs(by-ay),2)))/2;
    ap=sqrt(pow(abs(ax-px),2)+pow(abs(ay-py),2));
    pb=sqrt(pow(abs(bx-px),2)+pow(abs(by-py),2));
    long double home=sqrt(pow(abs(px),2)+pow(abs(py),2));
    long double ao = sqrt(pow(abs(ax),2)+pow(abs(ay),2));
    long double bo = sqrt(pow(abs(bx),2)+pow(abs(by),2));
   
    long double epsilon = 1e-9;

    long double low = 0, high = 1e15;

    long double ans = 0;

    function<bool(long double)> check = [&](long double mid){
        if (mid < bo && mid < ao) return false;

        if (mid >= w && (ap <= mid || pb <= mid)) return true;
        if (ap <= mid && mid >= ao) return true;
        if (pb <= mid && mid >= bo) return true;
        return false;
    };
    while(high - low >=0){
        long double mid = (low + high)/2;

    if (check(mid)){
        ans = mid;
        high = mid - epsilon;
    }

    else{
        low = mid + epsilon;
    }
    }

    cout << setprecision(11) << ans << endl;



}
signed main(){
   fast;
   int t=1;
   cin>>t;

   while(t--){
    solve();
   }

}