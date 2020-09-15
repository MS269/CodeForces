#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<int> a;
vector<int> l;

void TestCase() {
  a.clear();
  l.clear();
  cin >> n;
  a.resize(n);
  l.resize(n);
  for (auto& i : a) cin >> i;
  for (auto& i : l) cin >> i;
  for (int i = 0; i < n; ++i) {
    if (l[i] == 1) continue;
    int max_idx = i;
    for (int j = i; j < n; ++j) if (l[j] == 0 && a[max_idx] < a[j]) max_idx = j;
    swap(a[i], a[max_idx]);
  }
  for (auto i : a) cout << i << ' ';
  cout << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) TestCase();

  return 0;
}
