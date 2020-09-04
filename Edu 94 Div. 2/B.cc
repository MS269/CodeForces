#include <iostream>
#include <algorithm>

using namespace std;

using ll = long long;

ll CanTake(ll s, ll w, ll s_cnt, ll w_cnt, ll p) {
  if (s > w) { return CanTake(w, s, w_cnt, s_cnt, p); }
  if (p <= s * s_cnt) { return p / s; }
  return s_cnt + min(w_cnt, (p - s * s_cnt) / w);
}

void TestCase() {
  ll p, f, s_cnt, w_cnt, s, w, max_cnt = 0;
  cin >> p >> f >> s_cnt >> w_cnt >> s >> w;
  for (ll i = 0; i <= s_cnt; ++i) {
    if (p >= s * i) {
      ll j = min(w_cnt, (p - s * i) / w);
      max_cnt = max(max_cnt, i + j + CanTake(s, w, s_cnt - i, w_cnt - j, f));
    }
  }
  cout << max_cnt << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) { TestCase(); }

  return 0;
}
