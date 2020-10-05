#include <iostream>

using namespace std;

int n, x;

void Solve() {
  cout << (n <= 2 ? 1 : (n - 3) / x + 2) << '\n';
}

void Input() {
  cin >> n >> x;
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
