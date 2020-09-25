#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

int n;
vector<int> a;

void Input() {
  cin >> n;
  a.clear();
  a.resize(n);
  for (auto& i : a) cin >> i;
}

void Solve() {
  ll ans = 0;
  for (int j = 29; j >= 0; --j) {
    ll cnt = 0;
    for (int i = 0; i < n; ++i) if (a[i] >= (1 << j) && a[i] < (1 << (j + 1))) ++cnt;
    ans += cnt * (cnt - 1) / 2;
  }
  cout << ans << '\n';
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
