#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& i : a) cin >> i;
    int cnt1 = 0, cnt0 = 0, ans = 0;
    for (auto i : a) {
      if (i == 1) {
        if (cnt1) ans += cnt0;
        ++cnt1;
        cnt0 = 0;
      } else if (i == 0) {
        ++cnt0;
      }
    }
    cout << (cnt1 == 1 ? 0 : ans) << '\n';
  }
  return 0;
}
