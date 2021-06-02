#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifdef _DEBUG
  if (freopen("input.txt", "r", stdin) == nullptr)
    return -1;
#endif // _DEBUG
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> a(2 * n);
    for (auto &i : a)
      cin >> i;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i)
      cout << a[i] << ' ' << a[i + n] << ' ';
    cout << '\n';
  }
  return 0;
}
