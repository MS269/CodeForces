#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int GCD(int a, int b) {
  if (a < b) swap(a, b);
  while (b != 0) {
    int c = a % b;
    a = b;
    b = c;
  }
  return a;
}

void TestCase() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto& i : a) cin >> i;
  int max_idx = 0;
  for (int i = 1; i < n; ++i) if (a[max_idx] < a[i]) max_idx = i;
  vector<int> b(n);
  b[0] = a[max_idx];
  a[max_idx] = 0;
  int c_gcd = b[0];
  for (int i = 1; i < n; ++i) {
    int c_idx = 0, c_ans = 0;
    for (int j = 0; j < n; ++j) {
      auto gcd = GCD(a[j], c_gcd);
      if (a[j] && gcd > c_ans) {
        c_ans = gcd;
        c_idx = j;
      }
    }
    b[i] = a[c_idx];
    c_gcd = c_ans;
    a[c_idx] = 0;
  }
  for (auto i : b) cout << i << ' ';
  cout << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) TestCase();

  return 0;
}
