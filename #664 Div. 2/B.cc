#include <iostream>

using namespace std;

int main() {
  int n, m, x, y;
  cin >> n >> m >> x >> y;
  cout << x << " " << y << "\n";
  for (int i = m; i >= 1; --i) {
    if (i == y) { continue; }
    cout << x << " " << i << "\n";
  }
  bool is_rev = false;
  for (int i = 1; i <= n; ++i) {
    if (i == x) {
      continue;
    } else if (!is_rev) {
      for (int j = 1; j <= m; ++j) { cout << i << " " << j << "\n"; }
      is_rev = !is_rev;
    } else if (is_rev) {
      for (int j = m; j >= 1; --j) { cout << i << " " << j << "\n"; }
      is_rev = !is_rev;
    }
  }

  return 0;
}
