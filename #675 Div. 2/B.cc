#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int n, m;
vector<vector<int>> a;

void Solve() {
  int64_t ans = 0;
  for (int i = 0; i < (n + 1) / 2; ++i) {
    for (int j = 0; j < (m + 1) / 2; ++j) {
      int x = n - i - 1, y = m - j - 1;
      vector<int> v = {a[i][j]};
      if (i != x) v.push_back(a[x][j]);
      if (j != y) v.push_back(a[i][y]);
      if (i != x && j != y) v.push_back(a[x][y]);
      sort(v.begin(), v.end());
      int mid = v[(v.size() - 1) / 2];
      for (auto k : v) ans += abs(mid - k);
    }
  }
  cout << ans << "\n";
}

void Input() {
  cin >> n >> m;
  a.clear();
  a.resize(n, vector<int>(m));
  for (auto& i : a) for (auto& j : i) cin >> j;
}

void TestCase() {
  Input();
  Solve();
}

int main() {
  int t;
  cin >> t;
  while (t--) TestCase();

  return 0;
}