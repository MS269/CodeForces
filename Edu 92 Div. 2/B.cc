#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void TestCase() {
  int n, k, z;
  cin >> n >> k >> z;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) { cin >> a[i]; }
  int ans = 0, right_sum = 0, left_sum = 0;
  for (int i = 0; i < k + 1; ++i) {
    if (i < n - 1) { left_sum = max(left_sum, a[i] + a[i + 1]); }
    right_sum += a[i];
    if (i % 2 == k % 2) {
      int left = (k - i) / 2;
      if (left <= z) { ans = max(ans, right_sum + left_sum * left); }
    }
  }
  cout << ans << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) { TestCase(); }

  return 0;
}
