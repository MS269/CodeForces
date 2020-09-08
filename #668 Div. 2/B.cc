#include <iostream>
#include <algorithm>

using namespace std;

using ll = long long;

void TestCase() {
  int n;
  cin >> n;
  ll m = 0;
  for (int i = 0; i < n; ++i) {
    ll a;
    cin >> a;
    m = max(0LL, m + a);
  }
  cout << m << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) { TestCase(); }

  return 0;
}
