#include <iostream>

using namespace std;

using ll = long long;

ll x, y, k;

ll CeilToFloor(ll a, ll b) { return (a + b - 1) / b; }

void TestCase() {
  cin >> x >> y >> k;
  cout << CeilToFloor(k * y + k - 1, x - 1) + k << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) TestCase();

  return 0;
}
