#include <iostream>

using namespace std;

using ll = long long;

void TestCase() {
  ll l, r;
  cin >> l >> r;
  if (l * 2 <= r) { cout << l << " " << l * 2 << "\n"; }
  else { cout << "-1 -1 \n"; }
}

int main() {
  int t;
  cin >> t;
  while (t--) { TestCase(); }

  return 0;
}
