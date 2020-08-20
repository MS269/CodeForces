#include <iostream>

using namespace std;

bool IsPal(int r, int g, int b, int w) {
  if (r % 2 + g % 2 + b % 2 + w % 2 <= 1) { return true; }
  else { return false; }
}

void TestCase() {
  int r, g, b, w;
  cin >> r >> g >> b >> w;
  if (IsPal(r, g, b, w)) {
    cout << "YES \n";
  } else if (r > 0 && g > 0 && b > 0 && IsPal(r - 1, g - 1, b - 1, w + 1)) {
    cout << "YES \n";
  } else {
    cout << "NO \n";
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) { TestCase(); }
  return 0;
}
