#include <iostream>
#include <vector>

using namespace std;

int n, t;
vector<int> a;

void Solve() {
  int mid = 0;
  for (int i = 0; i < n; ++i) {
    int p;
    if (t % 2 == 0 && a[i] == t / 2) p = ++mid % 2;
    else if (2 * a[i] < t) p = 0;
    else p = 1;
    cout << p << " \n"[i == n - 1];
  }
}

void Input() {
  cin >> n >> t;
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
