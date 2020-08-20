#include <iostream>
#include <vector>

using namespace std;

void TestCase() {
  int n, m;
  cin >> n >> m;
  vector<string> grid(n);
  for (int i = 0; i < n; ++i) { cin >> grid[i]; }
  int cnt = 0;
  for (int i = 0; i < n; ++i) { if (grid[i][m - 1] == 'R') { ++cnt; } }
  for (int i = 0; i < m; ++i) { if (grid[n - 1][i] == 'D') { ++cnt; } }
  cout << cnt << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) { TestCase(); }

  return 0;
}
