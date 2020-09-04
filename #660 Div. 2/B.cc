#include <iostream>

using namespace std;

void TestCase() {
  int n;
  cin >> n;
  int m = (n + 3) / 4;
  for (int i = 0; i < n - m; ++i) { cout << 9; }
  for (int i = 0; i < m; ++i) { cout << 8; }
  cout << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) { TestCase(); }

  return 0;
}
