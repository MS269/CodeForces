#include <iostream>
#include <algorithm>

using namespace std;

using ll = long long;

ll GetMinProduct(ll& a, ll& b, ll& x, ll& y, ll& n) {
  ll da = min(n, a - x);
  ll db = min(n - da, b - y);
  return (a - da) * (b - db);
}

void TestCase() {
  ll a, b, x, y, n, min_product = LLONG_MAX;
  cin >> a >> b >> x >> y >> n;
  min_product = min(min_product, GetMinProduct(a, b, x, y, n));
  min_product = min(min_product, GetMinProduct(b, a, y, x, n));
  cout << min_product << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) { TestCase(); }

  return 0;
}
