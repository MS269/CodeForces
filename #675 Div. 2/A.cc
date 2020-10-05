#include <iostream>
#include <algorithm>

using namespace std;

int a, b, c;

void Solve() {
  cout << max(max(a, b), c) << '\n';
}

void Input() {
  cin >> a >> b >> c;
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
