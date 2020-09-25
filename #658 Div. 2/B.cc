#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> a;

void Solve() {
  int cnt = 0;
  while (cnt < n && a[cnt] == 1) ++cnt;
  cout << ((cnt == n) ^ (cnt % 2) ? "Second" : "First") << '\n';
}

void Input() {
  cin >> n;
  a.clear();
  a.resize(n);
  for (auto& i : a) cin >> i;
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
