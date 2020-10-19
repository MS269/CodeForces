#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
      int n;
      cin >> n;
      vector<string> grid(n);
      for (auto& i : grid) cin >> i;
      vector<pair<int, int>> ans0, ans1;
      (grid[0][1] == '0' ? ans0 : ans1).push_back({0, 1});
      (grid[1][0] == '0' ? ans0 : ans1).push_back({1, 0});
      (grid[n - 1][n - 2] == '1' ? ans0 : ans1).push_back({n - 1, n - 2});
      (grid[n - 2][n - 1] == '1' ? ans0 : ans1).push_back({n - 2, n - 1});
      if (ans0.size() > ans1.size()) swap(ans0, ans1);
      cout << ans0.size() << '\n';
	  for (auto i : ans0) cout << i.first + 1 << ' ' << i.second + 1 << '\n';
  }
  return 0;
}
