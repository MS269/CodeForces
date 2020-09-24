#include <iostream>

using namespace std;

using ll = long long;

ll x;

ll GetSquare(ll x) { return x * (x + 1) / 2; }

void TestCase() {
  cin >> x;
  int cnt = 0;
  for (int i = 1; GetSquare((1LL << i) - 1) <= x; ++i) {
    ++cnt;
    x -= GetSquare((1LL << i) - 1);
  }
  cout << cnt << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) TestCase();

  return 0;
}
