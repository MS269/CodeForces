#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void TestCase() {
  vector<int> a(3);
  vector<int> b(3);
  for (int i = 0; i < 3; ++i) { cin >> a[i]; }
  for (int i = 0; i < 3; ++i) { cin >> b[i]; }
  cout << 2 * min(a[2], b[1]) - 2 * min(a[1] - min(a[1], b[0]), b[2] - min(a[0], b[2])) << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) { TestCase(); }

  return 0;
}
