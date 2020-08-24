#include <iostream>

using namespace std;

void TestCase() {
  int n, k;
  cin >> n >> k;
  if (n < k) { cout << k - n << "\n"; }
  else if (n % 2 == k % 2) { cout << "0 \n"; }
  else { cout << "1 \n"; }
}

int main() {
  int t;
  cin >> t;
  while (t--) { TestCase(); }

  return 0;
}
