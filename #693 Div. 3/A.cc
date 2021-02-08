#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
#pragma warning(disable : 4996)
  freopen("input.txt", "r", stdin);
#endif // _DEBUG
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int w, h, n;
    cin >> w >> h >> n;
    int cnt = 1;
    while (w % 2 == 0) {
      w /= 2;
      cnt *= 2;
    }
    while (h % 2 == 0) {
      h /= 2;
      cnt *= 2;
    }
    cout << (cnt >= n ? "YES" : "NO") << '\n';
  }
  return 0;
}
