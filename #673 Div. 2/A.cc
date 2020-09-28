#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, k;
vector<int> a;

void Solve() {
  auto mina = min_element(a.begin(), a.end());
  int cnt = 0;
  for (auto it = a.begin(); it != a.end(); ++it) {
    if (it == mina) continue;
    cnt += (k - *it) / *mina;
  }
  cout << cnt << '\n';
}

void Input() {
  cin >> n >> k;
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
