#include <iostream>

using namespace std;

void TestCase() {
  int n;
  cin >> n;
  cout << n / 2 + 1 << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) { TestCase(); }

  return 0;
}
