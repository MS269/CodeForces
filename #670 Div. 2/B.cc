#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

using ll = long long;

int n;
vector<int> a;

void TestCase() {
  cin >> n;
  a.resize(n);
  bool zero_exists = false;
  for (auto& i : a) {
    cin >> i;
    if (i == 0) zero_exists = true;
  }
  sort(a.begin(), a.end());
  ll ans = LLONG_MIN;
  if (zero_exists) ans = 0;
  for (int i = 0; i <= 5; ++i) {
    ll cur = 1;
    for (int j = 0; j < i; ++j) cur *= a[j];
    for (int j = i; j < 5; ++j) cur *= a[n - 1 - (j - i)];
    ans = max(ans, cur);
  }
  cout << ans << '\n';
  a.clear();
}

int main() {
  int t;
  cin >> t;
  while (t--) TestCase();

  return 0;
}
