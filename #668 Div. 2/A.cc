#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void TestCase() {
  int n;
  cin >> n;
  vector<int> p(n);
  for (auto& a : p) { cin >> a; }
  reverse(p.begin(), p.end());
  for (auto a : p) { cout << a << ' '; }
  cout << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) { TestCase(); }

  return 0;
}
