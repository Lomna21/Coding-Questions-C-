#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  unordered_set<char> m1 = {'a', 'i','o','u','e'};
  for (int i = 0; i < n;)
  {
    cout << s[i];
    if (m1.count(s[i]))
    {
      if (i + 2 == n)
      {
        cout << s[i + 1];
        cout << endl;
        return;
      }
      if (i + 2 < n and !m1.count(s[i + 2]))
      {
        cout << s[i + 1] << '.';
        i += 2;
        continue;
      } else
      {
        if (i != n - 1)
          cout << '.';
      }
    }
    i++;
  }
  cout << endl;
}
signed main()
{


  int t = 1;
  cin >> t;

  for (int i = 1; i <= t; i++)
  {
    solve();
  }

  return 0;
}