#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
  freopen("input.txt", "r", stdin);
#endif // _DEBUG
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; ++i) a[i][i] = a[i][n - i - 1] = 1;
    if (n % 2) a[n / 2 - 1][n / 2] = a[n / 2][n / 2 + 1] = 1;
    for (auto& i : a) {
      for (auto& j : i) cout << j << ' ';
      cout << '\n';
    }
  }
  cerr << clock() / 1000.0 << "SEC \n";
  return 0;
}
