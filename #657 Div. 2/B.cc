#include <iostream>
#include <algorithm>

using namespace std;

int64_t l, r, m;

void Solve() {
  int64_t a = l, b = l, c = l, d = r - l;
  for (a = l; a <= r; ++a) {
    int64_t n = max(1LL, (m - d) / a);
    if (n * a < m - d) ++n;
    if (n * a <= m + d) {
      int64_t diff = n * a - m;
      if (diff > 0) {
        b = l;
        c = b + diff;
      } else {
        c = l;
        b = c - diff;
      }
      break;
    }
  }
  cout << a << ' ' << b << ' ' << c << '\n';
}

void Input() {
  cin >> l >> r >> m;
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