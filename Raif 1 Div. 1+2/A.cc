#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << abs(x2 - x1) + abs(y2 - y1)
            + (x1 != x2 && y1 != y2 ? 2 : 0) << '\n';
  }
  return 0;
}
