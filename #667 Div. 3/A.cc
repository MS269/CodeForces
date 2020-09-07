#include <iostream>
#include <cmath>

using namespace std;

void TestCase() {
  int a, b;
  cin >> a >> b;
  cout << (int)ceil(abs(b - a) / 10.0) << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) { TestCase(); }

  return 0;
}
