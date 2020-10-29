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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> b(m, vector<int>(n));
    for (auto& i : a) for (auto& j : i) cin >> j;
    for (auto& i : b) for (auto& j : i) cin >> j;
    vector<int> c(n * m + 1, -1);
    for (int i = 0; i < n; ++i) c[a[i][0]] = i;
    for (int i = 0; i < m; ++i) {
      if (c[b[i][0]] != -1) {
        for (int j = 0; j < n; ++j) {
          const int y = c[b[i][j]];
          for (int x = 0; x < m; ++x) cout << a[y][x] << ' ';
          cout << '\n';
        }
        break;
      }
    }
  }
  cerr << clock() / 1e3 << "SEC \n";
  return 0;
}
