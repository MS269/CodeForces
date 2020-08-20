#include <iostream>

using namespace std;

void TestCase() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; ++i) { cout << i << " "; }
  cout << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) { TestCase(); }

  return 0;
}
